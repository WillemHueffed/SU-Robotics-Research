import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist
from gesture_interfaces.msg import Pose

class CommandTranslator(Node):

    def __init__(self):
        super().__init__('command_translator')
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.pose_publisher = self.create_publisher(Pose, 'gesture_cmd', 10)
        self.subscriber = self.create_subscription(String, 'recognized_gesture', self.listener_callback, 10)
        #timer_period = 0.5
        #self.timer = self.create_timer(timer_period, self.timer_callback)

    def listener_callback(self, msg):
        twist_msg = Twist()
        pose_msg = Pose()
        #self.get_logger().info('hearing: {}'.format(msg.data))
        if msg.data == 'None':
            pass
        if msg.data == 'Open_Palm':
            twist_msg.angular.z = 0.01
            pose_msg.z = 0.01
        if msg.data == 'Closed_Fist':
            twist_msg.angular.z = -0.01
            pose_msg.z = -0.01
        if msg.data == 'Thumb_Up':
            twist_msg.linear.x = 0.01
            pose_msg.x = 0.01
        if msg.data == 'Thumb_Down':
            twist_msg.linear.x = -0.01
            pose_msg.x = -0.01
        if msg.data == 'Victory':
            twist_msg.linear.y = 0.01
            pose_msg.y = 0.01
        if msg.data == 'Pointing_Up':
            twist_msg.linear.y = -0.01
            pose_msg.y = -0.01
        if msg.data == 'ILoveYou':
            pose_msg.reset = True
        self.publisher.publish(twist_msg)
        self.pose_publisher.publish(pose_msg)
        #self.get_logger().info("I heard: {})".format(msg))

def main(args=None):
    rclpy.init(args=args)

    command_translator = CommandTranslator()

    rclpy.spin(command_translator)

    command_translator.destory_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

