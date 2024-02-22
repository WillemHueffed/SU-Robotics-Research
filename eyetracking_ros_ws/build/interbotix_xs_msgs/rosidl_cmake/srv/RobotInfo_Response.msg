
string mode                              # the operating mode for the specified joint group or joint
string profile_type                      # the profile type for the specified joint group or joint
string[] joint_names                     # the name of each joint in a group or just the specified joint
int16[] joint_ids                        # the Dynamixel ID for each joint in a group or for the specified joint
float32[] joint_lower_limits             # the lower limit [radians] for each joint in a group or for the specified joint (taken from URDF)
float32[] joint_upper_limits             # the upper limit [radians] for each joint in a group or for the specified joint (taken from URDF)
float32[] joint_velocity_limits          # the velocity limit [rad/s] for each joint in a group or for the specified joint (taken from URDF)
float32[] joint_sleep_positions          # the sleep position [rad] for each joint in a group or for the specified joint
int16[] joint_state_indices              # index for each joint in a group or for the specified joint in the published JointState message
int16 num_joints                         # the number of joints in a group or 1
string[] name                            # the name of the group or joint requested; if group was 'all', returns the names of all groups
