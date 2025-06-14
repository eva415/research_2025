#!/usr/bin/env python3

# ROS
import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
# Interfaces
from rcl_interfaces.msg import Parameter, ParameterValue, ParameterType
from rcl_interfaces.srv import SetParameters
from std_srvs.srv import Trigger
from std_msgs.msg import Float32MultiArray, Int32
from geometry_msgs.msg import TwistStamped # to publish to the UR5
from controller_manager_msgs.srv import SwitchController
import numpy as np
import pandas as pd

class FlexToFListener(Node):
    def __init__(self, calibrate=False):
        super().__init__('flex_tof_listener')
        self.cbgroup = ReentrantCallbackGroup()
        self.calibrate = calibrate

        # State machine: servo -> approach -> pick
        self.state = 'servo'
        self.position_threshold = 0.5  # xy-centering threshold
        self.tof_servo_threshold = 95
        self.tof_threshold = 45       # z-approach threshold (example value)
        self.tof_override = 65         # override threshold to force approach
        self.tof_distance = None

        self.flex_subscriber = self.create_subscription(
            Float32MultiArray,
            '/flex_sensor_data',
            self.flex_callback,
            10,
            callback_group=self.cbgroup
        )

        self.tof_subscriber = self.create_subscription(
            Int32,
            '/tof_sensor_data',
            self.tof_callback,
            10,
            callback_group=self.cbgroup
        )

        self.apple_publisher = self.create_publisher(Float32MultiArray, '/position_apple', 10)
        self.gripper_publisher = self.create_publisher(TwistStamped, '/servo_node/delta_twist_cmds', 10)

        self.get_logger().info('FlexToFListener node has been started.')


        # Kalman filter state
        n = 2
        m = 4
        self.z = np.zeros((m, 1))
        self.x = np.zeros((n, 1))
        self.R = np.eye(m) * 0.05
        self.P = np.ones((n, n))
        self.H = np.array([
            [1, 0],
            [0, 1],
            [-1, 0],
            [0, -1]
        ])
        self.A = np.eye(n)
        self.Q = np.eye(n) * 0.05

        # PID controller and state variables
        self.current_x, self.current_y = 0.0, 0.0
        self.current_x_vel, self.current_y_vel = 0.0, 0.0
        self.smoothed_x, self.smoothed_y = 0.0, 0.0
        self.K_p = 0.3
        self.K_i = 0.0
        self.K_d = 0.0
        self.dt = 0.01
        self.prev_time = self.get_clock().now().nanoseconds * 1e-9
        self.integral_x = 0.0
        self.integral_y = 0.0
        self.prev_x_error = 0.0
        self.prev_y_error = 0.0
        self.vel_max = 0.1
        self.scale = 4.0
        self.alpha = 0.5  # increased smoothing alpha
        self.deadband = 0.05  # increased deadband threshold

        if self.calibrate:
            self.all_data = np.zeros([1, 4])

        # UR5 style clients
        # 1. Switch controller
        m_callback_group = MutuallyExclusiveCallbackGroup()
        self.switch_controller_client = self.create_client(
            SwitchController,
            "/controller_manager/switch_controller",
            callback_group=m_callback_group
        )
        while not self.switch_controller_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for /controller_manager/switch_controller...")

        # 2. Start servo client (Trigger)
        self.start_servo_client = self.create_client(
            Trigger,
            "/servo_node/start_servo",
            callback_group=m_callback_group
        )
        while not self.start_servo_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for /servo_node/start_servo...")

        # 3. Configure servo client (SetParameters) to switch frames
        self.configure_servo_cli = self.create_client(
            SetParameters,
            '/servo_node/set_parameters',
            callback_group=m_callback_group
        )
        while not self.configure_servo_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for /servo_node/set_parameters...")

        # 4. Turn on servo mode
        self._enable_servo_mode(frame="tool0")  # <-- pick “tool0” for gripper frame or “base_link” for world frame


    def _enable_servo_mode(self, frame: str = "tool0"):
        """
        1) Switch from joint_trajectory_controller → forward_position_controller
        2) Call /servo_node/start_servo
        3) Set the planning frame via /servo_node/set_parameters.
        """

        # 1. switch to “forward_position_controller”
        req_switch = SwitchController.Request()
        # To servo, we activate “forward_position_controller” and deactivate “joint_trajectory_controller”
        req_switch.activate_controllers = ["forward_position_controller"]
        req_switch.deactivate_controllers = ["joint_trajectory_controller"]
        req_switch.strictness = SwitchController.Request.STRICT  # optional but recommended
        req_switch.timeout = rclpy.duration.Duration(seconds=5.0).to_msg()

        future_switch = self.switch_controller_client.call_async(req_switch)
        rclpy.spin_until_future_complete(self, future_switch)
        resp_switch = future_switch.result()
        if resp_switch.ok:
            self.get_logger().info("Switched to forward_position_controller for Servo.")
        else:
            self.get_logger().error("Failed to switch controllers for Servo!")

        # 2. start servo
        start_req = Trigger.Request()
        future_start = self.start_servo_client.call_async(start_req)
        rclpy.spin_until_future_complete(self, future_start)
        resp_start = future_start.result()
        if resp_start.success:
            self.get_logger().info("MoveIt Servo started successfully.")
        else:
            self.get_logger().error(f"MoveIt Servo did not start: {resp_start.message}")

        # 3. configure servo planning frame
        set_frame_req = SetParameters.Request()
        # The parameter name must EXACTLY match how MoveIt Servo expects it:
        val = ParameterValue(
            type=ParameterType.PARAMETER_STRING,
            string_value=frame
        )
        set_frame_req.parameters = [
            Parameter(
                name='moveit_servo.robot_link_command_frame',
                value=val
            )
        ]
        future_param = self.configure_servo_cli.call_async(set_frame_req)
        rclpy.spin_until_future_complete(self, future_param)
        self.get_logger().info(f"Configured MoveIt Servo planning frame to '{frame}'.")

    def flex_callback(self, msg: Float32MultiArray):
        self.get_logger().info(f"STATE: {self.state}, tof: {self.tof_distance}")
        # Read and scale sensor values
        values = list(msg.data)
        measurement = np.array([v/self.scale for v in values]).reshape((4,1))

        # Calibrate if requested
        if self.calibrate:
            mes = np.array(values)
            self.all_data = np.vstack([self.all_data, mes])
            df = pd.DataFrame(self.all_data[1:], columns=['f1','f2','f3','f4'])
            df.to_csv('Calibration_data.csv', index=False)
            sigma = np.cov(df.values.T)
            self.get_logger().info(f'Predicted covariance matrix: {sigma}')

        # Filter + PID
        self.kalman_update(measurement)
        self.pid_controller(self.x)
        # Publish apple pos
        apple_msg = Float32MultiArray(data=[float(self.x[1]), float(self.x[0])])
        self.apple_publisher.publish(apple_msg)

        # Build command
        cmd = TwistStamped()
        cmd.header.stamp = self.get_clock().now().to_msg()
        cmd.header.frame_id = 'tool0'

        ex = abs(self.smoothed_x - self.current_x)
        ey = abs(self.smoothed_y - self.current_y)

        if self.state == 'servo':
            # Always perform xy PID
            cmd.twist.linear.x = -self.current_x_vel
            cmd.twist.linear.y = -self.current_y_vel
            cmd.twist.linear.z = 0.0
            # Transition to approach if centered + tof ok, OR if tof below override
            if (
                (self.tof_distance is not None and self.tof_distance < self.tof_override)
                or (
                    ex < self.position_threshold and
                    ey < self.position_threshold and
                    self.tof_distance is not None and
                    self.tof_distance < self.tof_servo_threshold
                )
            ):
                self.get_logger().info(
                    f'Transition to approach (tof={self.tof_distance}, ex={ex:.3f}, ey={ey:.3f})'
                )
                self.state = 'approach'

        elif self.state == 'approach':
            # If tof above override and drifted off-center, return to servo
            if self.tof_distance is not None and self.tof_distance >= self.tof_override:
                if ex > self.position_threshold or ey > self.position_threshold:
                    self.get_logger().warn(
                        f'Drift off-center and tof>=override ({self.tof_distance}), back to servo'
                    )
                    self.state = 'servo'
                    cmd.twist.linear.x = -self.current_x_vel
                    cmd.twist.linear.y = -self.current_y_vel
                    cmd.twist.linear.z = 0.0
                    # skip descent this cycle
                    self.gripper_publisher.publish(cmd)
                    return
            # Otherwise hold xy and descend if needed
            cmd.twist.linear.x = 0.0
            cmd.twist.linear.y = 0.0
            if self.tof_distance is not None and self.tof_distance > self.tof_threshold:
                cmd.twist.linear.z = 0.05
            elif self.tof_distance is not None:
                self.get_logger().info('Reached approach threshold, ready to pick')
                self.state = 'pick'
                cmd.twist.linear.z = 0.0
            else:
                cmd.twist.linear.z = 0.0

        else:  # pick
            cmd.twist.linear.x = cmd.twist.linear.y = cmd.twist.linear.z = 0.0
            self.get_logger().info('pick')
            # TODO: trigger gripper close

        # Zero angular
        cmd.twist.angular.x = cmd.twist.angular.y = cmd.twist.angular.z = 0.0
        # Publish
        self.gripper_publisher.publish(cmd)

    def tof_callback(self, msg: Int32):
        self.tof_distance = msg.data

    def kalman_update(self, measurement):
        self.z = measurement
        self.x_p = np.dot(self.A, self.x)
        self.P_p = np.dot(np.dot(self.A, self.P), self.A.T) + self.Q
        K = np.dot(np.dot(self.P_p, self.H.T),
                   np.linalg.inv(np.dot(self.H, np.dot(self.P_p, self.H.T)) + self.R))
        self.x = self.x_p + np.dot(K, self.z - np.dot(self.H, self.x_p))
        self.P = self.P_p - np.dot(np.dot(K, self.H), self.P_p)

    def pid_controller(self, predicted_location):
        now = self.get_clock().now().nanoseconds * 1e-9
        dt = now - self.prev_time
        dt = np.clip(dt, 0.001, 0.02)  # clamp dt between 1ms and 20ms
        if dt <= 0:
            dt = self.dt
        self.prev_time = now

        # Exponential smoothing of predicted position with higher alpha
        self.smoothed_x = self.alpha * predicted_location[1, 0] + (1 - self.alpha) * self.smoothed_x
        self.smoothed_y = self.alpha * predicted_location[0, 0] + (1 - self.alpha) * self.smoothed_y

        # Error calculation with increased deadband
        error_x = self.smoothed_x - self.current_x
        error_y = self.smoothed_y - self.current_y

        # Position threshold check to stop movement
        if abs(error_x) < self.position_threshold and abs(error_y) < self.position_threshold:
            self.current_x_vel = 0.0
            self.current_y_vel = 0.0
            return

        if abs(error_x) < self.deadband:
            error_x = 0.0
        if abs(error_y) < self.deadband:
            error_y = 0.0

        # Integral update
        self.integral_x += error_x * dt
        self.integral_y += error_y * dt

        # Derivative (zero since K_d=0)
        derivative_x = (error_x - self.prev_x_error) / dt
        derivative_y = (error_y - self.prev_y_error) / dt

        # PID output
        x_vel_cmd = self.K_p * error_x + self.K_i * self.integral_x + self.K_d * derivative_x
        y_vel_cmd = self.K_p * error_y + self.K_i * self.integral_y + self.K_d * derivative_y

        # Clip to max velocities
        x_vel_cmd = np.clip(x_vel_cmd, -self.vel_max, self.vel_max)
        y_vel_cmd = np.clip(y_vel_cmd, -self.vel_max, self.vel_max)

        # Store velocities
        self.current_x_vel = x_vel_cmd
        self.current_y_vel = y_vel_cmd

        # Update position by integrating velocity commands
        self.current_x += self.current_x_vel * dt
        self.current_y += self.current_y_vel * dt

        self.prev_x_error = error_x
        self.prev_y_error = error_y

def main():
    rclpy.init()
    node = FlexToFListener()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
