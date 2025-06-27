"""
    This code has a function, get_centroids_from_image, that takes a given image and returns all the centroids containing pears.
    This function can be added into my SAM2 code in order to find centroids of pears to track in a video.
"""


from ultralytics import YOLO
import cv2

# Load the model once (outside the function, to avoid reloading every call)
model = YOLO("runs/detect/train3/weights/best.pt")

def get_centroids_from_image(image, draw=True):
    """
    Runs YOLO detection on the input image, returns centroids of detected objects.
    Optionally draws bounding boxes and centroids on a copy of the image.

    Args:
        image (np.ndarray): Input image as a numpy array (BGR).
        draw (bool): Whether to draw bounding boxes and centroids.

    Returns:
        centroids (list of tuples): List of (cx, cy) centroids.
        image_draw (np.ndarray, optional): Image with drawn boxes and centroids if draw=True.
    """
    results = model(image, conf=0.1)
    centroids = []
    image_draw = image.copy() if draw else None

    for result in results:
        for box in result.boxes:
            x1, y1, x2, y2 = box.xyxy[0].tolist()
            cx = int((x1 + x2) / 2)
            cy = int((y1 + y2) / 2)
            centroids.append((cx, cy))

            if draw:
                cv2.rectangle(image_draw, (int(x1), int(y1)), (int(x2), int(y2)), (255, 0, 0), 2)
                cv2.circle(image_draw, (cx, cy), 5, (0, 255, 0), -1)
                cv2.putText(image_draw, f"({cx},{cy})", (cx + 5, cy - 5), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 1)

    if draw:
        return centroids, image_draw
    else:
        return centroids

# Example usage:
if __name__ == "__main__":
    image_path = "/Users/evakrueger/git/ultralytics/datasets/test/green_pears.png"
    img = cv2.imread(image_path)
    centroids, img_with_drawings = get_centroids_from_image(img, draw=True)

    print("Centroids:", centroids)
    cv2.imwrite("output_detection_centroids.jpg", img_with_drawings)
