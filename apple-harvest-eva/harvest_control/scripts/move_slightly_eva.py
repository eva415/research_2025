#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TwistStamped
import time

class GripperMoveUp(Node):
    def __init__(self):
        super().__init__('gripper_move_up')
        self.publisher = self.create_publisher(TwistStamped, '/servo_node/delta_twist_cmds', 10)
        self.move_duration = 1.0  # seconds to move up (~1 cm)
        self.velocity_z = 0.01    # m/s velocity command

    def move_up_once(self):
        self.get_logger().info('Starting gripper upward movement...')
        start_time = self.get_clock().now()

        # Publish velocity commands at ~10 Hz for move_duration seconds
        rate_hz = 10
        rate_sleep = 1.0 / rate_hz
        elapsed = 0.0

        while elapsed < self.move_duration:
            cmd = TwistStamped()
            cmd.header.stamp = self.get_clock().now().to_msg()
            cmd.header.frame_id = 'tool0'
            cmd.twist.linear.x = 0.0
            cmd.twist.linear.y = 0.0
            cmd.twist.linear.z = self.velocity_z
            self.publisher.publish(cmd)

            time.sleep(rate_sleep)
            now = self.get_clock().now()
            elapsed = (now - start_time).nanoseconds * 1e-9

        # Stop motion by sending zero velocity once
        cmd = TwistStamped()
        cmd.header.stamp = self.get_clock().now().to_msg()
        cmd.header.frame_id = 'tool0'
        cmd.twist.linear.x = 0.0
        cmd.twist.linear.y = 0.0
        cmd.twist.linear.z = 0.0
        self.publisher.publish(cmd)
        self.get_logger().info('Finished moving gripper up 1 cm.')


def main(args=None):
    rclpy.init(args=args)
    node = GripperMoveUp()
    node.move_up_once()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
