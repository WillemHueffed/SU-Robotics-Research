from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='sim'
            ),
        Node(
            package='gesture_control',
            executable='camera_feed',
            name='camera_feed'
            ),
        Node(
            package='gesture_control',
            executable='command_translator',
            name='command_translator'
            ),
        Node(
            package='gesture_control',
            executable='video_display',
            name='video_display'
            ),
        Node(
            package='gesture_control',
            executable='gesture_recognizer',
            name='gesture_recognizer'
            ),
        Node(
            package='gesture_control',
            executable='ee_state_tracker',
            name='ee_state_tracker'
            )
    ])
