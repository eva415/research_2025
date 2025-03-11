#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial
import re  # For extracting sensor data

class FlexSensorControl(Node):
    def __init__(self):
        super().__init__("flex_sensor_node")

        # Create publisher for sensor data
        self.publisher = self.create_publisher(String, 'flex_sensor_data', 10)

        # Initialize serial connection
        try:
            self.arduinoData = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
            self.get_logger().info("Connected to Arduino on /dev/ttyACM0")
        except serial.SerialException as e:
            self.get_logger().error(f"Could not open serial port: {e}")
            return

        # Dictionaries to store sensor data
        self.bend_values = {}        # Stores bend values per sensor
        self.resistance_values = {}  # Stores resistance values per sensor

        # Timer to read serial data at 10Hz (every 0.1 sec)
        self.timer = self.create_timer(0.1, self.read_serial_data)

    def read_serial_data(self):
        """ Reads serial data from Arduino and updates sensor dictionaries. """
        if self.arduinoData.in_waiting > 0:  # Check if data is available
            try:
                data = self.arduinoData.readline().decode('utf-8').strip()
                if data:
                    self.parse_sensor_data(data)  # Process and store the data
            except Exception as e:
                self.get_logger().error(f"Error reading from serial: {e}")

    def parse_sensor_data(self, data):
        """ Parses the incoming sensor data and stores it in dictionaries. """
        match = re.match(r"Sensor (\d+) (Resistance|Bend): ([\d.-]+) (ohms|degrees)", data)
        if match:
            sensor_id = int(match.group(1))  # Extract sensor number
            data_type = match.group(2)       # "Resistance" or "Bend"
            value = float(match.group(3))    # Extract value
            
            if data_type == "Resistance":
                self.resistance_values[sensor_id] = value
            elif data_type == "Bend":
                self.bend_values[sensor_id] = value
            
            # Publish data
            msg = String()
            msg.data = f"Sensor {sensor_id} {data_type}: {value}"
            self.publisher.publish(msg)

            # Sort and log dictionaries
            sorted_resistance = dict(sorted(self.resistance_values.items()))
            sorted_bend = dict(sorted(self.bend_values.items()))
            
            # log resistance and bend values, organized for sensors 1-4
            self.get_logger().info(f"Flex R: {sorted_resistance.values()}")
            self.get_logger().info(f"Flex Bends: {sorted_bend.values()}\n")

def main(args=None):
    rclpy.init(args=args)
    flex_node = FlexSensorControl()
    rclpy.spin(flex_node)
    flex_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
