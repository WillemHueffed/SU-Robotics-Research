import socket

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

    try:
        print("Connection established with:", client_address)

        while True:
            # Receive data from the client
            data = connection.recv(1024)
            if data:
                print("Received:", data.decode())
                # Echo the received data back to the client
                connection.sendall(data)

    finally:
        # Clean up the connection
        connection.close()
        server_socket.close()

if __name__ == '__main__':
    main()

