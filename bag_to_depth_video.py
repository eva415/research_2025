import sqlite3
import cv2
import numpy as np
import rclpy
from sensor_msgs.msg import Image
from rclpy.serialization import deserialize_message

def extract_images_from_db3(db_file, topic_name, apply_colormap=True, colormap=cv2.COLORMAP_JET):
    # Initialize ROS 2 Python client library
    rclpy.init()

    # Connect to the SQLite database
    conn = sqlite3.connect(db_file)
    cursor = conn.cursor()

    # Query to join 'messages' with 'topics' to retrieve the correct topic data
    query = """
    SELECT m.timestamp, m.data 
    FROM messages m
    JOIN topics t ON m.topic_id = t.id
    WHERE t.name = ?
    """
    cursor.execute(query, (topic_name,))

    frames = []

    for timestamp, data in cursor.fetchall():
        # Debugging: Check data type and size
        print(f"Timestamp: {timestamp}, Data size: {len(data)} bytes")

        # Deserialize the CDR data to an Image message
        try:
            image_msg = deserialize_message(data, Image)
            print(f"Image encoding: {image_msg.encoding}")

            # Handle rgb8 encoding
            if image_msg.encoding == 'rgb8':
                img_data = np.frombuffer(image_msg.data, dtype=np.uint8)
                width = image_msg.width
                height = image_msg.height
                frame = img_data.reshape((height, width, 3))
                frame = cv2.cvtColor(frame, cv2.COLOR_RGB2BGR)

            # Handle 16-bit depth encoding
            elif image_msg.encoding == '16UC1':
                depth_data = np.frombuffer(image_msg.data, dtype=np.uint16)
                width = image_msg.width
                height = image_msg.height
                depth_frame = depth_data.reshape((height, width))

                # Normalize to 0-255 for display
                depth_norm = cv2.normalize(depth_frame, None, 0, 255, cv2.NORM_MINMAX)
                depth_uint8 = depth_norm.astype(np.uint8)

                # Apply colormap if desired
                if apply_colormap:
                    frame = cv2.applyColorMap(depth_uint8, colormap)
                else:
                    frame = cv2.cvtColor(depth_uint8, cv2.COLOR_GRAY2BGR)

            else:
                print(f"Unsupported encoding: {image_msg.encoding}")
                continue

            # Debugging: Check the shape of the first few frames
            if len(frames) < 5:
                print(f"Frame {len(frames)} shape: {frame.shape}")

            frames.append(frame)

        except Exception as e:
            print(f"Error deserializing image data: {e}")

    conn.close()
    rclpy.shutdown()

    return frames


def save_video(frames, output_file, fps=5):
    if len(frames) == 0:
        print("No frames to write.")
        return

    height, width, _ = frames[0].shape
    print(f"Saving video with frame size: {width}x{height}, FPS: {fps}")

    fourcc = cv2.VideoWriter_fourcc(*'MJPG')
    out = cv2.VideoWriter(output_file, fourcc, fps, (width, height))

    for idx, frame in enumerate(frames):
        out.write(frame)
        if idx % 100 == 0:
            print(f"Writing frame {idx}")

    out.release()
    print(f"Video saved as {output_file}")


def main():
    db_file = "/home/imml/Documents/diamond_pear_packing/mar6_moving_green_14_16/mar6_moving_green_14_16_0.db3"
    topic_name = "/synced_throttled/depth/image_rect_raw"
    output_video = f"{db_file}_DEPTH_COLORIZED.mov"

    # Extract frames with colormap applied (True) using JET
    frames = extract_images_from_db3(db_file, topic_name, apply_colormap=True, colormap=cv2.COLORMAP_JET)

    if frames:
        # Use realistic frame rate: ~10 FPS
        save_video(frames, output_video, fps=10)
    else:
        print("No frames extracted.")

if __name__ == "__main__":
    main()
