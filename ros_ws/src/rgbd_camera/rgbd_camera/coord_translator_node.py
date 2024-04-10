import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import json


class CoordTranslatorNode(Node):
    def __init__(self):
        super().__init__("coord_translator_node")

        self.subscription = self.create_subscription(
            String, "camera_coords", self.callback, 10
        )
        self.publisher = self.create_publisher(String, "translated_coords", 10)

    def callback(self, msg):
        self.get_logger().info('Received: "%s"' % msg.data)
        incoming_msg = json.loads("{}".format(msg.data))
        # Convert string(list) -> list aka array
        camera_coords = eval(incoming_msg["world_coords"])
        # See README for explanation of coordinate transformation
        camera_x = float(camera_coords[0])
        camera_y = float(camera_coords[1])
        camera_z = float(camera_coords[2])
        # The transform in the readme is from root -> camera link => subtract to go from link -> root
        arm_x = camera_z - 0.09
        arm_y = camera_x - 0.01
        arm_z = camera_y - 0.05773
        outgoing_msg = f'"x": "{arm_x}", "y": "{arm_y}", "z": "{arm_z}"'
        outgoing_msg = "{" + outgoing_msg + "}"
        outgoing_msg_ros = String()
        outgoing_msg_ros.data = outgoing_msg
        self.publisher.publish(outgoing_msg_ros)


def main(args=None):
    rclpy.init(args=args)
    node = CoordTranslatorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
