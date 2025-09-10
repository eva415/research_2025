import os
import matplotlib.pyplot as plt
from rosbag2_py import SequentialReader, StorageOptions, ConverterOptions
from rclpy.serialization import deserialize_message
from std_msgs.msg import Float32

# The directory containing bag folders
main_dir = '/home/imml/Documents/august_2025/pressure_tests/successes'

# Loop through each folder in the main directory
for folder_name in os.listdir(main_dir):
    folder_path = os.path.join(main_dir, folder_name)
    
    if not os.path.isdir(folder_path):
        continue  # Skip files, only process folders
    
    # Look for .db3 files in this folder
    bag_files = [f for f in os.listdir(folder_path) if f.endswith(".db3")]
    if not bag_files:
        print(f"No bag files found in {folder_name}, skipping.")
        continue
    
    # Take the first .db3 file in the folder
    bag_file_path = os.path.join(folder_path, bag_files[0])
    print(f"Processing bag: {bag_file_path}")
    
    # Setup ROS2 bag reader
    storage_options = StorageOptions(uri=bag_file_path, storage_id='sqlite3')
    converter_options = ConverterOptions('', '')  # Default serialization
    reader = SequentialReader()
    reader.open(storage_options, converter_options)
    
    times = []
    pressures = []
    
    # Read messages
    while reader.has_next():
        topic, data, t = reader.read_next()
        if topic == "/vacuum_pressure":
            msg = deserialize_message(data, Float32)
            pressures.append(msg.data)
            times.append(t * 1e-9)  # Convert nanoseconds to seconds
    
    if times and pressures:
        # Normalize time to start at zero
        start_time = times[0]
        times = [t - start_time for t in times]
        
        # Plot
        plt.figure()
        plt.plot(times, pressures, label='/vacuum_pressure')
        plt.xlabel('Time [s]')
        plt.ylabel('Pressure')
        plt.title(f'/vacuum_pressure over time ({folder_name})')
        plt.legend()
        plt.grid(True)
        plt.tight_layout()
        
        # Save figure inside the bag folder
        plot_filename = os.path.join(folder_path, f"{folder_name}_vacuum_pressure.png")
        plt.savefig(plot_filename)
        plt.close()
        print(f"Plot saved: {plot_filename}")
    else:
        print(f"No /vacuum_pressure data found in {folder_name}")

