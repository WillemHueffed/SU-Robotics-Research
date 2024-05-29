# SU_Robotics
SU human dexterity soft robotics &amp; navigation with eye gaze

## Static transform between camera and base
  - link relationship: camera_locobot_link <-> locobot/base_link
  - Position: [x,y,z]->[0.091171, 0.0175, 0.057773]
  - Orientation: [x,y,z,w]->[0, -7.85398e-05, 0, 1]
  - This should be the static transform. Assumes we're home position for pan and tilt servos. Per Luke @ Trossen the manufacturing tolerances should be tight enought that we can use this and not worry about hand-eye calibration.
  - Transform obtained via running the command `ros2 launch interbotix_xslocobot_descriptions xslocobot_description.launch.py robot_model:=locobot_wx250s use_joint_pub_gui:=true` and inspecting the TF tree in RViz

## Nodes
### camera_coord_node
  - publish (x,y,z) camera coordinates from realsense camera. based on most recent click location on the displayed camera feed
  - logic: track click on camera feed (x,y) E [0,1] -> grab pixel at (x,y) -> publish (x,y,z) coordinates to topic `camera_coords`

### coord_translator_node
  - listens to `camera_coords` -> applies static transform -> publishes transformed coords to `translated_coords`

### eye_gaze_node
 - Currently a WIP
 - Goal: Read the datastream from the tobii hardware -> calculate fixation in realtime -> publish to topic the coord_translator_node is listening to

## Scripts
### command_executor.py
  - Runs the python API which interfaces with the robot via the `interbotix xs_sdk`. Communicates with ROS via a socket bound to `localhost:12345`.
### manual_control.py
  - (may be currently deprecated?)
  - Allows for manual control of robot via the command line -> used for testing
  - To use run the `xs_sdk`, then `command_executor.py`, and then this script

## eye_tracking directory
- Contains a bunch of python scripts that are used to develop the realtime eye tracking algorithm
- Also contain code examples of interfacing with the tobii hardware

## Dependencies
### Software
- [ROS2 Galactic](https://docs.ros.org/en/galactic/index.html)
- [Trossen Interbotix ROS2 Packages](https://docs.trossenrobotics.com/interbotix_xslocobots_docs/ros2_packages.html)
- [Intel Realsense SDK](https://dev.intelrealsense.com/docs/docs-get-started?_ga=2.43295590.2124744568.1709670869-273457915.1707248308)
- [Google Media Pipe](https://developers.google.com/mediapipe/solutions/vision/gesture_recognizer#configurations_options)
- [Ubuntu 20.04 LTS](https://ubuntu.com/)
- Python3
- C++
### Hardware
- [Locobot-WX250s](https://www.trossenrobotics.com/locobot-wx250.aspx)
- Intel Realsense D435 RGBD camera (Comes with the Locobot)
### Python Libraries
- scipy
- numpy

## Common Issues
### XS_SDK is running -> commannd_executor.py can't find sdk
- try: `ros2 topic list` if it isn't showing any nodes under the locobot namespace do the following
- go to `http://192.168.186.2/wifi` and reconnect base to su-peer
- restart NUC computer (assuming developing directly on NUC)
- try viewing topics again, should be fixed
