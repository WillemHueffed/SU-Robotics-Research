from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="rgbd_camera",
                namespace="camera_node_ns",
                executable="camera_coord_node",
                name="camera_coord_node",
            ),
            Node(
                package="rgbd_camera",
                namespace="camera_node_ns",
                executable="coord_translator_node",
                name="coord_translator_node",
            ),
        ]
    )
