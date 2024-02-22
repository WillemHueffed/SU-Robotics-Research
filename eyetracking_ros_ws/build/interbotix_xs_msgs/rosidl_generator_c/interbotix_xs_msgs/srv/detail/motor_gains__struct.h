// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:srv/MotorGains.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__STRUCT_H_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__STRUCT_H_

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

// Struct defined in srv/MotorGains in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__MotorGains_Request
{
  rosidl_runtime_c__String cmd_type;
  rosidl_runtime_c__String name;
  int32_t kp_pos;
  int32_t ki_pos;
  int32_t kd_pos;
  int32_t k1;
  int32_t k2;
  int32_t kp_vel;
  int32_t ki_vel;
} interbotix_xs_msgs__srv__MotorGains_Request;

// Struct for a sequence of interbotix_xs_msgs__srv__MotorGains_Request.
typedef struct interbotix_xs_msgs__srv__MotorGains_Request__Sequence
{
  interbotix_xs_msgs__srv__MotorGains_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__MotorGains_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MotorGains in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__MotorGains_Response
{
  uint8_t structure_needs_at_least_one_member;
} interbotix_xs_msgs__srv__MotorGains_Response;

// Struct for a sequence of interbotix_xs_msgs__srv__MotorGains_Response.
typedef struct interbotix_xs_msgs__srv__MotorGains_Response__Sequence
{
  interbotix_xs_msgs__srv__MotorGains_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__MotorGains_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__STRUCT_H_
