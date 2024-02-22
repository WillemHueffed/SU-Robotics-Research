import time
import mediapipe as mp
import numpy as np
from mediapipe.tasks import python
from mediapipe.tasks.python import vision
import pyrealsense2 as rs

BaseOptions = mp.tasks.BaseOptions
GestureRecognizer = mp.tasks.vision.GestureRecognizer
GestureRecognizerOptions = mp.tasks.vision.GestureRecognizerOptions
GestureRecognizerResult = mp.tasks.vision.GestureRecognizerResult
VisionRunningMode = mp.tasks.vision.RunningMode

# Create a gesture recognizer instance with the live stream mode:
def print_result(result: GestureRecognizerResult, output_image: mp.Image, timestamp_ms: int):
    print('gesture recognition result: {}'.format(result.gestures))

options = GestureRecognizerOptions(
    base_options=BaseOptions(model_asset_path='gesture_recognizer.task'),
    running_mode=VisionRunningMode.LIVE_STREAM,
    result_callback=print_result)

prev_timestamp_ms = 0  # Initialize previous timestamp

with GestureRecognizer.create_from_options(options) as recognizer:
    pipeline = rs.pipeline()
    pipeline.start()

    while True:
        frames = pipeline.wait_for_frames()
        color_frame = frames.get_color_frame()
        color_frame_data = np.array(color_frame.get_data(), dtype=np.uint8)
        frame_timestamp_ms = int(time.time() * 1000)  # Current timestamp in milliseconds

        if frame_timestamp_ms <= prev_timestamp_ms:
            # If current timestamp is not greater than previous, skip processing
            continue
        
        prev_timestamp_ms = frame_timestamp_ms  # Update previous timestamp
        
        mp_img = mp.Image(image_format=mp.ImageFormat.SRGB, data=color_frame_data)
        recognizer.recognize_async(mp_img, frame_timestamp_ms)

