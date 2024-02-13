#!/bin/bash

# Run colcon build
colcon build

# Source the setup script
source install/setup.sh

# Run the camera_node
ros2 run rgbd_camera depth_node 

