from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='gesture_control',
            namespace='gesture_recognizer_0',
            executable='gesture_recognizer',
            name='gesture_recognizer'
            ),
    ])
