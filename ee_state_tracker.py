import rclpy
import json
from rclpy.node import Node
from gesture_interfaces.msg import Pose
import socket
import time

class SocketPublisher(Node):
    def __init__(self):
        super().__init__('socket_publisher')

        # Create a publisher to publish messages
        #self.publisher = self.create_publisher(String, 'your_topic', 10)  # Replace 'YourMessage' and 'your_topic' with your actual message type and topic name
        self.subscriber = self.create_subscription(Pose, 'gesture_cmd', self.publish_data, 10)

        # Create a socket
        self.client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.client_address = ('localhost', 12345)
        self.client_socket.connect(self.client_address)

        self.x = 0
        self.y = 0
        self.z = 0
        print("constructor finished initialization")


        # Publish data periodically
        #self.timer = self.create_timer(1.0, self.publish_data)  # Publish data every 1 second

    def publish_data(self, msg):
        # Publish the message
        self.x += msg.x
        self.y += msg.y
        self.z += msg.z

        print("heard {}, {}, {} | state: {}, {}, {}".format(msg.x, msg.y, msg.z, self.x, self.y, self.z))
        
        if msg.reset:
            j_msg = {'x' : self.x,
                     'y' : self.y,
                     'z' : self.z,
                     'reset' : True
                    }
            json_msg = json.dumps(j_msg)
            print(json_msg)
            self.client_socket.sendall(json_msg.encode())
        time.sleep(0.75)


def main(args=None):
    rclpy.init(args=args)
    socket_publisher = SocketPublisher()
    rclpy.spin(socket_publisher)
    socket_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

