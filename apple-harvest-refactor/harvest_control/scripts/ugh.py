#!/usr/bin/env python3

# ROS
import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
# Interfaces
from rcl_interfaces.msg import Parameter, ParameterValue, ParameterType
from rcl_interfaces.srv import SetParameters
from std_srvs.srv import Trigger
from geometry_msgs.msg import TwistStamped
from controller_manager_msgs.srv import SwitchController


class ServoTest(Node):
    def __init__(self):
        super().__init__("servo_test_node")
        m_callback_group = MutuallyExclusiveCallbackGroup()

        self.publisher = self.create_publisher(TwistStamped, '/servo_node/delta_twist_cmds', 10)
        
        # Client for switching controller to joint_trajcectory_controller
        self.switch_controller_client = self.create_client(SwitchController, "/controller_manager/switch_controller", callback_group=m_callback_group)
        while not self.switch_controller_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Switch controller service not available, waiting...")

        # Service to activate servo mode on arm
        self.start_servo_client = self.create_client(Trigger, "/servo_node/start_servo", callback_group=m_callback_group)
        while not self.start_servo_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Start moveit servo service not available, waiting...")

        # Service to change planning frame of servo mode
        self.configure_servo_cli = self.create_client(SetParameters, '/servo_node/set_parameters')
        while not self.configure_servo_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
    
    def switch_controller(self, servo=False):
        # Switches controller from forward position controller to joint_trajectory controller
        self.request = SwitchController.Request()
        if servo:
            self.request.activate_controllers = ["forward_position_controller"] 
            self.request.deactivate_controllers = ["joint_trajectory_controller"]
        else:
            self.request.activate_controllers = ["joint_trajectory_controller"]
            self.request.deactivate_controllers = ["forward_position_controller"]
        self.request.timeout = rclpy.duration.Duration(seconds=5.0).to_msg()
        self.future = self.switch_controller_client.call_async(self.request)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    
    def start_servo(self):
        # Starts servo node
        self.request = Trigger.Request()
        self.future = self.start_servo_client.call_async(self.request)
        rclpy.spin_until_future_complete(self, self.future) 
        return self.future.result()

    def configure_servo(self, frame):
        # Changes planning frame of the servo node
        #arguments: "base_link" for base frame, "tool0" for tool frame
        req = SetParameters.Request()

        new_param_value = ParameterValue(type=ParameterType.PARAMETER_STRING, string_value=frame)
        req.parameters = [Parameter(name='moveit_servo.robot_link_command_frame', value=new_param_value)]
        self.future = self.configure_servo_cli.call_async(req)

    def why_tho(self):
        while True:
            msg = TwistStamped()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = "base_link"

            msg.twist.linear.x = -0.1
            msg.twist.linear.y = 0.0
            msg.twist.linear.z = 0.0
            
            msg.twist.angular.x = 0.0
            msg.twist.angular.y = 0.0
            msg.twist.angular.z = 0.0

            self.publisher.publish(msg)

    def start(self): 
        self.get_logger().info(f'Switching controller to forward_position_controller.')
        self.switch_controller(servo=True, sim=False)
        self.get_logger().info(f'Starting servo node.')
        self.start_servo()
        self.get_logger().info(f'Configuring servo planning in base_link frame')
        self.configure_servo('base_link')
        self.get_logger().info(f'Starting servoing in base_link frame.')
        self.why_tho()
    

def main(args=None):
    rclpy.init(args=args)
    servo_test = ServoTest()
    servo_test.start()
    executor = MultiThreadedExecutor()
    rclpy.spin(servo_test, executor=executor)
    rclpy.shutdown()

if __name__ == '__main__':
    main()