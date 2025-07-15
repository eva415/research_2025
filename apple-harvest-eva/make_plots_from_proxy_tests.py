#!/usr/bin/env python3
# this script takes a directory, containing bag files, and extracts the data from topics
# /tof_sensor_data, /flex_sensor_data and /tool_pose, then creates 3 vertically‑stacked plots.

import argparse
from pathlib import Path

import matplotlib.pyplot as plt
import numpy as np
from rosbag2_py import SequentialReader, StorageOptions, ConverterOptions
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message

# message types
from geometry_msgs.msg import TransformStamped
from std_msgs.msg import Float32MultiArray, Int32


def read_ros2_bag(bag_path):
    """
    Generator yielding (topic_name, deserialized_msg, timestamp_nsec)
    from a rosbag2 sqlite3 DB3.
    """
    reader = SequentialReader()
    reader.open(
        StorageOptions(uri=bag_path, storage_id='sqlite3'),
        ConverterOptions(
            input_serialization_format='cdr',
            output_serialization_format='cdr'
        )
    )
    topic_types = {t.name: t.type for t in reader.get_all_topics_and_types()}
    while reader.has_next():
        topic, data, ts = reader.read_next()
        msg_type = get_message(topic_types[topic])
        msg = deserialize_message(data, msg_type)
        yield topic, msg, ts


def main():
    parser = argparse.ArgumentParser(
        description=(
            "Extract /tool_pose, /flex_sensor_data and /tof_sensor_data "
            "from .db3 bags in each immediate subfolder of DIRECTORY and plot them."
        )
    )
    parser.add_argument(
        'directory',
        nargs='?',                  # optional argument
        default='.',                # defaults to current dir
        help='Top‑level directory containing subfolders of .db3 files (default: current directory)'
    )
    args = parser.parse_args()

    # accumulators
    tool_ts, tool_xyz = [], []
    flex_ts, flex_vals = [], []
    tof_ts, tof_vals = [], []

    # scan each immediate subdirectory for .db3 files
    base = Path(args.directory)
    if not base.exists() or not base.is_dir():
        parser.error(f"Provided path '{args.directory}' is not a valid directory.")

    bag_files = []
    for sub in base.iterdir():
        if sub.is_dir():
            for p in sub.glob('*.db3'):
                bag_files.append(str(p))
    bag_files.sort()

    print(f"Searching in: {base.resolve()}")
    print(f"Found {len(bag_files)} bag(s):")
    for b in bag_files:
        print("  ", b)
    if not bag_files:
        raise RuntimeError(
            f"No .db3 files found in any immediate subfolder of {base.resolve()}"
        )

    # read and collect data
    for bag in bag_files:
        for topic, msg, ts in read_ros2_bag(bag):
            t = ts * 1e-9
            if topic == '/tool_pose':
                trans = msg.transform.translation
                tool_ts.append(t)
                tool_xyz.append((trans.x, trans.y, trans.z))
            elif topic == '/flex_sensor_data':
                flex_ts.append(t)
                flex_vals.append(msg.data)
            elif topic == '/tof_sensor_data':
                tof_ts.append(t)
                tof_vals.append(msg.data)

    # to numpy arrays
    tool_ts = np.array(tool_ts)
    tool_xyz = np.vstack(tool_xyz)
    flex_ts = np.array(flex_ts)
    flex_vals = np.vstack(flex_vals)
    tof_ts = np.array(tof_ts)
    tof_vals = np.array(tof_vals)

    # plotting
    fig, axes = plt.subplots(3, 1, sharex=True, figsize=(10, 8))

    # /tool_pose
    axes[0].plot(tool_ts, tool_xyz[:, 0], label='X')
    axes[0].plot(tool_ts, tool_xyz[:, 1], label='Y')
    axes[0].plot(tool_ts, tool_xyz[:, 2], label='Z')
    axes[0].set_ylabel('Tool position (m)')
    axes[0].set_title('/tool_pose')
    axes[0].legend()

    # /flex_sensor_data
    for i in range(flex_vals.shape[1]):
        axes[1].plot(flex_ts, flex_vals[:, i], label=f'sensor[{i}]')
    axes[1].set_ylabel('Flex data')
    axes[1].set_title('/flex_sensor_data')
    axes[1].legend(ncol=2, fontsize='small')

    # /tof_sensor_data
    axes[2].plot(tof_ts, tof_vals, '-o')
    axes[2].set_ylabel('ToF range')
    axes[2].set_xlabel('Time (s)')
    axes[2].set_title('/tof_sensor_data')

    plt.tight_layout()
    plt.show()


if __name__ == '__main__':
    main()
