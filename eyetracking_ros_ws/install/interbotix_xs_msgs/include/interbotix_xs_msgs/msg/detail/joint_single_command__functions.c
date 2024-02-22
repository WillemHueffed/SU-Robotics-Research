// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_xs_msgs:msg/JointSingleCommand.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/msg/detail/joint_single_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
interbotix_xs_msgs__msg__JointSingleCommand__init(interbotix_xs_msgs__msg__JointSingleCommand * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    interbotix_xs_msgs__msg__JointSingleCommand__fini(msg);
    return false;
  }
  // cmd
  return true;
}

void
interbotix_xs_msgs__msg__JointSingleCommand__fini(interbotix_xs_msgs__msg__JointSingleCommand * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // cmd
}

bool
interbotix_xs_msgs__msg__JointSingleCommand__are_equal(const interbotix_xs_msgs__msg__JointSingleCommand * lhs, const interbotix_xs_msgs__msg__JointSingleCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // cmd
  if (lhs->cmd != rhs->cmd) {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__msg__JointSingleCommand__copy(
  const interbotix_xs_msgs__msg__JointSingleCommand * input,
  interbotix_xs_msgs__msg__JointSingleCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // cmd
  output->cmd = input->cmd;
  return true;
}

interbotix_xs_msgs__msg__JointSingleCommand *
interbotix_xs_msgs__msg__JointSingleCommand__create()
{
  interbotix_xs_msgs__msg__JointSingleCommand * msg = (interbotix_xs_msgs__msg__JointSingleCommand *)malloc(sizeof(interbotix_xs_msgs__msg__JointSingleCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__msg__JointSingleCommand));
  bool success = interbotix_xs_msgs__msg__JointSingleCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__msg__JointSingleCommand__destroy(interbotix_xs_msgs__msg__JointSingleCommand * msg)
{
  if (msg) {
    interbotix_xs_msgs__msg__JointSingleCommand__fini(msg);
  }
  free(msg);
}


bool
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__init(interbotix_xs_msgs__msg__JointSingleCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interbotix_xs_msgs__msg__JointSingleCommand * data = NULL;
  if (size) {
    data = (interbotix_xs_msgs__msg__JointSingleCommand *)calloc(size, sizeof(interbotix_xs_msgs__msg__JointSingleCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__msg__JointSingleCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__msg__JointSingleCommand__fini(&data[i - 1]);
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
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__fini(interbotix_xs_msgs__msg__JointSingleCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interbotix_xs_msgs__msg__JointSingleCommand__fini(&array->data[i]);
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

interbotix_xs_msgs__msg__JointSingleCommand__Sequence *
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__create(size_t size)
{
  interbotix_xs_msgs__msg__JointSingleCommand__Sequence * array = (interbotix_xs_msgs__msg__JointSingleCommand__Sequence *)malloc(sizeof(interbotix_xs_msgs__msg__JointSingleCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__msg__JointSingleCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__destroy(interbotix_xs_msgs__msg__JointSingleCommand__Sequence * array)
{
  if (array) {
    interbotix_xs_msgs__msg__JointSingleCommand__Sequence__fini(array);
  }
  free(array);
}

bool
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__are_equal(const interbotix_xs_msgs__msg__JointSingleCommand__Sequence * lhs, const interbotix_xs_msgs__msg__JointSingleCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__msg__JointSingleCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__copy(
  const interbotix_xs_msgs__msg__JointSingleCommand__Sequence * input,
  interbotix_xs_msgs__msg__JointSingleCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__msg__JointSingleCommand);
    interbotix_xs_msgs__msg__JointSingleCommand * data =
      (interbotix_xs_msgs__msg__JointSingleCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__msg__JointSingleCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__msg__JointSingleCommand__fini(&data[i]);
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
    if (!interbotix_xs_msgs__msg__JointSingleCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
