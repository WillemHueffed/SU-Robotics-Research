// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_xs_msgs:srv/RobotInfo.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/srv/detail/robot_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `cmd_type`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
interbotix_xs_msgs__srv__RobotInfo_Request__init(interbotix_xs_msgs__srv__RobotInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_type
  if (!rosidl_runtime_c__String__init(&msg->cmd_type)) {
    interbotix_xs_msgs__srv__RobotInfo_Request__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    interbotix_xs_msgs__srv__RobotInfo_Request__fini(msg);
    return false;
  }
  return true;
}

void
interbotix_xs_msgs__srv__RobotInfo_Request__fini(interbotix_xs_msgs__srv__RobotInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd_type
  rosidl_runtime_c__String__fini(&msg->cmd_type);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
interbotix_xs_msgs__srv__RobotInfo_Request__are_equal(const interbotix_xs_msgs__srv__RobotInfo_Request * lhs, const interbotix_xs_msgs__srv__RobotInfo_Request * rhs)
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
  return true;
}

bool
interbotix_xs_msgs__srv__RobotInfo_Request__copy(
  const interbotix_xs_msgs__srv__RobotInfo_Request * input,
  interbotix_xs_msgs__srv__RobotInfo_Request * output)
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
  return true;
}

interbotix_xs_msgs__srv__RobotInfo_Request *
interbotix_xs_msgs__srv__RobotInfo_Request__create()
{
  interbotix_xs_msgs__srv__RobotInfo_Request * msg = (interbotix_xs_msgs__srv__RobotInfo_Request *)malloc(sizeof(interbotix_xs_msgs__srv__RobotInfo_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__srv__RobotInfo_Request));
  bool success = interbotix_xs_msgs__srv__RobotInfo_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__srv__RobotInfo_Request__destroy(interbotix_xs_msgs__srv__RobotInfo_Request * msg)
{
  if (msg) {
    interbotix_xs_msgs__srv__RobotInfo_Request__fini(msg);
  }
  free(msg);
}


bool
interbotix_xs_msgs__srv__RobotInfo_Request__Sequence__init(interbotix_xs_msgs__srv__RobotInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interbotix_xs_msgs__srv__RobotInfo_Request * data = NULL;
  if (size) {
    data = (interbotix_xs_msgs__srv__RobotInfo_Request *)calloc(size, sizeof(interbotix_xs_msgs__srv__RobotInfo_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__srv__RobotInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__srv__RobotInfo_Request__fini(&data[i - 1]);
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
interbotix_xs_msgs__srv__RobotInfo_Request__Sequence__fini(interbotix_xs_msgs__srv__RobotInfo_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interbotix_xs_msgs__srv__RobotInfo_Request__fini(&array->data[i]);
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

interbotix_xs_msgs__srv__RobotInfo_Request__Sequence *
interbotix_xs_msgs__srv__RobotInfo_Request__Sequence__create(size_t size)
{
  interbotix_xs_msgs__srv__RobotInfo_Request__Sequence * array = (interbotix_xs_msgs__srv__RobotInfo_Request__Sequence *)malloc(sizeof(interbotix_xs_msgs__srv__RobotInfo_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__srv__RobotInfo_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__srv__RobotInfo_Request__Sequence__destroy(interbotix_xs_msgs__srv__RobotInfo_Request__Sequence * array)
{
  if (array) {
    interbotix_xs_msgs__srv__RobotInfo_Request__Sequence__fini(array);
  }
  free(array);
}

bool
interbotix_xs_msgs__srv__RobotInfo_Request__Sequence__are_equal(const interbotix_xs_msgs__srv__RobotInfo_Request__Sequence * lhs, const interbotix_xs_msgs__srv__RobotInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__srv__RobotInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__srv__RobotInfo_Request__Sequence__copy(
  const interbotix_xs_msgs__srv__RobotInfo_Request__Sequence * input,
  interbotix_xs_msgs__srv__RobotInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__srv__RobotInfo_Request);
    interbotix_xs_msgs__srv__RobotInfo_Request * data =
      (interbotix_xs_msgs__srv__RobotInfo_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__srv__RobotInfo_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__srv__RobotInfo_Request__fini(&data[i]);
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
    if (!interbotix_xs_msgs__srv__RobotInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `mode`
// Member `profile_type`
// Member `joint_names`
// Member `name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `joint_ids`
// Member `joint_lower_limits`
// Member `joint_upper_limits`
// Member `joint_velocity_limits`
// Member `joint_sleep_positions`
// Member `joint_state_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interbotix_xs_msgs__srv__RobotInfo_Response__init(interbotix_xs_msgs__srv__RobotInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    interbotix_xs_msgs__srv__RobotInfo_Response__fini(msg);
    return false;
  }
  // profile_type
  if (!rosidl_runtime_c__String__init(&msg->profile_type)) {
    interbotix_xs_msgs__srv__RobotInfo_Response__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    interbotix_xs_msgs__srv__RobotInfo_Response__fini(msg);
    return false;
  }
  // joint_ids
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->joint_ids, 0)) {
    interbotix_xs_msgs__srv__RobotInfo_Response__fini(msg);
    return false;
  }
  // joint_lower_limits
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_lower_limits, 0)) {
    interbotix_xs_msgs__srv__RobotInfo_Response__fini(msg);
    return false;
  }
  // joint_upper_limits
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_upper_limits, 0)) {
    interbotix_xs_msgs__srv__RobotInfo_Response__fini(msg);
    return false;
  }
  // joint_velocity_limits
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_velocity_limits, 0)) {
    interbotix_xs_msgs__srv__RobotInfo_Response__fini(msg);
    return false;
  }
  // joint_sleep_positions
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_sleep_positions, 0)) {
    interbotix_xs_msgs__srv__RobotInfo_Response__fini(msg);
    return false;
  }
  // joint_state_indices
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->joint_state_indices, 0)) {
    interbotix_xs_msgs__srv__RobotInfo_Response__fini(msg);
    return false;
  }
  // num_joints
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    interbotix_xs_msgs__srv__RobotInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
interbotix_xs_msgs__srv__RobotInfo_Response__fini(interbotix_xs_msgs__srv__RobotInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // profile_type
  rosidl_runtime_c__String__fini(&msg->profile_type);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // joint_ids
  rosidl_runtime_c__int16__Sequence__fini(&msg->joint_ids);
  // joint_lower_limits
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_lower_limits);
  // joint_upper_limits
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_upper_limits);
  // joint_velocity_limits
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_velocity_limits);
  // joint_sleep_positions
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_sleep_positions);
  // joint_state_indices
  rosidl_runtime_c__int16__Sequence__fini(&msg->joint_state_indices);
  // num_joints
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
}

bool
interbotix_xs_msgs__srv__RobotInfo_Response__are_equal(const interbotix_xs_msgs__srv__RobotInfo_Response * lhs, const interbotix_xs_msgs__srv__RobotInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // profile_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->profile_type), &(rhs->profile_type)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_names), &(rhs->joint_names)))
  {
    return false;
  }
  // joint_ids
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->joint_ids), &(rhs->joint_ids)))
  {
    return false;
  }
  // joint_lower_limits
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_lower_limits), &(rhs->joint_lower_limits)))
  {
    return false;
  }
  // joint_upper_limits
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_upper_limits), &(rhs->joint_upper_limits)))
  {
    return false;
  }
  // joint_velocity_limits
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_velocity_limits), &(rhs->joint_velocity_limits)))
  {
    return false;
  }
  // joint_sleep_positions
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_sleep_positions), &(rhs->joint_sleep_positions)))
  {
    return false;
  }
  // joint_state_indices
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->joint_state_indices), &(rhs->joint_state_indices)))
  {
    return false;
  }
  // num_joints
  if (lhs->num_joints != rhs->num_joints) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__srv__RobotInfo_Response__copy(
  const interbotix_xs_msgs__srv__RobotInfo_Response * input,
  interbotix_xs_msgs__srv__RobotInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // profile_type
  if (!rosidl_runtime_c__String__copy(
      &(input->profile_type), &(output->profile_type)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_names), &(output->joint_names)))
  {
    return false;
  }
  // joint_ids
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->joint_ids), &(output->joint_ids)))
  {
    return false;
  }
  // joint_lower_limits
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_lower_limits), &(output->joint_lower_limits)))
  {
    return false;
  }
  // joint_upper_limits
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_upper_limits), &(output->joint_upper_limits)))
  {
    return false;
  }
  // joint_velocity_limits
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_velocity_limits), &(output->joint_velocity_limits)))
  {
    return false;
  }
  // joint_sleep_positions
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_sleep_positions), &(output->joint_sleep_positions)))
  {
    return false;
  }
  // joint_state_indices
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->joint_state_indices), &(output->joint_state_indices)))
  {
    return false;
  }
  // num_joints
  output->num_joints = input->num_joints;
  // name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

interbotix_xs_msgs__srv__RobotInfo_Response *
interbotix_xs_msgs__srv__RobotInfo_Response__create()
{
  interbotix_xs_msgs__srv__RobotInfo_Response * msg = (interbotix_xs_msgs__srv__RobotInfo_Response *)malloc(sizeof(interbotix_xs_msgs__srv__RobotInfo_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__srv__RobotInfo_Response));
  bool success = interbotix_xs_msgs__srv__RobotInfo_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__srv__RobotInfo_Response__destroy(interbotix_xs_msgs__srv__RobotInfo_Response * msg)
{
  if (msg) {
    interbotix_xs_msgs__srv__RobotInfo_Response__fini(msg);
  }
  free(msg);
}


bool
interbotix_xs_msgs__srv__RobotInfo_Response__Sequence__init(interbotix_xs_msgs__srv__RobotInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interbotix_xs_msgs__srv__RobotInfo_Response * data = NULL;
  if (size) {
    data = (interbotix_xs_msgs__srv__RobotInfo_Response *)calloc(size, sizeof(interbotix_xs_msgs__srv__RobotInfo_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__srv__RobotInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__srv__RobotInfo_Response__fini(&data[i - 1]);
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
interbotix_xs_msgs__srv__RobotInfo_Response__Sequence__fini(interbotix_xs_msgs__srv__RobotInfo_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interbotix_xs_msgs__srv__RobotInfo_Response__fini(&array->data[i]);
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

interbotix_xs_msgs__srv__RobotInfo_Response__Sequence *
interbotix_xs_msgs__srv__RobotInfo_Response__Sequence__create(size_t size)
{
  interbotix_xs_msgs__srv__RobotInfo_Response__Sequence * array = (interbotix_xs_msgs__srv__RobotInfo_Response__Sequence *)malloc(sizeof(interbotix_xs_msgs__srv__RobotInfo_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__srv__RobotInfo_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__srv__RobotInfo_Response__Sequence__destroy(interbotix_xs_msgs__srv__RobotInfo_Response__Sequence * array)
{
  if (array) {
    interbotix_xs_msgs__srv__RobotInfo_Response__Sequence__fini(array);
  }
  free(array);
}

bool
interbotix_xs_msgs__srv__RobotInfo_Response__Sequence__are_equal(const interbotix_xs_msgs__srv__RobotInfo_Response__Sequence * lhs, const interbotix_xs_msgs__srv__RobotInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__srv__RobotInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__srv__RobotInfo_Response__Sequence__copy(
  const interbotix_xs_msgs__srv__RobotInfo_Response__Sequence * input,
  interbotix_xs_msgs__srv__RobotInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__srv__RobotInfo_Response);
    interbotix_xs_msgs__srv__RobotInfo_Response * data =
      (interbotix_xs_msgs__srv__RobotInfo_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__srv__RobotInfo_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__srv__RobotInfo_Response__fini(&data[i]);
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
    if (!interbotix_xs_msgs__srv__RobotInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
