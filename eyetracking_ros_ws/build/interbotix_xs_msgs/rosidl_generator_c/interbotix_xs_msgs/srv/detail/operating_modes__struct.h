// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:srv/OperatingModes.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__STRUCT_H_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__STRUCT_H_

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
// Member 'mode'
// Member 'profile_type'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/OperatingModes in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__OperatingModes_Request
{
  rosidl_runtime_c__String cmd_type;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String mode;
  rosidl_runtime_c__String profile_type;
  int32_t profile_velocity;
  int32_t profile_acceleration;
} interbotix_xs_msgs__srv__OperatingModes_Request;

// Struct for a sequence of interbotix_xs_msgs__srv__OperatingModes_Request.
typedef struct interbotix_xs_msgs__srv__OperatingModes_Request__Sequence
{
  interbotix_xs_msgs__srv__OperatingModes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__OperatingModes_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/OperatingModes in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__OperatingModes_Response
{
  uint8_t structure_needs_at_least_one_member;
} interbotix_xs_msgs__srv__OperatingModes_Response;

// Struct for a sequence of interbotix_xs_msgs__srv__OperatingModes_Response.
typedef struct interbotix_xs_msgs__srv__OperatingModes_Response__Sequence
{
  interbotix_xs_msgs__srv__OperatingModes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__OperatingModes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__STRUCT_H_
