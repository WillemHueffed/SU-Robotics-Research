import mediapipe as mp
import cv2
import numpy as np
import pyrealsense2 as rs
import time  # Add import for time module

BaseOptions = mp.tasks.BaseOptions
GestureRecognizer = mp.tasks.vision.GestureRecognizer
GestureRecognizerOptions = mp.tasks.vision.GestureRecognizerOptions
GestureRecognizerResult = mp.tasks.vision.GestureRecognizerResult
VisionRunningMode = mp.tasks.vision.RunningMode

# Define global variables to store the result and output image
classifier_result = None
classifier_output_img = None

# Initializing the drawing utils for drawing the facial landmarks on image
mp_drawing = mp.solutions.drawing_utils

# Define the callback function to print results and display the stream
def print_result_callback(result: GestureRecognizerResult, output_image: mp.Image, timestamp_ms: int):
    global classifier_result, classifier_output_img
    classifier_result = result
    classifier_output_img = output_image

def main():
    global classifier_result, classifier_output_img

    # Initialize RealSense pipeline
    pipeline = rs.pipeline()
    config = rs.config()
    config.enable_stream(rs.stream.depth, rs.format.z16, 30)
    config.enable_stream(rs.stream.color, rs.format.bgr8, 30)
    pipeline.start(config)

    # Create gesture recognizer options
    options = GestureRecognizerOptions(
        base_options=BaseOptions(model_asset_path='gesture_recognizer.task'),
        running_mode=VisionRunningMode.LIVE_STREAM,
        result_callback=print_result_callback)

    # Initialize gesture recognizer
    with GestureRecognizer.create_from_options(options) as recognizer:
        while True:
            # Wait for a coherent pair of frames: depth and color
            frames = pipeline.wait_for_frames()
            color_frame = frames.get_color_frame()

            # Convert color frame to numpy array
            color_image = np.asanyarray(color_frame.get_data())

            # Generate timestamp for the frame
            timestamp_ms = int(time.time() * 1000)  # Convert current time to milliseconds

            # Perform gesture recognition
            mp_image = mp.Image(image_format=mp.ImageFormat.SRGB, data=color_image)
            recognizer.recognize_async(mp_image, timestamp_ms)  # Pass timestamp_ms argument
            
            # Display the result and output image
            if classifier_result is not None and classifier_result.hand_landmarks is not None:
                # Convert the image from MediaPipe to NumPy array
                output_image_numpy = np.array(classifier_output_img)
                
                # Convert the image to BGR format if necessary
                if output_image_numpy.shape[-1] == 4:  # RGBA format
                    output_image_numpy = cv2.cvtColor(output_image_numpy, cv2.COLOR_RGBA2BGR)
                
                # Draw landmarks on the output image
                mp.solutions.drawing_utils.draw_landmarks(
                    output_image_numpy,
                    classifier_result.hand_landmarks,
                    mp.solutions.holistic.HAND_CONNECTIONS,
                    mp.solutions.drawing_utils.DrawingSpec(color=(255, 0, 255), thickness=1, circle_radius=1),
                    mp.solutions.drawing_utils.DrawingSpec(color=(0, 255, 255), thickness=1, circle_radius=1)
                )
                # Display the image
                cv2.imshow('Classifier Stream', output_image_numpy)
                cv2.waitKey(1)
            else:
                print("Hand landmarks not detected.")

            # Break the loop when 'q' is pressed
            if cv2.waitKey(5) & 0xFF == ord('q'):
                break

    # Stop streaming
    pipeline.stop()
    cv2.destroyAllWindows()


if __name__ == "__main__":
    main()
