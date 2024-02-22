// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:msg/JointTrajectoryCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__STRUCT_H_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd_type'
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'traj'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

// Struct defined in msg/JointTrajectoryCommand in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__msg__JointTrajectoryCommand
{
  rosidl_runtime_c__String cmd_type;
  rosidl_runtime_c__String name;
  trajectory_msgs__msg__JointTrajectory traj;
} interbotix_xs_msgs__msg__JointTrajectoryCommand;

// Struct for a sequence of interbotix_xs_msgs__msg__JointTrajectoryCommand.
typedef struct interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence
{
  interbotix_xs_msgs__msg__JointTrajectoryCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__STRUCT_H_
