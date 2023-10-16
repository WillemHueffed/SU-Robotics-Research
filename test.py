import tobii_research as tr

found_eyetrackers = tr.find_all_eyetrackers()

eyetracker = found_eyetrackers[0]
print(eyetracker.get_all_eye_tracking_modes())