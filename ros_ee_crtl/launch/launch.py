from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='rgbd_camera',
            namespace='camera_node_ns',
            executable='depth_node',
            name='camera_node'
            )
    ])
