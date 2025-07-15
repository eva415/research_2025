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
from geometry_msgs.msg import TwistStamped
from controller_manager_msgs.srv import SwitchController
import numpy as np
import pandas as pd
from collections import deque

class FlexToFListener(Node):
    def __init__(self, calibrate=False):
        super().__init__('flex_tof_listener')
        self.cbgroup = ReentrantCallbackGroup()
        self.calibrate = calibrate
        self.state = 'servo'
        self.position_threshold = 0.5
        self.tof_override = 200
        # self.pick_distance_threshold = 53
        self.tof_distance = None
        self.tof_history = deque(maxlen=8)
        self.backoff_speed = -0.05
        self.velocity_scale_factor_xy = 1
        self.velocity_scale_factor_z = 5

        # Subscribers & Publishers
        self.flex_subscriber = self.create_subscription(
            Float32MultiArray, '/flex_sensor_data', self.flex_callback, 10, callback_group=self.cbgroup)
        self.tof_subscriber = self.create_subscription(
            Int32, '/tof_sensor_data', self.tof_callback, 10, callback_group=self.cbgroup)
        self.apple_publisher = self.create_publisher(Float32MultiArray, '/position_apple', 10)
        self.gripper_publisher = self.create_publisher(TwistStamped, '/servo_node/delta_twist_cmds', 10)

        self.get_logger().info('FlexToFListener node has been started.')

        # Kalman filter setup
        n, m = 2, 4
        self.z = np.zeros((m, 1))
        self.x = np.zeros((n, 1))
        self.R = np.eye(m) * 0.05
        self.P = np.ones((n, n))
        self.H = np.array([[1,0],[0,1],[-1,0],[0,-1]])
        self.A = np.eye(n)
        self.Q = np.eye(n) * 0.05

        # PID for xy
        self.current_x = self.current_y = 0.0
        self.current_x_vel = self.current_y_vel = 0.0
        self.smoothed_x = self.smoothed_y = 0.0
        self.K_p, self.K_i, self.K_d = 0.3, 0.0, 0.0
        self.dt = 0.01
        self.prev_time = self.get_clock().now().nanoseconds * 1e-9
        self.integral_x = self.integral_y = 0.0
        self.prev_x_error = self.prev_y_error = 0.0
        self.vel_max = 0.1
        self.scale = 4.0
        self.alpha = 0.5
        self.deadband = 0.05

        if self.calibrate:
            self.all_data = np.zeros([1,4])

        # UR5 Servo setup
        mcb = MutuallyExclusiveCallbackGroup()
        self.switch_controller_client = self.create_client(
            SwitchController, '/controller_manager/switch_controller', callback_group=mcb)
        while not self.switch_controller_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for switch_controller...')
        self.start_servo_client = self.create_client(Trigger, '/servo_node/start_servo', callback_group=mcb)
        while not self.start_servo_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for start_servo...')
        self.configure_servo_cli = self.create_client(SetParameters, '/servo_node/set_parameters', callback_group=mcb)
        while not self.configure_servo_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for set_parameters...')
        self._enable_servo_mode(frame='tool0')  # <-- pick “tool0” for gripper frame or “base_link” for world frame


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
        self.get_logger().info(f"STATE={self.state}, tof={self.tof_distance}")
        # scale and filter flex
        values = list(msg.data)
        meas = np.array([v/self.scale for v in values]).reshape((4,1))
        if self.calibrate:
            self.all_data = np.vstack([self.all_data, np.array(values)])
            df = pd.DataFrame(self.all_data[1:], columns=['f1','f2','f3','f4'])
            df.to_csv('Calibration_data.csv', index=False)
            self.get_logger().info(f"Covariance: {np.cov(df.values.T)}")
        self.kalman_update(meas)
        self.pid_controller(self.x)

        # publish apple XY location
        self.apple_publisher.publish(Float32MultiArray(data=[float(self.x[1]), float(self.x[0])]))

        # build cmd, compute ex, ey
        cmd = TwistStamped()
        cmd.header.stamp = self.get_clock().now().to_msg()
        cmd.header.frame_id = 'tool0'

        ex = abs(self.smoothed_x - self.current_x)
        ey = abs(self.smoothed_y - self.current_y)

        # STATE: servo
        if self.state == 'servo':
            cmd.twist.linear.x = -self.current_x_vel * self.velocity_scale_factor_xy
            cmd.twist.linear.y = -self.current_y_vel * self.velocity_scale_factor_xy
            cmd.twist.linear.z = 0.0
            if ex < self.position_threshold and ey < self.position_threshold \
               and self.tof_distance is not None and self.tof_distance < self.tof_override:
                self.get_logger().info('servo → approach')
                self.state = 'approach'

        # STATE: approach
        elif self.state == 'approach':
            cmd.twist.linear.x = 0.0
            cmd.twist.linear.y = 0.0
            cmd.twist.linear.z = 0.05 * self.velocity_scale_factor_z
            if self.tof_distance is not None and self.tof_distance > self.tof_override \
               and (ex > self.position_threshold or ey > self.position_threshold):
                self.get_logger().warn('drift off-center → servo')
                self.state = 'servo'
                cmd.twist.linear.z = 0.0
                self.gripper_publisher.publish(cmd)
                return

        # STATE: pick
        else:
            cmd.twist.linear.x = cmd.twist.linear.y = cmd.twist.linear.z = 0.0
            self.get_logger().info(f'pick. (ToF={self.tof_distance})')
            # trigger gripper close here
        
        # —— delta-ToF buffer logic ——
        if self.tof_distance is not None:
            self.tof_history.append(self.tof_distance)
        if len(self.tof_history) == self.tof_history.maxlen and cmd.twist.linear.z > 0:
            old = self.tof_history[0]
            d = self.tof_distance - old
            if d > 0.05:
                self.get_logger().warn(f'pushed away over buffer d={d}, reversing. (ToF={self.tof_distance})')
                cmd.twist.linear.z = self.backoff_speed
            elif abs(d) < 0.05:
                self.get_logger().info('z stable over buffer, pick!')
                self.state = 'pick'
            else:
                self.get_logger().info(f'approaching, d < 0. (ToF={self.tof_distance})')

        cmd.twist.angular.x = cmd.twist.angular.y = cmd.twist.angular.z = 0.0
        self.gripper_publisher.publish(cmd)


    def tof_callback(self, msg: Int32):
        self.tof_distance = msg.data

    def kalman_update(self, meas):
        self.z = meas
        # standard predict-update
        x_p = self.A.dot(self.x)
        P_p = self.A.dot(self.P).dot(self.A.T) + self.Q
        K = P_p.dot(self.H.T).dot(np.linalg.inv(self.H.dot(P_p).dot(self.H.T) + self.R))
        self.x = x_p + K.dot(self.z - self.H.dot(x_p))
        self.P = P_p - K.dot(self.H).dot(P_p)

    def pid_controller(self, pred):
        now = self.get_clock().now().nanoseconds * 1e-9
        dt = np.clip(now - self.prev_time, 0.001, 0.02)
        self.prev_time = now
        # smoothing
        self.smoothed_x = self.alpha * pred[1,0] + (1-self.alpha)*self.smoothed_x
        self.smoothed_y = self.alpha * pred[0,0] + (1-self.alpha)*self.smoothed_y
        # error
        err_x = self.smoothed_x - self.current_x
        err_y = self.smoothed_y - self.current_y
        if abs(err_x)<self.position_threshold and abs(err_y)<self.position_threshold:
            self.current_x_vel = self.current_y_vel = 0.0
            return
        err_x = 0 if abs(err_x)<self.deadband else err_x
        err_y = 0 if abs(err_y)<self.deadband else err_y
        self.integral_x += err_x*dt
        self.integral_y += err_y*dt
        dx = (err_x - self.prev_x_error)/dt
        dy = (err_y - self.prev_y_error)/dt
        vx = np.clip(self.K_p*err_x + self.K_i*self.integral_x + self.K_d*dx, -self.vel_max, self.vel_max)
        vy = np.clip(self.K_p*err_y + self.K_i*self.integral_y + self.K_d*dy, -self.vel_max, self.vel_max)
        self.current_x_vel, self.current_y_vel = vx, vy
        self.current_x += vx*dt
        self.current_y += vy*dt
        self.prev_x_error, self.prev_y_error = err_x, err_y


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
