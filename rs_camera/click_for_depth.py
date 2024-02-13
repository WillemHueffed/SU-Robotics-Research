import pyrealsense2 as rs
import numpy as np
import cv2

# Initialize global variables for clicked coordinates
clicked_x = 0.5
clicked_y = 0.5

# Mouse event callback function
def mouse_callback(event, x, y, flags, param):
    global clicked_x, clicked_y

    if event == cv2.EVENT_LBUTTONDOWN:
        # Get the size of the color image
        height, width = param.shape[:2]

        # Calculate the normalized coordinates
        clicked_x = x / width
        clicked_y = 1 - (y / height)
        #clicked_y = y / height

# Configure depth and color streams
pipeline = rs.pipeline()
config = rs.config()

config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)

pipeline.start(config)

try:
    while (True):
        # Wait for a coherent pair of frames: depth and color
        frames = pipeline.wait_for_frames()
        depth_frame = frames.get_depth_frame()
        color_frame = frames.get_color_frame()
        if not depth_frame or not color_frame:
            continue
        
        #Cast frames to image format via numpy
        depth_image = np.asanyarray(depth_frame.get_data())
        depth_colormap = cv2.applyColorMap(cv2.convertScaleAbs(depth_image, alpha=0.03), cv2.COLORMAP_JET)
        color_image = np.asanyarray(color_frame.get_data())

        #Get the depth data from pos x,y | flip the y value via 1-y -> depth frame y coords is opposite eye tracker
        xyDepth = depth_frame.get_distance(int(clicked_x * depth_frame.width), int((1 - clicked_y) * depth_frame.height))
        print("Clicked at position: ({}, {}) depth is: {}".format(clicked_x, clicked_y, xyDepth))

        # Create a window for the RGB image
        cv2.namedWindow('Color', cv2.WINDOW_AUTOSIZE)
       
        # Create a window for the depth image
        cv2.namedWindow('Depth', cv2.WINDOW_AUTOSIZE)

        # Set the mouse callback function for the RGB image window
        cv2.setMouseCallback('Color', mouse_callback, color_image)
        cv2.setMouseCallback('Depth', mouse_callback, depth_image)

        # Display the color image in the window
        cv2.imshow('Color', color_image)
        
        # Create a window for the depth image
        cv2.imshow('Depth', depth_colormap)
       
        cv2.waitKey(1)
finally:
    pipeline.stop()

