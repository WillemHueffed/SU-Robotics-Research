// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_perception_msgs:srv/FilterParams.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__STRUCT_H_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/FilterParams in the package interbotix_perception_msgs.
typedef struct interbotix_perception_msgs__srv__FilterParams_Request
{
  float x_filter_min;
  float x_filter_max;
  float y_filter_min;
  float y_filter_max;
  float z_filter_min;
  float z_filter_max;
  float voxel_leaf_size;
  int32_t plane_max_iter;
  float plane_dist_thresh;
  float ror_radius_search;
  int32_t ror_min_neighbors;
  float cluster_tol;
  int32_t cluster_min_size;
  int32_t cluster_max_size;
} interbotix_perception_msgs__srv__FilterParams_Request;

// Struct for a sequence of interbotix_perception_msgs__srv__FilterParams_Request.
typedef struct interbotix_perception_msgs__srv__FilterParams_Request__Sequence
{
  interbotix_perception_msgs__srv__FilterParams_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_perception_msgs__srv__FilterParams_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/FilterParams in the package interbotix_perception_msgs.
typedef struct interbotix_perception_msgs__srv__FilterParams_Response
{
  uint8_t structure_needs_at_least_one_member;
} interbotix_perception_msgs__srv__FilterParams_Response;

// Struct for a sequence of interbotix_perception_msgs__srv__FilterParams_Response.
typedef struct interbotix_perception_msgs__srv__FilterParams_Response__Sequence
{
  interbotix_perception_msgs__srv__FilterParams_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_perception_msgs__srv__FilterParams_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__STRUCT_H_
