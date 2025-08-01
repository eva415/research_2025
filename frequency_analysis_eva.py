#!/usr/bin/env python3
"""
This script reads ROS2 bag files, extracts flex sensor and time-of-flight data,
computes frequency-domain spectra via FFT, identifies the dominant frequencies,
and plots comparisons across experimental groups.
"""
import argparse
from pathlib import Path
import matplotlib.pyplot as plt
import numpy as np
from rosbag2_py import SequentialReader, StorageOptions, ConverterOptions
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message

# Constants defining plot limits for y-axis (amplitude) and x-axis (frequency)
FLEX_YLIM = (.0000010, 0.0)  # Min and max amplitude for flex sensor plots
TOF_YLIM = (.00010, 0.0)     # Min and max amplitude for ToF sensor plot
TOF_XLIM = (0.01, 10)        # Frequency range (Hz)

# Predefined experimental groups for labeling and color-coding plots
GROUPS = [
    'hella_occlusion',
    'no_occlusion',
    'left_occlusion',
    'right_occlusion',
    'just_occlusion'
]


def read_ros2_bag(bag_path):
    """
    Generator that yields (topic_name, deserialized_message, timestamp_nanoseconds)
    for each message in the ROS2 bag at bag_path.
    """
    reader = SequentialReader()
    reader.open(
        StorageOptions(uri=str(bag_path), storage_id='sqlite3'),
        ConverterOptions(
            input_serialization_format='cdr',
            output_serialization_format='cdr'
        )
    )

    topic_types = {t.name: t.type for t in reader.get_all_topics_and_types()}

    while reader.has_next():
        topic, data, ts = reader.read_next()
        msg = deserialize_message(data, get_message(topic_types[topic]))
        yield topic, msg, ts


def compute_fft(time, values, window=True):
    """
    Computes the single-sided amplitude spectrum for given time-series data,
    and returns frequencies, spectra, and the dominant frequency per channel.
    """
    # Estimate sampling interval
    dt = np.median(np.diff(time))
    uniform_t = np.arange(time[0], time[-1], dt)

    # Ensure values is 2D
    vals = values.reshape(-1, 1) if values.ndim == 1 else values

    # Interpolate onto uniform grid
    interp = np.vstack([
        np.interp(uniform_t, time, vals[:, i])
        for i in range(vals.shape[1])
    ]).T

    if window:
        interp *= np.hanning(len(interp))[:, None]

    N = interp.shape[0]
    freqs = np.fft.rfftfreq(N, dt)
    spectra = np.abs(np.fft.rfft(interp - interp.mean(axis=0), axis=0)) / N

    # Find dominant frequency per channel
    dom_freqs = freqs[np.argmax(spectra, axis=0)]

    return freqs, spectra, dom_freqs


def analyze_bag(bag_file):
    """
    Extracts flex and ToF sensor data from a bag file,
    computes their FFT spectra and dominant frequencies, and returns:
        flex frequencies, flex spectra, flex dominant freqs,
        tof frequencies, tof spectra, tof dominant freq
    """
    flex_ts, flex_vals = [], []
    tof_ts, tof_vals = [], []

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

    if len(flex_ts) > 1:
            flex_dt = np.median(np.diff(flex_ts))
            print(f"[INFO] Flex sensor sampling rate: {1/flex_dt:.2f} Hz (dt = {flex_dt:.3f} s)")
    else:
        print("[INFO] Flex sensor: Not enough data points to estimate sampling rate.")

    if len(tof_ts) > 1:
        tof_dt = np.median(np.diff(tof_ts))
        print(f"[INFO] ToF sensor sampling rate: {1/tof_dt:.2f} Hz (dt = {tof_dt:.3f} s)")
    else:
        print("[INFO] ToF sensor: Not enough data points to estimate sampling rate.")

    # Initialize outputs
    ff, sf, flex_dom = (None, None, None)
    if flex_ts.size and flex_vals.size:
        ff, sf, flex_dom = compute_fft(flex_ts, flex_vals)

    ft, st, tof_dom = (None, None, None)
    if tof_ts.size:
        ft, st, tof_dom = compute_fft(tof_ts, tof_vals.reshape(-1, 1))

    return ff, sf, flex_dom, ft, st, tof_dom


def compare_groups(bag_paths, labels, output_dir=None, normalize=False):
    """
    Group multiple bag files by experimental condition, compute FFT,
    plot spectra, and report dominant frequencies per group.
    """
    data_by_group = {g: [] for g in GROUPS}
    data_by_group['other'] = []

    for bag, lbl in zip(bag_paths, labels):
        ff, sf, fdom, ft, st, tdom = analyze_bag(bag)
        # Assign to group
        for prefix in GROUPS:
            if lbl.startswith(prefix):
                data_by_group[prefix].append((lbl, ff, sf, fdom, ft, st, tdom))
                break
        else:
            data_by_group['other'].append((lbl, ff, sf, fdom, ft, st, tdom))

    out = Path(output_dir) if output_dir else None
    if out:
        out.mkdir(parents=True, exist_ok=True)

    # For summary of dominants
    summary = {}

    for group, entries in data_by_group.items():
        if not entries:
            continue

        # Collect dominants
        flex_dom_all = []
        tof_dom_all = []
        for lbl, ff, sf, fdom, ft, st, tdom in entries:
            flex_dom_all.append((lbl, fdom))
            tof_dom_all.append((lbl, float(tdom) if tdom is not None else None))
        summary[group] = {
            'flex': flex_dom_all,
            'tof': tof_dom_all
        }

        # Plotting
        n_ch = entries[0][2].shape[1]
        fig, axes = plt.subplots(n_ch + 1, 1, figsize=(10, 4 * (n_ch + 1)), sharex=True)
        fig.suptitle(f"{group} - Frequency Analysis")

        for ch in range(n_ch):
            ax = axes[ch]
            for lbl, ff, sf, *_ in entries:
                if ff is None: continue
                amp = sf[:, ch]
                if normalize:
                    amp = amp / amp.max()
                ax.loglog(ff, amp, label=lbl)
            ax.set_ylabel(f'Flex[{ch}] Amp')
            ax.set_ylim(*FLEX_YLIM)
            ax.grid(True, which='both', ls='--', lw=0.5)
            ax.legend(fontsize='small')

        ax_tof = axes[-1]
        for lbl, *_ , ft, st, _ in entries:
            if ft is None: continue
            amp = st[:, 0]
            if normalize:
                amp = amp / amp.max()
            ax_tof.loglog(ft, amp, marker='.', linestyle='-', label=lbl)
        ax_tof.set_ylabel('ToF Amp')
        ax_tof.set_ylim(*TOF_YLIM)
        ax_tof.set_xlim(*TOF_XLIM)
        ax_tof.set_xlabel('Frequency (Hz)')
        ax_tof.grid(True, which='both', ls='--', lw=0.5)
        ax_tof.legend(fontsize='small')

        plt.tight_layout(rect=[0, 0, 1, 0.96])
        if out:
            plt.savefig(out / f'{group}_combined.png', dpi=150)
        plt.show()

    # Print a summary of dominant frequencies
    print("\nDominant Frequencies by Group and File:")
    for group, doms in summary.items():
        print(f"\n=== {group} ===")
        print("  Flex channels (per file):")
        for lbl, fdom in doms['flex']:
            freqs_str = ", ".join(f"{f:.2f}Hz" for f in np.atleast_1d(fdom))
            print(f"    {lbl}: {freqs_str}")
        print("  ToF sensor:")
        for lbl, tdom in doms['tof']:
            print(f"    {lbl}: {tdom:.2f}Hz" if tdom is not None else f"    {lbl}: N/A")


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description="Group-based FFT comparison")
    parser.add_argument('directory', nargs='?', default='.',
                        help='Directory with `.db3` bags organized by condition')
    parser.add_argument('--out', default=None, help='Directory to save plots')
    parser.add_argument('--normalize', action='store_true',
                        help='Normalize spectra to their peaks')
    args = parser.parse_args()

    base = Path(args.directory)
    if not base.exists() or not base.is_dir():
        parser.error(f"Directory not found: {base}")

    bags = list(base.glob('*.db3'))
    for sub in base.iterdir():
        if sub.is_dir():
            bags.extend(sub.glob('*.db3'))
    bags = sorted(map(str, bags))
    labels = [Path(b).stem for b in bags]
    if not bags:
        parser.error(f"No .db3 files found in {base}")

    compare_groups(bags, labels, args.out, args.normalize)
