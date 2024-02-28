import rclpy
from rclpy.node import Node
import time
import mediapipe as mp
import numpy as np
from mediapipe.tasks import python
from mediapipe.tasks.python import vision
import pyrealsense2 as rs
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
from sensor_msgs.msg import Image

BaseOptions = mp.tasks.BaseOptions
GestureRecognizer = mp.tasks.vision.GestureRecognizer
GestureRecognizerOptions = mp.tasks.vision.GestureRecognizerOptions
GestureRecognizerResult = mp.tasks.vision.GestureRecognizerResult
VisionRunningMode = mp.tasks.vision.RunningMode

class GestureRecognitionNode(Node):
    def __init__(self):
        super().__init__('gesture_recognition_node')
        
        # Initialize previous timestamp
        self.prev_timestamp_ms = 0  

        # Create a gesture recognizer instance with the live stream mode
        self.options = GestureRecognizerOptions(
            base_options=BaseOptions(model_asset_path='/home/locobot/SU_Robotics/gesture_control_ros/src/gesture_control/gesture_control/gesture_recognizer.task'),
            running_mode=VisionRunningMode.LIVE_STREAM,
            result_callback=self.publish_result)
        
        self.recognizer = GestureRecognizer.create_from_options(self.options)
        
        # Start RealSense pipeline
        self.pipeline = rs.pipeline()
        self.pipeline.start()
        
        # Create publisher for recognized gesture
        self.publisher_ = self.create_publisher(String, 'recognized_gesture', 10)

        # Create OpenCV <-> Ros2 bridge to allow image conversion
        self.bridge = CvBridge()
        self.camera_publisher_ = self.create_publisher(Image, 'rs_camera_feed', 10)

    def publish_result(self, result: GestureRecognizerResult, output_image: mp.Image, timestamp_ms: int):
        if result.gestures:
            self.get_logger().info("{}".format(result.gestures[0]))
            msg = String()
            msg.data = result.gestures[0][0].category_name
            self.publisher_.publish(msg)

    def run(self):
        while True:
            # Wait for a coherent pair of frames: depth and color
            frames = self.pipeline.wait_for_frames()
            color_frame = frames.get_color_frame()
            color_frame_data = np.array(color_frame.get_data(), dtype=np.uint8)
            frame_timestamp_ms = int(time.time() * 1000)  # Current timestamp in milliseconds

            if frame_timestamp_ms <= self.prev_timestamp_ms:
                # If current timestamp is not greater than previous, skip processing
                continue

            self.prev_timestamp_ms = frame_timestamp_ms  # Update previous timestamp

            mp_img = mp.Image(image_format=mp.ImageFormat.SRGB, data=color_frame_data)
            self.recognizer.recognize_async(mp_img, frame_timestamp_ms)

            # Publish image data
            # np array -> ros image format ->  publish
            img_msg = self.bridge.cv2_to_imgmsg(color_frame_data, encoding='bgr8')
            self.camera_publisher_.publish(img_msg)

def main(args=None):
    rclpy.init(args=args)
    gesture_recognition_node = GestureRecognitionNode()
    gesture_recognition_node.run()
    rclpy.spin(gesture_recognition_node)
    gesture_recognition_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

