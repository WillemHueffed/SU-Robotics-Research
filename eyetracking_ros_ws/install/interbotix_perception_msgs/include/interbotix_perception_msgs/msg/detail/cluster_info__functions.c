// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_perception_msgs:msg/ClusterInfo.idl
// generated code does not contain a copyright notice
#include "interbotix_perception_msgs/msg/detail/cluster_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `min_z_point`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `color`
#include "std_msgs/msg/detail/color_rgba__functions.h"

bool
interbotix_perception_msgs__msg__ClusterInfo__init(interbotix_perception_msgs__msg__ClusterInfo * msg)
{
  if (!msg) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    interbotix_perception_msgs__msg__ClusterInfo__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    interbotix_perception_msgs__msg__ClusterInfo__fini(msg);
    return false;
  }
  // yaw
  // color
  if (!std_msgs__msg__ColorRGBA__init(&msg->color)) {
    interbotix_perception_msgs__msg__ClusterInfo__fini(msg);
    return false;
  }
  // min_z_point
  if (!geometry_msgs__msg__Point__init(&msg->min_z_point)) {
    interbotix_perception_msgs__msg__ClusterInfo__fini(msg);
    return false;
  }
  // num_points
  return true;
}

void
interbotix_perception_msgs__msg__ClusterInfo__fini(interbotix_perception_msgs__msg__ClusterInfo * msg)
{
  if (!msg) {
    return;
  }
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // yaw
  // color
  std_msgs__msg__ColorRGBA__fini(&msg->color);
  // min_z_point
  geometry_msgs__msg__Point__fini(&msg->min_z_point);
  // num_points
}

bool
interbotix_perception_msgs__msg__ClusterInfo__are_equal(const interbotix_perception_msgs__msg__ClusterInfo * lhs, const interbotix_perception_msgs__msg__ClusterInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // min_z_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->min_z_point), &(rhs->min_z_point)))
  {
    return false;
  }
  // num_points
  if (lhs->num_points != rhs->num_points) {
    return false;
  }
  return true;
}

bool
interbotix_perception_msgs__msg__ClusterInfo__copy(
  const interbotix_perception_msgs__msg__ClusterInfo * input,
  interbotix_perception_msgs__msg__ClusterInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // color
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // min_z_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->min_z_point), &(output->min_z_point)))
  {
    return false;
  }
  // num_points
  output->num_points = input->num_points;
  return true;
}

interbotix_perception_msgs__msg__ClusterInfo *
interbotix_perception_msgs__msg__ClusterInfo__create()
{
  interbotix_perception_msgs__msg__ClusterInfo * msg = (interbotix_perception_msgs__msg__ClusterInfo *)malloc(sizeof(interbotix_perception_msgs__msg__ClusterInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_perception_msgs__msg__ClusterInfo));
  bool success = interbotix_perception_msgs__msg__ClusterInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interbotix_perception_msgs__msg__ClusterInfo__destroy(interbotix_perception_msgs__msg__ClusterInfo * msg)
{
  if (msg) {
    interbotix_perception_msgs__msg__ClusterInfo__fini(msg);
  }
  free(msg);
}


bool
interbotix_perception_msgs__msg__ClusterInfo__Sequence__init(interbotix_perception_msgs__msg__ClusterInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interbotix_perception_msgs__msg__ClusterInfo * data = NULL;
  if (size) {
    data = (interbotix_perception_msgs__msg__ClusterInfo *)calloc(size, sizeof(interbotix_perception_msgs__msg__ClusterInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_perception_msgs__msg__ClusterInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_perception_msgs__msg__ClusterInfo__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interbotix_perception_msgs__msg__ClusterInfo__Sequence__fini(interbotix_perception_msgs__msg__ClusterInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interbotix_perception_msgs__msg__ClusterInfo__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interbotix_perception_msgs__msg__ClusterInfo__Sequence *
interbotix_perception_msgs__msg__ClusterInfo__Sequence__create(size_t size)
{
  interbotix_perception_msgs__msg__ClusterInfo__Sequence * array = (interbotix_perception_msgs__msg__ClusterInfo__Sequence *)malloc(sizeof(interbotix_perception_msgs__msg__ClusterInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interbotix_perception_msgs__msg__ClusterInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interbotix_perception_msgs__msg__ClusterInfo__Sequence__destroy(interbotix_perception_msgs__msg__ClusterInfo__Sequence * array)
{
  if (array) {
    interbotix_perception_msgs__msg__ClusterInfo__Sequence__fini(array);
  }
  free(array);
}

bool
interbotix_perception_msgs__msg__ClusterInfo__Sequence__are_equal(const interbotix_perception_msgs__msg__ClusterInfo__Sequence * lhs, const interbotix_perception_msgs__msg__ClusterInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_perception_msgs__msg__ClusterInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_perception_msgs__msg__ClusterInfo__Sequence__copy(
  const interbotix_perception_msgs__msg__ClusterInfo__Sequence * input,
  interbotix_perception_msgs__msg__ClusterInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_perception_msgs__msg__ClusterInfo);
    interbotix_perception_msgs__msg__ClusterInfo * data =
      (interbotix_perception_msgs__msg__ClusterInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_perception_msgs__msg__ClusterInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interbotix_perception_msgs__msg__ClusterInfo__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_perception_msgs__msg__ClusterInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
