#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from ur_msgs.srv import SetIO
import time

class PumpIO(Node):
    def __init__(self):
        super().__init__('pump_io')

        # UR digital output pin numbers (controller IDs)
        self.DO_VACUUM = 4     # DO4 -> Pump pin 3
        self.DO_BLOWOFF = 5    # DO5 -> Pump pin 4
        self.DO_DISABLE_ES = 6 # DO6 -> Pump pin 8

        self.cli = self.create_client(SetIO, '/io_and_status_controller/set_io')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for /io_and_status_controller/set_io...')

    def set_do(self, pin, state: bool):
        req = SetIO.Request()
        req.fun = 1
        req.pin = pin
        req.state = 1.0 if state else 0.0
        future = self.cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if not future.result().success:
            self.get_logger().warn(f"Failed to set DO{pin} to {state}")
        return future.result().success

    def vacuum_on(self): return self.set_do(self.DO_VACUUM, True)
    def vacuum_off(self): return self.set_do(self.DO_VACUUM, False)
    def blowoff_on(self): return self.set_do(self.DO_BLOWOFF, True)
    def blowoff_off(self): return self.set_do(self.DO_BLOWOFF, False)
    def disable_energy_saving(self): return self.set_do(self.DO_DISABLE_ES, True)

def main():
    rclpy.init()
    node = PumpIO()

    node.get_logger().info("Disabling energy saving (DO6 HIGH)...")
    node.disable_energy_saving()

    node.get_logger().info("Vacuum ON")
    node.vacuum_on()
    time.sleep(2.0)

    node.get_logger().info("Vacuum OFF, Blow-off ON")
    node.vacuum_off()
    node.blowoff_on()
    time.sleep(0.2)
    node.blowoff_off()

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
