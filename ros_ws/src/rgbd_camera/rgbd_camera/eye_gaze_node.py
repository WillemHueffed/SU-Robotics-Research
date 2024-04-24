import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class EyeGazePublisher(Node):
    def __init__ (self):
        super().__init__("eye_gaze_publisher")
        self.publisher_ = self.create_publisher (String, 'eye_data', 10)
        timer_period = 1
        self.timer = self.create_timer(timer_period, self.publish_message)

    def publish_message(self):
        msg = String()
        msg.data = "{ x:0.5, y:0.5}"
        self.publisher_.publish(msg)
        self.get_logger().info("Publishing: %s" % msg.data)

def main(args=None):
    rclpy.init(args=args)
    node = EyeGazePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
