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
import os
from PIL import Image

# message types
from geometry_msgs.msg import TransformStamped
from std_msgs.msg import Float32MultiArray, Int32

# define ground truth translation for the apple
GROUND_TRUTH_1 = np.array([0.11, 0.355, -0.695])  # [X_gt, Y_gt, Z_gt] FOR EXPERIMENT 1
GROUND_TRUTH_2 = np.array([0.11, 0.407, -0.450])  # [X_gt, Y_gt, Z_gt] FOR EXPERIMENT 2

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
    name = Path(bag_file).stem
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
            tool_xyz.append((-trans.x, trans.z, -trans.y))  # Note: remapped axes
        elif topic == '/flex_sensor_data':
            flex_ts.append(t)
            flex_vals.append(msg.data)
        elif topic == '/tof_sensor_data':
            tof_ts.append(t)
            tof_vals.append(msg.data)

    # convert to arrays
    tool_ts = np.array(tool_ts)
    tool_xyz = np.vstack(tool_xyz) if tool_xyz else np.empty((0, 3))
    flex_ts = np.array(flex_ts)
    flex_vals = np.vstack(flex_vals) if flex_vals else np.empty((0, 0))
    tof_ts = np.array(tof_ts)
    tof_vals = np.array(tof_vals)

    # create figure with 5 vertical subplots and taller size
    fig, axes = plt.subplots(5, 1, sharex=True, figsize=(10, 12))
    fig.suptitle(f"{Path(bag_file).stem}")

    # /tool_pose - X
    if tool_ts.size:
        axes[0].plot(tool_ts, tool_xyz[:, 0], label='X', color='tab:red')
        # plot ground truth line for X
        # axes[0].axhline(GROUND_TRUTH_1[0], linestyle='--', color='red', label='X_gt')
    axes[0].set_ylabel('X (m)')
    # axes[0].set_ylim(0, 0.2)  # replace with X‑axis min and max
    axes[0].set_title('/tool_pose X')
    axes[0].legend()

    # /tool_pose - Y
    if tool_ts.size:
        axes[1].plot(tool_ts, tool_xyz[:, 1], label='Y', color='tab:green')
        # plot ground truth line for Y
        # axes[1].axhline(GROUND_TRUTH_1[1], linestyle='--', color='red', label='Y_gt')
    axes[1].set_ylabel('Y (m)')
    # axes[1].set_ylim(0.25, 0.5)
    axes[1].set_title('/tool_pose Y')
    axes[1].legend()

    # /tool_pose - Z
    if tool_ts.size:
        axes[2].plot(tool_ts, tool_xyz[:, 2], label='Z', color='tab:blue')
        # plot ground truth line for Z
    axes[2].set_ylabel('Z (m)')
    # if name != 'apple_up6cm_0':
        # axes[2].set_ylim(-0.9, -0.5)
        # axes[2].axhline(GROUND_TRUTH_1[2], linestyle='--', color='red', label='Z_gt')
    # else:
        # axes[2].axhline(GROUND_TRUTH_2[2], linestyle='--', color='red', label='Z_gt')
    axes[2].set_title('/tool_pose Z')
    axes[2].legend()

    # /flex_sensor_data
    if flex_ts.size and flex_vals.size:
        for i in range(flex_vals.shape[1]):
            axes[3].plot(flex_ts, flex_vals[:, i], label=f'sensor[{i}]')
    axes[3].set_ylabel('Flex')
    # axes[3].set_ylim(0, 100)
    axes[3].set_title('/flex_sensor_data')
    axes[3].legend(ncol=2, fontsize='small')

    # /tof_sensor_data
    if tof_ts.size:
        axes[4].plot(tof_ts, tof_vals, '-o')
    axes[4].set_ylabel('ToF')
    # axes[4].set_ylim(-5, 300)
    axes[4].set_xlabel('Time (s)')
    axes[4].set_title('/tof_sensor_data')

    # Save figure
    plt.tight_layout(rect=[0, 0, 1, 0.96])
    downloads = Path.home() / "Downloads"
    downloads.mkdir(parents=True, exist_ok=True)
    filename = downloads / f"{Path(bag_file).stem}_plot.png"
    plt.savefig(filename)
    plt.close(fig)
    print(f"Saved plot to: {filename}")

from scipy.fft import rfft, rfftfreq

from scipy.fft import rfft, rfftfreq

def plot_for_bag_freq(bag_file):
    name = Path(bag_file).stem
    flex_ts, flex_vals = [], []
    tof_ts, tof_vals = [], []

    # Read data
    for topic, msg, ts in read_ros2_bag(bag_file):
        t = ts * 1e-9
        if topic == '/flex_sensor_data':
            flex_ts.append(t)
            flex_vals.append(msg.data)
        elif topic == '/tof_sensor_data':
            tof_ts.append(t)
            tof_vals.append(msg.data)

    flex_ts = np.array(flex_ts)
    flex_vals = np.vstack(flex_vals) if flex_vals else np.empty((0, 0))
    tof_ts = np.array(tof_ts)
    tof_vals = np.array(tof_vals)

    # Create figure with 2 subplots
    fig, axes = plt.subplots(2, 1, sharex=False, figsize=(10, 8))
    fig.suptitle(f"{Path(bag_file).stem}")

    # Flex sensor FFT
    if flex_ts.size and flex_vals.size:
        dt = np.mean(np.diff(flex_ts))
        N = flex_vals.shape[0]
        freqs = rfftfreq(N, dt)
        for i in range(flex_vals.shape[1]):
            yf = np.abs(rfft(flex_vals[:, i]))
            axes[0].plot(freqs, yf, label=f'sensor[{i}]')
        axes[0].set_xlabel('Frequency (Hz)')
        axes[0].set_ylabel('Amplitude')
        axes[0].set_title('/flex_sensor_data - Frequency Spectrum')
        axes[0].legend(ncol=2, fontsize='small')

    # ToF sensor FFT
    if tof_ts.size:
        dt = np.mean(np.diff(tof_ts))
        N = len(tof_vals)
        freqs = rfftfreq(N, dt)
        yf = np.abs(rfft(tof_vals))
        axes[1].plot(freqs, yf, '-o')
        axes[1].set_xlabel('Frequency (Hz)')
        axes[1].set_ylabel('Amplitude')
        axes[1].set_title('/tof_sensor_data - Frequency Spectrum')

    plt.tight_layout(rect=[0, 0, 1, 0.95])
    downloads = Path.home() / "Downloads"
    downloads.mkdir(parents=True, exist_ok=True)
    filename = downloads / f"{Path(bag_file).stem}_fft_plot.png"
    plt.savefig(filename)
    plt.close(fig)
    print(f"Saved plot to: {filename}")


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
        plot_for_bag_freq(bag)
    
    # Combine all PNGs into one PDF in Downloads
    downloads = Path.home() / "Downloads"
    png_files = sorted(downloads.glob("*_plot.png"))
    if png_files:
        images = [Image.open(p).convert("RGB") for p in png_files]
        pdf_path = downloads / "all_plots_combined.pdf"
        images[0].save(pdf_path, save_all=True, append_images=images[1:])
        print(f"\n✅ Saved combined PDF to: {pdf_path}")
    else:
        print("⚠️ No PNG plots found to combine.")


if __name__ == '__main__':
    main()
