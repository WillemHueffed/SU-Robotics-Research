import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class CoordTranslatorNode(Node):

    def __init__(self):
        super().__init__("coord_translator_node")

        self.subscription = self.create_subscription(
                String,
                'camera_coords',
                self.callback,
                10
                )
        self.publisher = self.create_publisher(
                String,
                "translated_coords",
                10
                )
    
    def callback(self, msg):
        self.get_logger().info('Received: "%s"' % msg.data)
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = CoordTranslatorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
