from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            namespace='turtlesim1',
            executable='turtlesim_node',
            name='sim'
            ),
        Node(
            package='gesture_control',
            namespace='gesture_control1',
            executable='gesture_recognizer',
            name='gesture_recognizer'
            )
    ])
