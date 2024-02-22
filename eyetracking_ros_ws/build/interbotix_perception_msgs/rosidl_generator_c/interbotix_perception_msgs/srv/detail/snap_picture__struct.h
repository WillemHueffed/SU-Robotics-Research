// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_perception_msgs:srv/SnapPicture.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__STRUCT_H_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filename'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SnapPicture in the package interbotix_perception_msgs.
typedef struct interbotix_perception_msgs__srv__SnapPicture_Request
{
  rosidl_runtime_c__String filename;
} interbotix_perception_msgs__srv__SnapPicture_Request;

// Struct for a sequence of interbotix_perception_msgs__srv__SnapPicture_Request.
typedef struct interbotix_perception_msgs__srv__SnapPicture_Request__Sequence
{
  interbotix_perception_msgs__srv__SnapPicture_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_perception_msgs__srv__SnapPicture_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'filepath'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/SnapPicture in the package interbotix_perception_msgs.
typedef struct interbotix_perception_msgs__srv__SnapPicture_Response
{
  bool success;
  rosidl_runtime_c__String filepath;
} interbotix_perception_msgs__srv__SnapPicture_Response;

// Struct for a sequence of interbotix_perception_msgs__srv__SnapPicture_Response.
typedef struct interbotix_perception_msgs__srv__SnapPicture_Response__Sequence
{
  interbotix_perception_msgs__srv__SnapPicture_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_perception_msgs__srv__SnapPicture_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__STRUCT_H_
