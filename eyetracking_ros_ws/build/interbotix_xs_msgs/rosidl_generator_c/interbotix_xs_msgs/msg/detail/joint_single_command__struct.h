// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:msg/JointSingleCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__STRUCT_H_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/JointSingleCommand in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__msg__JointSingleCommand
{
  rosidl_runtime_c__String name;
  float cmd;
} interbotix_xs_msgs__msg__JointSingleCommand;

// Struct for a sequence of interbotix_xs_msgs__msg__JointSingleCommand.
typedef struct interbotix_xs_msgs__msg__JointSingleCommand__Sequence
{
  interbotix_xs_msgs__msg__JointSingleCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__msg__JointSingleCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__STRUCT_H_
