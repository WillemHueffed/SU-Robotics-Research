#https://developer.tobiipro.com/commonconcepts.html
import tobii_research as tr
import time
import json

#TODO: 1. __name__==__main__ 2. Add filtering to replace NaN with null
#3. figure out way to r/w to a common buffer
#4. write script to determine fixation locations
#5. After above is completed, write master script to create threads for each -> they should run in ||

found_eyetrackers = tr.find_all_eyetrackers()

my_eyetracker = found_eyetrackers[0]
print("Address: " + my_eyetracker.address)
print("Model: " + my_eyetracker.model)
print("Name (It's OK if this is empty): " + my_eyetracker.device_name)
print("Serial number: " + my_eyetracker.serial_number)

gazeDataEntries=[] #global scope so calling function can call it back

def gaze_data_callback(gaze_data):
    gazeDataEntries.append(gaze_data)

my_eyetracker.subscribe_to(tr.EYETRACKER_GAZE_DATA, gaze_data_callback, as_dictionary=True)
time.sleep(1)
my_eyetracker.unsubscribe_from(tr.EYETRACKER_GAZE_DATA, gaze_data_callback)


with open("gaze_data.json", "w") as output:
    output.write("[\n")
    for i in range(0, len(gazeDataEntries)-1):
        output.write("\t" + json.dumps(gazeDataEntries[i]) + ",\n")
    output.write("\t" + json.dumps(gazeDataEntries[i]) + "\n")
    output.write("]\n")
