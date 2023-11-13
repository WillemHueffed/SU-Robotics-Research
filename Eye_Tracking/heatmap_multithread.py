#Read in normalized eye gaze data ([0,1],[0,1]) into a grid, build a heatmap to find regions where eyes fixate the longest. Poor mans fixation calculation.
#TODO: change distrubtion from normal to something that better simulates fixation patterns (maybe not worth the effort)

from math import floor
import random
import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import norm
import time
import threading
import multiprocessing

NUM_ROWS = 100 #num of rows
NUM_COLS = 100 #num of columns
SAMPLE_SIZE = 100000

class HeatMap():
    def __init__(self, rowDivs, colDivs):
        self.map = {}
        self.rowStep = 1/rowDivs
        self.colStep = 1/colDivs
        for i in range(0, rowDivs+1):
            self.map[i] = {}
            for j in range(0, colDivs+1):
                self.map[i][j] = 0

    def add(self, x, y):
        xKey = floor(x/self.rowStep)
        yKey = floor(y/self.rowStep)
        self.map[xKey][yKey] += 1
    
    def printGrid(self):
        for i in self.map.keys():
            for j in self.map[i].keys():
                print (self.map[i][j], end = " ")
            print()
    
    def printMap(self):
        # Extract row and column labels
        row_labels = list(self.map.keys())
        col_labels = list(self.map[row_labels[0]].keys())

        # Create an empty 2D array to represent the heatmap
        heatmap_array = np.zeros((len(row_labels), len(col_labels)))

        # Fill the array with data from the hashmap
        for i, row_label in enumerate(row_labels):
            for j, col_label in enumerate(col_labels):
                heatmap_array[i, j] = self.map[row_label][col_label]

        # Create a heatmap using plt.imshow
        plt.imshow(heatmap_array, cmap='viridis', interpolation='nearest', origin='lower')

        plt.colorbar()

        # Show the plot
        plt.show()

def data_generator(shared_buffer, buffer_lock):
    while True:
        with buffer_lock:
            # Generate normally distributed data for x and y
            mean = 0.5
            std_dev = 0.2
            num_tuples = len(shared_buffer) // 2
            data = np.random.normal(loc=mean, scale=std_dev, size=(num_tuples, 2))

            # Ensure that values are within [0, 1]
            data = np.clip(data, 0, 1)

            # Convert the data to the appropriate type (double precision)
            flat_data = data.flatten()

            # Write the data to the shared buffer
            shared_buffer[:] = flat_data
        time.sleep(10)  # Simulate a pause between data generations

def findMax(heatMap):
    max = -1
    for i in range(len(heatMap.map)):
        for j in range(len(heatMap.map[i])):
            if heatMap.map[i][j] > max:
                max = heatMap.map[i][j]
    return max

def data_reader(shared_buffer, buffer_lock):
    while True:
        heatMap = HeatMap(100,100)
        with buffer_lock:
            data = list(shared_buffer)
            tuples_data = [(data[i], data[i + 1]) for i in range(0, len(data), 2)]
            for i,j in tuples_data:
                heatMap.add(i, j)
        # heatMap.printMap()
        print("Max = ", findMax(heatMap))

if __name__ == "__main__":
    buffer_size = 100000

    # Create a shared buffer (array) to store the data
    shared_buffer = multiprocessing.Array('d', buffer_size)

    # Create a lock for synchronizing access to the shared buffer
    buffer_lock = multiprocessing.Lock()

    # Create a process for generating data
    generator_process = multiprocessing.Process(target=data_generator, args=(shared_buffer, buffer_lock))

    # Create a thread for reading data
    reader_thread = threading.Thread(target=data_reader, args=(shared_buffer, buffer_lock))

    # Start the process and the thread
    generator_process.start()
    reader_thread.start()

    # Wait for the process and the thread to finish (this example runs indefinitely)
    generator_process.join()
    reader_thread.join()
    