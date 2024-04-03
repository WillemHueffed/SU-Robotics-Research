# SU_Robotics
SU human dexterity soft robotics &amp; navigation with eye gaze

## Static transform between camera and base
  - link relationship: camera_locobot_link <-> locobot/base_link
  - Position: [x,y,z]->[0.91171, 0.0175, 0.581887]
  - Orientation: [x,y,z,w]->[0, -7.85398e-05, 0, 1]
  - This should be the static transform. Assumes we're home position for pan and tilt servos. Per Luke @ Trossen the manufacturing tolerances should be tight enought that we can use this and not worry about hand-eye calibration.
  - Transform obtained via running the command `ros2 launch interbotix_xslocobot_descriptions xslocobot_description.launch.py robot_model:=locobot_wx250s use_joint_pub_gui=true` and inspecting the TF tree in RViz
