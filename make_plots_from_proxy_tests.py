#!/usr/bin/env python3
# this script takes a directory, containing bag files, and for each bag
# extracts topics /tof_sensor_data, /flex_sensor_data, /tool_pose
# and creates a separate figure with 3 vertically‑stacked plots per bag.

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


def plot_for_bag(bag_file):
    # per-bag accumulators
    tool_ts, tool_xyz = [], []
    flex_ts, flex_vals = [], []
    tof_ts, tof_vals = [], []

    # read data
    for topic, msg, ts in read_ros2_bag(bag_file):
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

    # convert to arrays
    tool_ts = np.array(tool_ts)
    tool_xyz = np.vstack(tool_xyz) if tool_xyz else np.empty((0,3))
    flex_ts = np.array(flex_ts)
    flex_vals = np.vstack(flex_vals) if flex_vals else np.empty((0,0))
    tof_ts = np.array(tof_ts)
    tof_vals = np.array(tof_vals)

    # create figure
    fig, axes = plt.subplots(3, 1, sharex=True, figsize=(10, 8))
    fig.suptitle(f"Occlusion level 50%: {Path(bag_file).stem}")


    # /tool_pose
    if tool_ts.size:
        axes[0].plot(tool_ts, tool_xyz[:,0], label='X')
        axes[0].plot(tool_ts, tool_xyz[:,1], label='Y')
        axes[0].plot(tool_ts, tool_xyz[:,2], label='Z')
    axes[0].set_ylabel('Tool position (m)')
    axes[0].set_title('/tool_pose')
    axes[0].legend()

    # /flex_sensor_data
    if flex_ts.size and flex_vals.size:
        for i in range(flex_vals.shape[1]):
            axes[1].plot(flex_ts, flex_vals[:,i], label=f'sensor[{i}]')
    axes[1].set_ylabel('Flex data')
    axes[1].set_title('/flex_sensor_data')
    axes[1].legend(ncol=2, fontsize='small')

    # /tof_sensor_data
    if tof_ts.size:
        axes[2].plot(tof_ts, tof_vals, '-o')
    axes[2].set_ylabel('ToF range')
    axes[2].set_xlabel('Time (s)')
    axes[2].set_title('/tof_sensor_data')

    plt.tight_layout(rect=[0, 0, 1, 0.96])
    plt.show()


def main():
    parser = argparse.ArgumentParser(
        description=(
            "For each .db3 bag found in immediate subfolders of DIRECTORY, "
            "plot topics /tool_pose, /flex_sensor_data, /tof_sensor_data in their own figure."
        )
    )
    parser.add_argument(
        'directory', nargs='?', default='.',
        help='Top‑level directory containing subfolders with .db3 files'
    )
    args = parser.parse_args()

    base = Path(args.directory)
    if not base.is_dir():
        parser.error(f"'{args.directory}' is not a directory")

    # collect bag files one level down
    bag_files = []
    for sub in base.iterdir():
        if sub.is_dir():
            bag_files.extend(str(p) for p in sub.glob('*.db3'))
    bag_files.sort()

    if not bag_files:
        raise RuntimeError(f"No .db3 files found in subfolders of {base.resolve()}")

    print(f"Plotting {len(bag_files)} bag(s) from {base.resolve()}")
    for bag in bag_files:
        print("->", bag)
        plot_for_bag(bag)


if __name__ == '__main__':
    main()
