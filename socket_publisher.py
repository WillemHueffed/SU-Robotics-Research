import socket
import time

def main():
    # Create a socket
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Connect to the server
    server_address = ('localhost', 12345)  # Change to the IP address and port number of the server
    client_socket.connect(server_address)

    try:
        while True:
            # Send data to the server
            data = "move_arm"  # Example data, replace with your actual data
            client_socket.sendall(data.encode())

            # Wait for a short duration
            time.sleep(5)  # Send data every 5 seconds, adjust as needed


    finally:
        # Close the connection
        client_socket.close()

if __name__ == '__main__':
    main()

