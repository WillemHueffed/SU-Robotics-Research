// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_xs_msgs:srv/MotorGains.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `cmd_type`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
interbotix_xs_msgs__srv__MotorGains_Request__init(interbotix_xs_msgs__srv__MotorGains_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_type
  if (!rosidl_runtime_c__String__init(&msg->cmd_type)) {
    interbotix_xs_msgs__srv__MotorGains_Request__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    interbotix_xs_msgs__srv__MotorGains_Request__fini(msg);
    return false;
  }
  // kp_pos
  // ki_pos
  // kd_pos
  // k1
  // k2
  // kp_vel
  // ki_vel
  return true;
}

void
interbotix_xs_msgs__srv__MotorGains_Request__fini(interbotix_xs_msgs__srv__MotorGains_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd_type
  rosidl_runtime_c__String__fini(&msg->cmd_type);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // kp_pos
  // ki_pos
  // kd_pos
  // k1
  // k2
  // kp_vel
  // ki_vel
}

bool
interbotix_xs_msgs__srv__MotorGains_Request__are_equal(const interbotix_xs_msgs__srv__MotorGains_Request * lhs, const interbotix_xs_msgs__srv__MotorGains_Request * rhs)
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
  // kp_pos
  if (lhs->kp_pos != rhs->kp_pos) {
    return false;
  }
  // ki_pos
  if (lhs->ki_pos != rhs->ki_pos) {
    return false;
  }
  // kd_pos
  if (lhs->kd_pos != rhs->kd_pos) {
    return false;
  }
  // k1
  if (lhs->k1 != rhs->k1) {
    return false;
  }
  // k2
  if (lhs->k2 != rhs->k2) {
    return false;
  }
  // kp_vel
  if (lhs->kp_vel != rhs->kp_vel) {
    return false;
  }
  // ki_vel
  if (lhs->ki_vel != rhs->ki_vel) {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__srv__MotorGains_Request__copy(
  const interbotix_xs_msgs__srv__MotorGains_Request * input,
  interbotix_xs_msgs__srv__MotorGains_Request * output)
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
  // kp_pos
  output->kp_pos = input->kp_pos;
  // ki_pos
  output->ki_pos = input->ki_pos;
  // kd_pos
  output->kd_pos = input->kd_pos;
  // k1
  output->k1 = input->k1;
  // k2
  output->k2 = input->k2;
  // kp_vel
  output->kp_vel = input->kp_vel;
  // ki_vel
  output->ki_vel = input->ki_vel;
  return true;
}

interbotix_xs_msgs__srv__MotorGains_Request *
interbotix_xs_msgs__srv__MotorGains_Request__create()
{
  interbotix_xs_msgs__srv__MotorGains_Request * msg = (interbotix_xs_msgs__srv__MotorGains_Request *)malloc(sizeof(interbotix_xs_msgs__srv__MotorGains_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__srv__MotorGains_Request));
  bool success = interbotix_xs_msgs__srv__MotorGains_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__srv__MotorGains_Request__destroy(interbotix_xs_msgs__srv__MotorGains_Request * msg)
{
  if (msg) {
    interbotix_xs_msgs__srv__MotorGains_Request__fini(msg);
  }
  free(msg);
}


bool
interbotix_xs_msgs__srv__MotorGains_Request__Sequence__init(interbotix_xs_msgs__srv__MotorGains_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interbotix_xs_msgs__srv__MotorGains_Request * data = NULL;
  if (size) {
    data = (interbotix_xs_msgs__srv__MotorGains_Request *)calloc(size, sizeof(interbotix_xs_msgs__srv__MotorGains_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__srv__MotorGains_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__srv__MotorGains_Request__fini(&data[i - 1]);
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
interbotix_xs_msgs__srv__MotorGains_Request__Sequence__fini(interbotix_xs_msgs__srv__MotorGains_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interbotix_xs_msgs__srv__MotorGains_Request__fini(&array->data[i]);
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

interbotix_xs_msgs__srv__MotorGains_Request__Sequence *
interbotix_xs_msgs__srv__MotorGains_Request__Sequence__create(size_t size)
{
  interbotix_xs_msgs__srv__MotorGains_Request__Sequence * array = (interbotix_xs_msgs__srv__MotorGains_Request__Sequence *)malloc(sizeof(interbotix_xs_msgs__srv__MotorGains_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__srv__MotorGains_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__srv__MotorGains_Request__Sequence__destroy(interbotix_xs_msgs__srv__MotorGains_Request__Sequence * array)
{
  if (array) {
    interbotix_xs_msgs__srv__MotorGains_Request__Sequence__fini(array);
  }
  free(array);
}

bool
interbotix_xs_msgs__srv__MotorGains_Request__Sequence__are_equal(const interbotix_xs_msgs__srv__MotorGains_Request__Sequence * lhs, const interbotix_xs_msgs__srv__MotorGains_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__srv__MotorGains_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__srv__MotorGains_Request__Sequence__copy(
  const interbotix_xs_msgs__srv__MotorGains_Request__Sequence * input,
  interbotix_xs_msgs__srv__MotorGains_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__srv__MotorGains_Request);
    interbotix_xs_msgs__srv__MotorGains_Request * data =
      (interbotix_xs_msgs__srv__MotorGains_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__srv__MotorGains_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__srv__MotorGains_Request__fini(&data[i]);
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
    if (!interbotix_xs_msgs__srv__MotorGains_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
interbotix_xs_msgs__srv__MotorGains_Response__init(interbotix_xs_msgs__srv__MotorGains_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
interbotix_xs_msgs__srv__MotorGains_Response__fini(interbotix_xs_msgs__srv__MotorGains_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
interbotix_xs_msgs__srv__MotorGains_Response__are_equal(const interbotix_xs_msgs__srv__MotorGains_Response * lhs, const interbotix_xs_msgs__srv__MotorGains_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__srv__MotorGains_Response__copy(
  const interbotix_xs_msgs__srv__MotorGains_Response * input,
  interbotix_xs_msgs__srv__MotorGains_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

interbotix_xs_msgs__srv__MotorGains_Response *
interbotix_xs_msgs__srv__MotorGains_Response__create()
{
  interbotix_xs_msgs__srv__MotorGains_Response * msg = (interbotix_xs_msgs__srv__MotorGains_Response *)malloc(sizeof(interbotix_xs_msgs__srv__MotorGains_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__srv__MotorGains_Response));
  bool success = interbotix_xs_msgs__srv__MotorGains_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__srv__MotorGains_Response__destroy(interbotix_xs_msgs__srv__MotorGains_Response * msg)
{
  if (msg) {
    interbotix_xs_msgs__srv__MotorGains_Response__fini(msg);
  }
  free(msg);
}


bool
interbotix_xs_msgs__srv__MotorGains_Response__Sequence__init(interbotix_xs_msgs__srv__MotorGains_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interbotix_xs_msgs__srv__MotorGains_Response * data = NULL;
  if (size) {
    data = (interbotix_xs_msgs__srv__MotorGains_Response *)calloc(size, sizeof(interbotix_xs_msgs__srv__MotorGains_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__srv__MotorGains_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__srv__MotorGains_Response__fini(&data[i - 1]);
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
interbotix_xs_msgs__srv__MotorGains_Response__Sequence__fini(interbotix_xs_msgs__srv__MotorGains_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interbotix_xs_msgs__srv__MotorGains_Response__fini(&array->data[i]);
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

interbotix_xs_msgs__srv__MotorGains_Response__Sequence *
interbotix_xs_msgs__srv__MotorGains_Response__Sequence__create(size_t size)
{
  interbotix_xs_msgs__srv__MotorGains_Response__Sequence * array = (interbotix_xs_msgs__srv__MotorGains_Response__Sequence *)malloc(sizeof(interbotix_xs_msgs__srv__MotorGains_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__srv__MotorGains_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__srv__MotorGains_Response__Sequence__destroy(interbotix_xs_msgs__srv__MotorGains_Response__Sequence * array)
{
  if (array) {
    interbotix_xs_msgs__srv__MotorGains_Response__Sequence__fini(array);
  }
  free(array);
}

bool
interbotix_xs_msgs__srv__MotorGains_Response__Sequence__are_equal(const interbotix_xs_msgs__srv__MotorGains_Response__Sequence * lhs, const interbotix_xs_msgs__srv__MotorGains_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__srv__MotorGains_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__srv__MotorGains_Response__Sequence__copy(
  const interbotix_xs_msgs__srv__MotorGains_Response__Sequence * input,
  interbotix_xs_msgs__srv__MotorGains_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__srv__MotorGains_Response);
    interbotix_xs_msgs__srv__MotorGains_Response * data =
      (interbotix_xs_msgs__srv__MotorGains_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__srv__MotorGains_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__srv__MotorGains_Response__fini(&data[i]);
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
    if (!interbotix_xs_msgs__srv__MotorGains_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
