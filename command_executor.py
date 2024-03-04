import socket
import json
import time
from interbotix_xs_modules.xs_robot.locobot import InterbotixLocobotXS

def main():
    # Create a socket
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Bind the socket to a port
    server_address = ('localhost', 12345)  # Change to the desired IP address and port number
    server_socket.bind(server_address)

    # Listen for incoming connections
    server_socket.listen(1)

    print("Waiting for a connection...")
    connection, client_address = server_socket.accept()
    # Move the arm as desired

    # Initialize the Locobot
    locobot = InterbotixLocobotXS(
        robot_model='locobot_wx250s',
        arm_model='mobile_wx250s'
    )

    try:
        print("Connection established with:", client_address)

        while True:
            # Receive data from the client
            data = connection.recv(1024)
            if data:
                #decoded_data = data.decode()
                #print("decoded data: {}".format(decoded_data))
                # Interpret the received data and execute corresponding commands
                data = data.decode()
                print(data)
                extracted_data = json.loads(data)
                print(extracted_data)
                goal_x = extracted_data['x']
                y = extracted_data['y']
                goal_z = extracted_data['z']

                locobot.arm.set_ee_pose_components(x=goal_x, z=goal_z)
                locobot.arm.go_to_sleep_pose()
                time.sleep(5)

    finally:
        # Clean up the connection
        connection.close()
        server_socket.close()

if __name__ == '__main__':
    main()
