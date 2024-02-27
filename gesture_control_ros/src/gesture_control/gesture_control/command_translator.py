import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class CommandTranslator(Node):

    def __init__(self):
        super().__init__('command_translator')
        self.publisher = self.create_publisher(String, 'place_holder_topic', 10)
        self.subscriber = self.create_subscription(String, 'recognized_gesture', self.listener_callback, 10)
        #timer_period = 0.5
        #self.timer = self.create_timer(timer_period, self.timer_callback)

    def listener_callback(self, msg):
        output_msg = String()
        self.get_logger().info('hearing: {}'.format(msg.data))
        if msg.data == 'None':
            output_msg.data = 'Hello world1'
        if msg.data == 'Open_Palm':
            output_msg.data = 'Hello world2'
        if msg.data == 'Thumb_Up':
            output_msg.data = 'Hello world3'
        if msg.data == 'Thumb_Down':
            output_msg.data = 'Hello world4'
        if msg.data == 'Closed_Fist':
            output_msg.data = 'Hello world5'
        if msg.data == 'Pointing_Up':
            output_msg.data = 'Hello world6'
        if msg.data == 'I_Love_You':
            output_msg.data = 'Hello world7'
        else:
            output_msg.data = 'Error in listener_callback - command_recognizer'
        self.publisher.publish(output_msg)
        #self.get_logger().info("I heard: {})".format(msg))

def main(args=None):
    rclpy.init(args=args)

    command_translator = CommandTranslator()

    rclpy.spin(command_translator)

    command_translator.destory_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

