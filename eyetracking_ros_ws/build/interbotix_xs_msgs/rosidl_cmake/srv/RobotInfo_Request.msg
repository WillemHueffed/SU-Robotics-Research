# Get robot information
#
# Note that if a 'gripper' joint is specified, all information will be specified in terms of the 'left_finger' joint

string cmd_type                          # set to 'group' if requesting info about a joint group or 'single' if requesting info about a single joint
string name                              # the group name if requesting info about a group or the joint name if requesting info about a single joint
