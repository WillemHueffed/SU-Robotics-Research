// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:msg/JointTemps.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TEMPS__STRUCT_H_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TEMPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"
// Member 'temps'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/JointTemps in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__msg__JointTemps
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__int32__Sequence temps;
} interbotix_xs_msgs__msg__JointTemps;

// Struct for a sequence of interbotix_xs_msgs__msg__JointTemps.
typedef struct interbotix_xs_msgs__msg__JointTemps__Sequence
{
  interbotix_xs_msgs__msg__JointTemps * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__msg__JointTemps__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TEMPS__STRUCT_H_
