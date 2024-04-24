import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import pyrealsense2 as rs
import numpy as np
import cv2
import time
import json

CAMERA_POLLING_RATE = 0.0001


class RealSenseNode(Node):
    def __init__(self):
        super().__init__("camera_coord_node")

        # Depth point needs to be in a "global" scope to allow the subscriber
        # callback function to access it
        self.depth_point = -1

        # Create a subscriber that listens to output from eye gaze node
        self.subscriber_ = self.create_subscription(
            String, "eye_data", self.listener_callback, 10
        )
        # Create a means of publishing
        self.publisher_ = self.create_publisher(String, "camera_coords", 10)

        # Initialize global variables for clicked coordinates
        self.clicked_x = 0.5
        self.clicked_y = 0.5
        self.clicked = False

        # Configure depth and color streams
        self.pipeline = rs.pipeline()
        self.config = rs.config()

        self.config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
        self.config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)

        self.pipeline.start(self.config)

        # Align depth frames to color frames
        self.align_to = rs.stream.color
        self.align = rs.align(self.align_to)

        # Wait for a coherent pair of frames: depth and color
        frames = self.pipeline.wait_for_frames()
        aligned_frames = self.align.process(frames)

        # Extract frame data
        color_frame = aligned_frames.get_color_frame()
        color_image = np.asanyarray(color_frame.get_data())

        depth_frame = aligned_frames.get_depth_frame()
        depth_image = np.asanyarray(depth_frame.get_data())

        # Set up the mouse callback function
        cv2.namedWindow("Color", cv2.WINDOW_AUTOSIZE)
        cv2.setMouseCallback("Color", self.mouse_callback, color_image)
        cv2.namedWindow("Depth", cv2.WINDOW_AUTOSIZE)
        cv2.setMouseCallback("Depth", self.mouse_callback, depth_image)

        self.timer_ = self.create_timer(CAMERA_POLLING_RATE, self.run)

    def mouse_callback(self, event, x, y, flags, param):
        if event == cv2.EVENT_LBUTTONDOWN:
            # Get the size of the color image
            height, width = param.shape[:2]

            # Calculate the normalized coordinates
            self.clicked_x = x / width
            self.clicked_y = 1 - (y / height)
            if not self.clicked:
                self.clicked = True

    def listener_callback(self, msg):
        eye_data = json.loads(msg.data)
        # TODO: Because the video feed isn't the full screen we need to map the
        # [0,1] coords of the entire screen to the [0,1] of just the video feed
        screen_x = eye_data["x"]
        screen_y = eye_data["y"]
        msg = String()
        msg.data = '"screen_coords": "{}", "world_coords": "{}"'.format(
            (screen_x, screen_y), self.depth_point
        )
        msg.data = "{" + msg.data + "}"
        self.publisher_.publish(msg)
        self.get_logger().info("Publishing: {}".format(msg.data))

    def run(self):
        # Wait for a coherent pair of aligned frames: depth and color
        frames = self.pipeline.wait_for_frames()
        aligned_frames = self.align.process(frames)

        # Extract frame data
        depth_frame = aligned_frames.get_depth_frame()
        color_frame = aligned_frames.get_color_frame()
        if not depth_frame or not color_frame:
            self.get_logger().error("null depth or color frame")
            return

        # Cast frames to image format via numpy
        depth_image = np.asanyarray(depth_frame.get_data())
        depth_colormap = cv2.applyColorMap(
            cv2.convertScaleAbs(depth_image, alpha=0.03), cv2.COLORMAP_JET
        )
        color_image = np.asanyarray(color_frame.get_data())

        # Get the depth data from pos x,y | flip the y value via 1-y -> depth frame y coords is opposite eye tracker
        xyDepth = depth_frame.get_distance(
            int(self.clicked_x * depth_frame.width),
            int((1 - self.clicked_y) * depth_frame.height),
        )
        # print("Clicked at position: ({}, {}) depth is: {}".format(self.clicked_x, self.clicked_y, xyDepth))

        # Point cloud
        x_pxl = int(self.clicked_x * depth_frame.width)
        y_pxl = int((1 - self.clicked_y) * depth_frame.height)
        depth_intrinsics = depth_frame.profile.as_video_stream_profile().intrinsics
        self.depth_point = rs.rs2_deproject_pixel_to_point(
            depth_intrinsics, [x_pxl, y_pxl], xyDepth
        )

        # publish message
        if self.clicked:
            msg = String()
            msg.data = '"screen_coords": "{}", "world_coords": "{}"'.format(
                (self.clicked_x, self.clicked_y), self.depth_point
            )
            msg.data = "{" + msg.data + "}"
            self.publisher_.publish(msg)
            self.get_logger().info("Publishing: {}".format(msg.data))
            self.clicked = False

        # Display the color image in the window
        cv2.imshow("Color", color_image)
        cv2.imshow("Depth", depth_colormap)

        time.sleep(0.100)  # Sleep for 100 ms

        cv2.waitKey(1)


def main(args=None):
    rclpy.init(args=args)
    real_sense_node = RealSenseNode()
    rclpy.spin(real_sense_node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
