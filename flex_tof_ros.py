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
        self.publisher_flex = self.create_publisher(String, 'flex_sensor_data', 50)
        self.publisher_tof = self.create_publisher(String, 'tof_sensor_data', 50)

        # Initialize serial connection
        try:
            self.arduinoData = serial.Serial('/dev/ttyACM0', 115200, timeout=0.05)
            self.get_logger().info("Connected to Arduino on /dev/ttyACM0")
        except serial.SerialException as e:
            self.get_logger().error(f"Could not open serial port: {e}")
            return

        # Dictionaries to store sensor data
        self.bend_values = {}        # Stores bend values per sensor
        self.resistance_values = {}  # Stores resistance values per sensor

        # Timer to read serial data (every 0.05 sec)
        self.timer = self.create_timer(0.05, self.read_serial_data)

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
        """ Parses incoming sensor data and stores/publishes it. """

        # Match Flex Sensor data: "Sensor 1 Resistance: 1000 ohms"
        match = re.match(r"Sensor (\d+) (Resistance|Bend): ([\d.-]+) (ohms|degrees)", data)
        if match:
            sensor_id = int(match.group(1))  # Extract sensor number
            data_type = match.group(2)       # "Resistance" or "Bend"
            value = float(match.group(3))    # Extract value

            if data_type == "Resistance":
                self.resistance_values[sensor_id] = value
            elif data_type == "Bend":
                self.bend_values[sensor_id] = value

            # Publish flex sensor data
            msg = String()
            msg.data = f"Sensor {sensor_id} {data_type}: {value}"
            self.publisher_flex.publish(msg)
            return

        # Match ToF Sensor data: "ToF: 82 mm"
        tof_match = re.match(r"ToF: ([\d.]+) mm", data)
        if tof_match:
            tof_value = float(tof_match.group(1))

            # Publish ToF data
            msg = String()
            msg.data = f"ToF: {tof_value} mm"
            self.publisher_tof.publish(msg)
            return


def main(args=None):
    rclpy.init(args=args)
    flex_node = FlexSensorControl()
    rclpy.spin(flex_node)
    flex_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
