#https://developer.tobiipro.com/commonconcepts.html
import tobii_research as tr
import time
import json
import math
import io

#Figure out how to calculate eye fixations in realtime
gaze_data_stream = [] 

#Callback function for subscribe tobii subscribe method
def gaze_data_callback(gaze_data):
    gaze_data_stream.append(gaze_data)

#Cheeky chat-gpt realtime stats
class RunningStats:
    def __init__(self):
        self.n = 0  # Number of data points
        self.mean = 0.0
        self.M2 = 0.0  # Second moment (sum of squared differences from the mean)

    def update(self, x):
        # Incremental update of running statistics
        self.n += 1
        delta = x - self.mean
        self.mean += delta / self.n
        delta2 = x - self.mean
        self.M2 += delta * delta2

    def mean(self):
        return self.mean

    def variance(self):
        if self.n < 2:
            return 0.0
        return self.M2 / (self.n - 1)

    def standard_deviation(self):
        return math.sqrt(self.variance())

if __name__ == "__main__":
    #Sync to tobii eye tracker
    found_eyetrackers = tr.find_all_eyetrackers()
    eyetracker = found_eyetrackers[0]
    eyetracker.subscribe_to(tr.EYETRACKER_GAZE_DATA, gaze_data_callback, as_dictionary=True)
    
    #realtime stats
    x_loc_stats = RunningStats()
    y_loc_stats = RunningStats()
    
    #counter to track when to print - related to hz of tobii
    counter = 0
    
    while True:
        if gaze_data_stream:
            datum = gaze_data_stream.pop(0)
            #skip over bad data
            if not (datum["left_gaze_point_validity"] and datum["right_gaze_point_validity"]):
                continue
            #average left and right eye locations
            x_loc = (datum["left_gaze_point_on_display_area"][0] + datum["right_gaze_point_on_display_area"][0])/2
            y_loc = (datum["left_gaze_point_on_display_area"][1] + datum["right_gaze_point_on_display_area"][1])/2
            x_loc_stats.update(x_loc)
            y_loc_stats.update(y_loc)
            counter += 1
            if counter % 100 == 0:
                print(x_loc_stats.mean)
                x_loc_stats.n = 0
                x_loc_stats.mean = 0
                x_loc_stats.M2 = 0
                y_loc_stats.n = 0
                y_loc_stats.mean = 0
                y_loc_stats.M2 = 0
                # print("X: mean - {}, stdev - {}\n".format(1,2))
                # print("Y: mean - {}, stdev - {}\n\n".format(y_loc_stats.mean(), y_loc_stats.standard_deviation()))
                #print("X: mean - {}, stdev - {}\nY: mean - {}, stdev - {}\n\n".format(x_loc_stats.mean(), x_loc_stats.standard_deviation(), y_loc_stats.mean(), y_loc_stats.standard_deviation()))
        
    
    