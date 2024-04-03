import socket
import json
import time
from interbotix_xs_modules.xs_robot.locobot import InterbotixLocobotXS


def main():
    print("Initializing locobot...")
    # Initialize the Locobot
    locobot = InterbotixLocobotXS(
        robot_model="locobot_wx250s", arm_model="mobile_wx250s"
    )

    print("Locobot initialized...")
    # Create a socket
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Bind the socket to a port
    server_address = ("localhost", 12345)
    server_socket.bind(server_address)

    # Listen for incoming connections
    server_socket.listen(1)

    print("Waiting for a connection...")
    connection, client_address = server_socket.accept()

    try:
        print("Connection established with:", client_address)

        while True:
            # Receive data from the client
            data = connection.recv(1024)
            if data:
                # Decode and process the received data
                data = data.decode()
                print("Received data:", data)

                # Split the data into individual JSON messages
                messages = data.strip().split("\n")
                for msg in messages:
                    try:
                        extracted_data = json.loads(msg)
                        print("Extracted data:", extracted_data)
                        goal_x = extracted_data["x"]
                        goal_y = extracted_data["y"]
                        goal_z = extracted_data["z"]

                        locobot.arm.set_ee_pose_components(x=goal_x, y=goal_y, z=goal_z)
                        time.sleep(5)
                        locobot.arm.go_to_sleep_pose()
                    except json.JSONDecodeError as e:
                        print("Error decoding JSON:", e)

                # Clear the buffer
                data = ""

    finally:
        # Clean up the connection
        connection.close()
        server_socket.close()


if __name__ == "__main__":
    main()
