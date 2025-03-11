import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32, String
import serial
import re

class SensorNode(Node):
    def __init__(self):
        super().__init__("sensor_node")

        # Publishers for flex sensor data and ToF data
        self.tof_publisher = self.create_publisher(Float32, 'tof_sensor_data', 10)
        self.flex_publisher = self.create_publisher(String, 'flex_sensor_data', 10)

        # Connect to Arduino
        try:
            self.serial_port = serial.Serial('/dev/ttyACM0', 115200, timeout=1)
            self.get_logger().info("Connected to Arduino on /dev/ttyACM0")
        except serial.SerialException as e:
            self.get_logger().error(f"Could not open serial port: {e}")
            return

        # Timer to read serial data
        self.timer = self.create_timer(0.1, self.read_serial_data)

    def read_serial_data(self):
        """Reads serial data from Arduino and publishes relevant topics."""
        if self.serial_port.in_waiting > 0:
            try:
                data = self.serial_port.readline().decode('utf-8').strip()
                
                # Match ToF sensor data
                match_tof = re.search(r"ToF: (\d+)", data)
                if match_tof:
                    distance = float(match_tof.group(1))
                    msg = Float32()
                    msg.data = distance
                    self.tof_publisher.publish(msg)
                    self.get_logger().info(f"ToF Distance: {distance} mm")
                    return

                # Match Flex Sensor Resistance
                match_resistance = re.search(r"Flex Sensor (\d+) Resistance: ([\d.]+) ohms", data)
                if match_resistance:
                    sensor_id = int(match_resistance.group(1))
                    resistance = float(match_resistance.group(2))
                    msg = String()
                    msg.data = f"Sensor {sensor_id} Resistance: {resistance} ohms"
                    self.flex_publisher.publish(msg)
                    self.get_logger().info(f"Flex Sensor {sensor_id} Resistance: {resistance} ohms")
                    return

                # Match Flex Sensor Bend
                match_bend = re.search(r"Flex Sensor (\d+) Bend: ([\d.-]+) degrees", data)
                if match_bend:
                    sensor_id = int(match_bend.group(1))
                    bend = float(match_bend.group(2))
                    msg = String()
                    msg.data = f"Sensor {sensor_id} Bend: {bend} degrees"
                    self.flex_publisher.publish(msg)
                    self.get_logger().info(f"Published Flex Sensor {sensor_id} Bend: {bend} degrees")
                    return

            except Exception as e:
                self.get_logger().error(f"Error reading serial data: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = SensorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
