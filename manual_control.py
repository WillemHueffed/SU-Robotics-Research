import rclpy
import json
from rclpy.node import Node
import socket


class SocketPublisher(Node):
    def __init__(self):
        super().__init__("socket_publisher")

        # Create a socket
        self.client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.client_address = ("localhost", 12346)
        self.client_socket.connect(self.client_address)

        print("Socket initialized")

        self.x = 0
        self.y = 0
        self.z = 0

    def send_command(self, x, y, z, reset):
        # Prepare the message
        msg = {"x": x, "y": y, "z": z, "reset": True}
        json_msg = json.dumps(msg)

        # Send the message
        self.client_socket.sendall(json_msg.encode())

    def get_input(self):
        while True:
            try:
                x = float(input("Enter x value: "))
                y = float(input("Enter y value: "))
                z = float(input("Enter z value: "))
                self.send_command(x, y, z, True)
            except ValueError:
                print("Invalid input. Please enter a number.")
            except KeyboardInterrupt:
                print("\nExiting.")
                break


def main(args=None):
    rclpy.init(args=args)
    socket_publisher = SocketPublisher()
    socket_publisher.get_input()
    socket_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
