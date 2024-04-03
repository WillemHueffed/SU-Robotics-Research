#!/bin/bash

# Run colcon build
colcon build --symlink-install

# Source the setup script
source install/local_setup.sh

# Run the camera_node
ros2 launch launch/launch.py
