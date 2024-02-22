// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_moveit_interface_msgs:srv/MoveItPlan.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__STRUCT_H_
#define INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CMD_NONE'.
enum
{
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__CMD_NONE = 0
};

/// Constant 'CMD_PLAN_POSE'.
enum
{
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__CMD_PLAN_POSE = 1
};

/// Constant 'CMD_PLAN_POSITION'.
enum
{
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__CMD_PLAN_POSITION = 2
};

/// Constant 'CMD_PLAN_ORIENTATION'.
enum
{
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__CMD_PLAN_ORIENTATION = 3
};

/// Constant 'CMD_EXECUTE'.
enum
{
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__CMD_EXECUTE = 4
};

// Include directives for member types
// Member 'ee_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in srv/MoveItPlan in the package interbotix_moveit_interface_msgs.
typedef struct interbotix_moveit_interface_msgs__srv__MoveItPlan_Request
{
  int8_t cmd;
  geometry_msgs__msg__Pose ee_pose;
} interbotix_moveit_interface_msgs__srv__MoveItPlan_Request;

// Struct for a sequence of interbotix_moveit_interface_msgs__srv__MoveItPlan_Request.
typedef struct interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence
{
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'msg'
#include "std_msgs/msg/detail/string__struct.h"

// Struct defined in srv/MoveItPlan in the package interbotix_moveit_interface_msgs.
typedef struct interbotix_moveit_interface_msgs__srv__MoveItPlan_Response
{
  std_msgs__msg__String msg;
  bool success;
} interbotix_moveit_interface_msgs__srv__MoveItPlan_Response;

// Struct for a sequence of interbotix_moveit_interface_msgs__srv__MoveItPlan_Response.
typedef struct interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence
{
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__STRUCT_H_
