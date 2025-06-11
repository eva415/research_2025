import sys
import math
import rclpy
from rclpy.node import Node
from PyQt6.QtWidgets import QApplication, QWidget, QVBoxLayout
from geometry_msgs.msg import TransformStamped
from std_msgs.msg import Int32, Float32MultiArray
import matplotlib.pyplot as plt
from matplotlib.figure import Figure
from matplotlib.backends.backend_qt5agg import FigureCanvasQTAgg as FigureCanvas
from threading import Thread
from time import sleep

title = "Live apple position and commanded gripper velocity"

class PlotSubscriber(Node):
    def __init__(self):
        super().__init__('plot_subscriber')
        self.time_reference = None
        self.max_time_window = 60.0
        self.times = []
        self.x_apple = []
        self.x_gripper = []
        self.y_apple = []
        self.y_gripper = []
        self.z_apple = []
        self.create_subscription(Float32MultiArray, '/position_apple', self.apple_callback, 10)
        self.create_subscription(Float32MultiArray, '/position_gripper', self.gripper_callback, 10)
        self.create_subscription(Int32, '/tof_sensor_data', self.z_apple_callback, 10)
    def apple_callback(self, msg):
        # msg.data = [x_apple, y_apple]
        timestamp = self.get_clock().now().nanoseconds * 1e-9
        if self.time_reference is None:
            self.time_reference = timestamp
        t = timestamp - self.time_reference
        if len(self.times) == 0 or t > self.times[-1]:
            self.times.append(t)
            self.x_apple.append(msg.data[0])
            self.y_apple.append(msg.data[1])
            self.x_gripper.append(self.x_gripper[-1] if self.x_gripper else 0.0)
            self.y_gripper.append(self.y_gripper[-1] if self.y_gripper else 0.0)
            self.z_apple.append(self.z_apple[-1] if self.z_apple else 0.0)
            self.trim_history(t)
    def gripper_callback(self, msg):
        # msg.data = [x_gripper, y_gripper]
        timestamp = self.get_clock().now().nanoseconds * 1e-9
        if self.time_reference is None:
            self.time_reference = timestamp
        t = timestamp - self.time_reference
        if len(self.times) == 0 or t > self.times[-1]:
            self.times.append(t)
            self.x_gripper.append(msg.data[0])
            self.y_gripper.append(msg.data[1])
            self.x_apple.append(self.x_apple[-1] if self.x_apple else 0.0)
            self.y_apple.append(self.y_apple[-1] if self.y_apple else 0.0)
            self.z_apple.append(self.z_apple[-1] if self.z_apple else 0.0)
            self.trim_history(t)
    def z_apple_callback(self, msg):
        timestamp = self.get_clock().now().nanoseconds * 1e-9
        if self.time_reference is None:
            self.time_reference = timestamp
        t = timestamp - self.time_reference
        if len(self.times) == 0 or t > self.times[-1]:
            self.times.append(t)
            self.x_apple.append(self.x_apple[-1] if self.x_apple else 0.0)
            self.x_gripper.append(self.x_gripper[-1] if self.x_gripper else 0.0)
            self.y_apple.append(self.y_apple[-1] if self.y_apple else 0.0)
            self.y_gripper.append(self.y_gripper[-1] if self.y_gripper else 0.0)
            self.z_apple.append(msg.data)
            # print(f"Z_DATA: {msg.data}")
            # Trim history
            while self.times and self.times[0] < t - self.max_time_window:
                self.times.pop(0)
                self.x_apple.pop(0)
                self.x_gripper.pop(0)
                self.y_apple.pop(0)
                self.y_gripper.pop(0)
                self.z_apple.pop(0)
    
    def trim_history(self, t):
        while self.times and self.times[0] < t - self.max_time_window:
            self.times.pop(0)
            self.x_apple.pop(0)
            self.y_apple.pop(0)
            self.x_gripper.pop(0)
            self.y_gripper.pop(0)
            self.z_apple.pop(0)
class PlotWindow(QWidget):
    def __init__(self, node: PlotSubscriber):
        super().__init__()
        self.node = node
        self.setWindowTitle("Live Position Plot")
        self.setGeometry(100, 100, 1000, 900)
        layout = QVBoxLayout()
        self.fig = Figure(figsize=(8, 8))

        # Primary axes
        self.ax1 = self.fig.add_subplot(311)
        self.ax2 = self.fig.add_subplot(312)
        self.ax3 = self.fig.add_subplot(313)

        # Twin axes for gripper data
        self.ax1b = self.ax1.twinx()
        self.ax2b = self.ax2.twinx()

        # Canvas
        self.canvas = FigureCanvas(self.fig)
        layout.addWidget(self.canvas)
        self.setLayout(layout)

        # Start update loop
        self.timer_thread = Thread(target=self.update_loop, daemon=True)
        self.timer_thread.start()

        self.z_threshold = 45
        self.xy_threshold = 0.5

    def update_loop(self):
        while rclpy.ok():
            sleep(0.1)

            # Clear both y-axes
            self.ax1.clear()
            self.ax1b.clear()
            self.ax2.clear()
            self.ax2b.clear()
            self.ax3.clear()

            times = self.node.times
            if times:
                # --- Subplot 1: X ---
                # Apple (left y-axis)
                self.ax1.plot(times, self.node.x_apple, color='red', linewidth=2, label="X Apple")
                self.ax1.set_ylabel("X Apple", fontsize=16, color='red')
                self.ax1.tick_params(axis='y', labelcolor='red')
                # Threshold lines (plotted on left)
                self.ax1.axhline(self.xy_threshold, color='green', linestyle='--')
                self.ax1.axhline(-self.xy_threshold, color='green', linestyle='--')

                # Gripper (right y-axis)
                self.ax1b.plot(times, self.node.x_gripper, color='blue', linewidth=2, label="X Gripper")
                self.ax1b.set_ylabel("X Gripper", fontsize=16, color='blue')
                self.ax1b.tick_params(axis='y', labelcolor='blue')

                # Legends
                # We need to combine legends from both axes:
                lines1, labels1 = self.ax1.get_legend_handles_labels()
                lines2, labels2 = self.ax1b.get_legend_handles_labels()
                self.ax1.legend(lines1 + lines2, labels1 + labels2, fontsize=12, loc='upper left')

                # --- Subplot 2: Y ---
                self.ax2.plot(times, self.node.y_apple, color='red', linewidth=2, label="Y Apple")
                self.ax2.set_ylabel("Y Apple", fontsize=16, color='red')
                self.ax2.tick_params(axis='y', labelcolor='red')
                self.ax2.axhline(self.xy_threshold, color='green', linestyle='--')
                self.ax2.axhline(-self.xy_threshold, color='green', linestyle='--')

                self.ax2b.plot(times, self.node.y_gripper, color='blue', linewidth=2, label="Y Gripper")
                self.ax2b.set_ylabel("Y Gripper", fontsize=16, color='blue')
                self.ax2b.tick_params(axis='y', labelcolor='blue')

                lines1, labels1 = self.ax2.get_legend_handles_labels()
                lines2, labels2 = self.ax2b.get_legend_handles_labels()
                self.ax2.legend(lines1 + lines2, labels1 + labels2, fontsize=12, loc='upper left')

                # --- Subplot 3: Z (single axis) ---
                self.ax3.plot(times, self.node.z_apple, color='red', linewidth=2, label="Z Apple")
                self.ax3.set_ylabel("Z Position", fontsize=16)
                self.ax3.set_xlabel("Time (s)", fontsize=16)
                self.ax3.axhline(self.z_threshold, color='green', linestyle='--', label=f"Z Threshold ({self.z_threshold} mm)")
                self.ax3.legend(fontsize=12)
                self.ax3.tick_params(axis='both', labelsize=12)

                # Limit x-axis to the time window
                for ax in (self.ax1, self.ax2, self.ax3):
                    ax.set_xlim(max(0, times[-1] - self.node.max_time_window), times[-1])

            self.fig.suptitle(title, fontsize=24)
            self.canvas.draw()

def ros_spin(node):
    while rclpy.ok():
        rclpy.spin_once(node, timeout_sec=0.1)

def main():
    rclpy.init()
    node = PlotSubscriber()
    ros_thread = Thread(target=ros_spin, args=(node,), daemon=True)
    ros_thread.start()

    app = QApplication(sys.argv)
    window = PlotWindow(node)
    window.show()
    sys.exit(app.exec())

if __name__ == '__main__':
    main()