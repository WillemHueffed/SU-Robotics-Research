// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_perception_msgs:msg/ClusterInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__STRUCT_H_
#define INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'min_z_point'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.h"

// Struct defined in msg/ClusterInfo in the package interbotix_perception_msgs.
typedef struct interbotix_perception_msgs__msg__ClusterInfo
{
  rosidl_runtime_c__String frame_id;
  geometry_msgs__msg__Point position;
  float yaw;
  std_msgs__msg__ColorRGBA color;
  geometry_msgs__msg__Point min_z_point;
  int32_t num_points;
} interbotix_perception_msgs__msg__ClusterInfo;

// Struct for a sequence of interbotix_perception_msgs__msg__ClusterInfo.
typedef struct interbotix_perception_msgs__msg__ClusterInfo__Sequence
{
  interbotix_perception_msgs__msg__ClusterInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_perception_msgs__msg__ClusterInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__STRUCT_H_
