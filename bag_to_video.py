import sqlite3
import cv2
import numpy as np
import rclpy
from sensor_msgs.msg import Image
from rclpy.serialization import deserialize_message

def extract_images_from_db3(db_file, topic_name):
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
                # Raw image data in rgb8 format, reshape it to image using width and height
                img_data = np.array(image_msg.data, dtype=np.uint8)
                width = image_msg.width
                height = image_msg.height

                # Reshape the data into a 3D array (height, width, 3 channels for RGB)
                frame = img_data.reshape((height, width, 3))

                # Convert RGB to BGR (OpenCV expects BGR format)
                frame = cv2.cvtColor(frame, cv2.COLOR_RGB2BGR)

                # Debugging: Check the shape of the first few frames
                if len(frames) < 5:
                    print(f"Frame {len(frames)} shape: {frame.shape}")

                # Add the frame to the list of frames
                frames.append(frame)

            else:
                print(f"Unsupported encoding: {image_msg.encoding}")

        except Exception as e:
            print(f"Error deserializing image data: {e}")

    conn.close()
    rclpy.shutdown()

    return frames


def save_video(frames, output_file, fps=10):
    # Check if we have frames
    if len(frames) == 0:
        print("No frames to write.")
        return

    # Get frame dimensions (assumes all frames are the same size)
    height, width, _ = frames[0].shape

    # Print frame size for debugging
    print(f"Saving video with frame size: {width}x{height}, FPS: {fps}")

    # Define video writer
    # Use MJPEG codec and save as .mov format (more compatible)
    fourcc = cv2.VideoWriter_fourcc(*'MJPG')
    out = cv2.VideoWriter(output_file, fourcc, fps, (width, height))

    # Write the frames to the video file
    for idx, frame in enumerate(frames):
        out.write(frame)
        if idx % 100 == 0:  # Debug every 100 frames
            print(f"Writing frame {idx}")

    out.release()
    print(f"Video saved as {output_file}")


def main():
    db_file = "/home/evakrueger/Downloads/diamond_pear_packing_mar6/mar6_static_test/mar6_static_test_0.db3"  # Path to your .db3 file
    topic_name = "/synced_throttled/color/image_raw"  # Correct topic name
    output_video = f"{db_file}.mov"  # Output video file path (change to .mov)

    # Extract frames from the .db3 database
    frames = extract_images_from_db3(db_file, topic_name)

    # Save the frames as a video
    if frames:
        save_video(frames, output_video)
    else:
        print("No frames extracted.")


if __name__ == "__main__":
    main()
