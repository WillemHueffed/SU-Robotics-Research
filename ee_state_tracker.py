import rclpy
import json
from rclpy.node import Node
import socket
from std_msgs.msg import String

PORT = 12347


class SocketPublisher(Node):
    def __init__(self):
        super().__init__("socket_publisher")

        # Create a publisher to publish messages
        self.subscriber = self.create_subscription(
            String, "camera_node_ns/translated_coords", self.publish_data, 10
        )

        # Create a socket
        self.client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.client_address = ("localhost", PORT)
        self.client_socket.connect(self.client_address)

        print("constructor finished initialization")

        # Publish data periodically
        # self.timer = self.create_timer(1.0, self.publish_data)  # Publish data every 1 second

    def publish_data(self, msg):
        # Publish the message
        msg = json.loads(msg.data)
        print("heard {}".format(msg))
        self.client_socket.sendall(str(msg).encode())


def main(args=None):
    rclpy.init(args=args)
    socket_publisher = SocketPublisher()
    rclpy.spin(socket_publisher)
    socket_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
