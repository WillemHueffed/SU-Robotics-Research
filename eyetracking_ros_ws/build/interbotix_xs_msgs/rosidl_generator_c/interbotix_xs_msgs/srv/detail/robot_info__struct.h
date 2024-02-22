// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:srv/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__STRUCT_H_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__STRUCT_H_

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

// Struct defined in srv/RobotInfo in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__RobotInfo_Request
{
  rosidl_runtime_c__String cmd_type;
  rosidl_runtime_c__String name;
} interbotix_xs_msgs__srv__RobotInfo_Request;

// Struct for a sequence of interbotix_xs_msgs__srv__RobotInfo_Request.
typedef struct interbotix_xs_msgs__srv__RobotInfo_Request__Sequence
{
  interbotix_xs_msgs__srv__RobotInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__RobotInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'mode'
// Member 'profile_type'
// Member 'joint_names'
// Member 'name'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'joint_ids'
// Member 'joint_lower_limits'
// Member 'joint_upper_limits'
// Member 'joint_velocity_limits'
// Member 'joint_sleep_positions'
// Member 'joint_state_indices'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/RobotInfo in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__RobotInfo_Response
{
  rosidl_runtime_c__String mode;
  rosidl_runtime_c__String profile_type;
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__int16__Sequence joint_ids;
  rosidl_runtime_c__float__Sequence joint_lower_limits;
  rosidl_runtime_c__float__Sequence joint_upper_limits;
  rosidl_runtime_c__float__Sequence joint_velocity_limits;
  rosidl_runtime_c__float__Sequence joint_sleep_positions;
  rosidl_runtime_c__int16__Sequence joint_state_indices;
  int16_t num_joints;
  rosidl_runtime_c__String__Sequence name;
} interbotix_xs_msgs__srv__RobotInfo_Response;

// Struct for a sequence of interbotix_xs_msgs__srv__RobotInfo_Response.
typedef struct interbotix_xs_msgs__srv__RobotInfo_Response__Sequence
{
  interbotix_xs_msgs__srv__RobotInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__RobotInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__STRUCT_H_
