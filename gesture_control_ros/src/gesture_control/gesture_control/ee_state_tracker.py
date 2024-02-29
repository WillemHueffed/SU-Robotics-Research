import rclpy
from rclpy.node import Node
from gesture_interfaces.msg import Pose
import tkinter as tk
from tkinter import *
from tkinter import ttk

class EEStateTracker(Node):
    def __init__(self):
        super().__init__('ee_state_tracker')
        self.root = tk.Tk()
        self.root.title("EE State Tracker")

        self.frm = ttk.Frame(self.root, padding=10)
        self.frm.grid(row=0, column=0, padx=10, pady=10)

        # Label title
        ttk.Label(self.frm, text="EE State Tracker", font=("Arial", 16)).grid(column=0, row=0, columnspan=2)

        # Button to update value
        update_button = ttk.Button(self.frm, text="Update Value", command=self.update_value)
        update_button.grid(row=2, column=3, columnspan=2, pady=10)

        # Label to display value
        self.value_label_x = ttk.Label(self.frm, text='X: ', font=('Arial', 24))
        self.value_label_x.grid(row=1, column=0, columnspan=2, pady=10)

        self.value_label_y = ttk.Label(self.frm, text='Y: ', font=('Arial', 24))
        self.value_label_z = ttk.Label(self.frm, text='Z: ', font=('Arial', 24))

        self.value_label_y.grid(row=2, column=0, columnspan=2, pady=10)
        self.value_label_z.grid(row=3, column=0, columnspan=2, pady=10)

        # Set an initial value
        self.x = tk.DoubleVar()
        self.x.set(0.0)
        self.y = tk.DoubleVar()
        self.y.set(0.0)
        self.z = tk.DoubleVar()
        self.z.set(0.0)

        # Window while true loop
        self.root.mainloop()

        # Subscribe to pose command topic
        self.scriber = self.create_subscription(Pose, 'pose_command', self.listener_callback, 10)

    def update_value(self):
        self.value_label_x.config(text='X: {}'.format(self.x.get()))
        self.value_label_y.config(text='Y: {}'.format(self.y.get()))
        self.value_label_z.config(text='Z: {}'.format(self.z.get()))

    def listener_callback(self, msg):
        x = msg.x
        y = msg.y
        z = msg.z
        x_rotation = msg.x_rotation
        y_rotation = msg.y_rotation
        z_rotation = msg.z_rotation

    def run(self):
        # Placeholder for main loop
        self.get_logger().info("EE State Tracker running...")
        self.get_logger().warn("This is a placeholder main loop.")

def main(args=None):
    rclpy.init(args=args)
    ee_state_tracker_node = EEStateTracker()
    ee_state_tracker_node.run()
    rclpy.spin(ee_state_tracker_node)
    ee_state_tracker_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
