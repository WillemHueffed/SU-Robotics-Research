#Read in normalized eye gaze data ([0,1],[0,1]) into a grid, build a heatmap to find regions where eyes fixate the longest. Poor mans fixation calculation.

from math import floor
import random
import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import norm

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

if __name__ == "__main__":
    heatMap = HeatMap(NUM_ROWS, NUM_COLS)

    mean = 0.5
    std_dev = 0.1

    xData = norm.rvs(loc=mean, scale=std_dev, size=SAMPLE_SIZE)
    yData = norm.rvs(loc=mean, scale=std_dev, size=SAMPLE_SIZE)

    xData = np.clip(xData, 0, 1)
    yData = np.clip(yData, 0, 1)

    for i in range(len(xData)):
        heatMap.add(xData[i],yData[i])

    heatMap.printMap()
    