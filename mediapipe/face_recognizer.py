## License: Apache 2.0. See LICENSE file in root directory.
## Copyright(c) 2015-2017 Intel Corporation. All Rights Reserved.

###############################################
##      Open CV and Numpy integration        ##
###############################################

import time
import mediapipe as mp
import pyrealsense2 as rs
import numpy as np
import cv2

# Configure depth and color streams
pipeline = rs.pipeline()
config = rs.config()
config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)

# Start streaming
pipeline.start(config)

#Grab model
mp_holistic = mp.solutions.holistic
holistic_model = mp_holistic.Holistic(
    min_detection_confidence=0.5,
    min_tracking_confidence=0.5
)
 
# Initializing the drawing utils for drawing the facial landmarks on image
mp_drawing = mp.solutions.drawing_utils


#time used to calculate fps
previousTime = 0
currentTime = 0

try:
    while True:
        frames = pipeline.wait_for_frames()
        color_frame = frames.get_color_frame()
        color_image = np.asanyarray(color_frame.get_data())
        image = np.hstack([color_image])

        rgbImg = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
 
        # Making predictions using holistic model
        # To improve performance, optionally mark the image as not writeable to
        # pass by reference.
        image.flags.writeable = False
        results = holistic_model.process(image)
        image.flags.writeable = True
     
        # Converting back the RGB image to BGR
        image = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)
     
        # Drawing the Facial Landmarks
        mp_drawing.draw_landmarks(
          image,
          results.face_landmarks,
          mp_holistic.FACEMESH_CONTOURS,
          mp_drawing.DrawingSpec(
            color=(255,0,255),
            thickness=1,
            circle_radius=1
          ),
          mp_drawing.DrawingSpec(
            color=(0,255,255),
            thickness=1,
            circle_radius=1
          )
        )
     
        # Drawing Right hand Land Marks
        mp_drawing.draw_landmarks(
          image, 
          results.right_hand_landmarks, 
          mp_holistic.HAND_CONNECTIONS
        )
     
        # Drawing Left hand Land Marks
        mp_drawing.draw_landmarks(
          image, 
          results.left_hand_landmarks, 
          mp_holistic.HAND_CONNECTIONS
        )
         
        # Calculating the FPS
        currentTime = time.time()
        fps = 1 / (currentTime-previousTime)
        previousTime = currentTime
         
        # Displaying FPS on the image
        cv2.putText(image, str(int(fps))+" FPS", (10, 70), cv2.FONT_HERSHEY_COMPLEX, 1, (0,255,0), 2)
     
        # Display the resulting image
        #cv2.imshow("Facial and Hand Landmarks", image)

        # Show images
        cv2.namedWindow('RealSense', cv2.WINDOW_AUTOSIZE)
        cv2.imshow('RealSense', image)
        cv2.waitKey(1)

finally:
    # Stop streaming
    pipeline.stop()
