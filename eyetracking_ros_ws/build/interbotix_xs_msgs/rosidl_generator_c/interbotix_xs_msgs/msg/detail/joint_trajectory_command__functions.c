// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_xs_msgs:msg/JointTrajectoryCommand.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/msg/detail/joint_trajectory_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `cmd_type`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `traj`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"

bool
interbotix_xs_msgs__msg__JointTrajectoryCommand__init(interbotix_xs_msgs__msg__JointTrajectoryCommand * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_type
  if (!rosidl_runtime_c__String__init(&msg->cmd_type)) {
    interbotix_xs_msgs__msg__JointTrajectoryCommand__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    interbotix_xs_msgs__msg__JointTrajectoryCommand__fini(msg);
    return false;
  }
  // traj
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->traj)) {
    interbotix_xs_msgs__msg__JointTrajectoryCommand__fini(msg);
    return false;
  }
  return true;
}

void
interbotix_xs_msgs__msg__JointTrajectoryCommand__fini(interbotix_xs_msgs__msg__JointTrajectoryCommand * msg)
{
  if (!msg) {
    return;
  }
  // cmd_type
  rosidl_runtime_c__String__fini(&msg->cmd_type);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // traj
  trajectory_msgs__msg__JointTrajectory__fini(&msg->traj);
}

bool
interbotix_xs_msgs__msg__JointTrajectoryCommand__are_equal(const interbotix_xs_msgs__msg__JointTrajectoryCommand * lhs, const interbotix_xs_msgs__msg__JointTrajectoryCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cmd_type), &(rhs->cmd_type)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // traj
  if (!trajectory_msgs__msg__JointTrajectory__are_equal(
      &(lhs->traj), &(rhs->traj)))
  {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__msg__JointTrajectoryCommand__copy(
  const interbotix_xs_msgs__msg__JointTrajectoryCommand * input,
  interbotix_xs_msgs__msg__JointTrajectoryCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd_type
  if (!rosidl_runtime_c__String__copy(
      &(input->cmd_type), &(output->cmd_type)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // traj
  if (!trajectory_msgs__msg__JointTrajectory__copy(
      &(input->traj), &(output->traj)))
  {
    return false;
  }
  return true;
}

interbotix_xs_msgs__msg__JointTrajectoryCommand *
interbotix_xs_msgs__msg__JointTrajectoryCommand__create()
{
  interbotix_xs_msgs__msg__JointTrajectoryCommand * msg = (interbotix_xs_msgs__msg__JointTrajectoryCommand *)malloc(sizeof(interbotix_xs_msgs__msg__JointTrajectoryCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__msg__JointTrajectoryCommand));
  bool success = interbotix_xs_msgs__msg__JointTrajectoryCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__msg__JointTrajectoryCommand__destroy(interbotix_xs_msgs__msg__JointTrajectoryCommand * msg)
{
  if (msg) {
    interbotix_xs_msgs__msg__JointTrajectoryCommand__fini(msg);
  }
  free(msg);
}


bool
interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence__init(interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interbotix_xs_msgs__msg__JointTrajectoryCommand * data = NULL;
  if (size) {
    data = (interbotix_xs_msgs__msg__JointTrajectoryCommand *)calloc(size, sizeof(interbotix_xs_msgs__msg__JointTrajectoryCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__msg__JointTrajectoryCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__msg__JointTrajectoryCommand__fini(&data[i - 1]);
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
interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence__fini(interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interbotix_xs_msgs__msg__JointTrajectoryCommand__fini(&array->data[i]);
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

interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence *
interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence__create(size_t size)
{
  interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence * array = (interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence *)malloc(sizeof(interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence__destroy(interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence * array)
{
  if (array) {
    interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence__fini(array);
  }
  free(array);
}

bool
interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence__are_equal(const interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence * lhs, const interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__msg__JointTrajectoryCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence__copy(
  const interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence * input,
  interbotix_xs_msgs__msg__JointTrajectoryCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__msg__JointTrajectoryCommand);
    interbotix_xs_msgs__msg__JointTrajectoryCommand * data =
      (interbotix_xs_msgs__msg__JointTrajectoryCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__msg__JointTrajectoryCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__msg__JointTrajectoryCommand__fini(&data[i]);
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
    if (!interbotix_xs_msgs__msg__JointTrajectoryCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
