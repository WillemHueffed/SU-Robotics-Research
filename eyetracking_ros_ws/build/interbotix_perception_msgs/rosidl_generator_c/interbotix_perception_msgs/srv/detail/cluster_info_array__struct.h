// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_perception_msgs:srv/ClusterInfoArray.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__STRUCT_H_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ClusterInfoArray in the package interbotix_perception_msgs.
typedef struct interbotix_perception_msgs__srv__ClusterInfoArray_Request
{
  uint8_t structure_needs_at_least_one_member;
} interbotix_perception_msgs__srv__ClusterInfoArray_Request;

// Struct for a sequence of interbotix_perception_msgs__srv__ClusterInfoArray_Request.
typedef struct interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence
{
  interbotix_perception_msgs__srv__ClusterInfoArray_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'clusters'
#include "interbotix_perception_msgs/msg/detail/cluster_info__struct.h"

// Struct defined in srv/ClusterInfoArray in the package interbotix_perception_msgs.
typedef struct interbotix_perception_msgs__srv__ClusterInfoArray_Response
{
  interbotix_perception_msgs__msg__ClusterInfo__Sequence clusters;
} interbotix_perception_msgs__srv__ClusterInfoArray_Response;

// Struct for a sequence of interbotix_perception_msgs__srv__ClusterInfoArray_Response.
typedef struct interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence
{
  interbotix_perception_msgs__srv__ClusterInfoArray_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__STRUCT_H_
