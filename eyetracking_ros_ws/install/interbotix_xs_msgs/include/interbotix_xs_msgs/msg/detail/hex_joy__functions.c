// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_xs_msgs:msg/HexJoy.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/msg/detail/hex_joy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
interbotix_xs_msgs__msg__HexJoy__init(interbotix_xs_msgs__msg__HexJoy * msg)
{
  if (!msg) {
    return false;
  }
  // world_x_cmd
  // world_y_cmd
  // world_yaw_cmd
  // place_x_cmd
  // place_y_cmd
  // place_z_cmd
  // place_roll_cmd
  // place_pitch_cmd
  // pose_cmd
  // move_type_cmd
  // gait_toggle_cmd
  // leg_toggle_cmd
  // stance_cmd
  // reboot_cmd
  // set_home_pose_cmd
  // speed_cmd
  // speed_toggle_cmd
  return true;
}

void
interbotix_xs_msgs__msg__HexJoy__fini(interbotix_xs_msgs__msg__HexJoy * msg)
{
  if (!msg) {
    return;
  }
  // world_x_cmd
  // world_y_cmd
  // world_yaw_cmd
  // place_x_cmd
  // place_y_cmd
  // place_z_cmd
  // place_roll_cmd
  // place_pitch_cmd
  // pose_cmd
  // move_type_cmd
  // gait_toggle_cmd
  // leg_toggle_cmd
  // stance_cmd
  // reboot_cmd
  // set_home_pose_cmd
  // speed_cmd
  // speed_toggle_cmd
}

bool
interbotix_xs_msgs__msg__HexJoy__are_equal(const interbotix_xs_msgs__msg__HexJoy * lhs, const interbotix_xs_msgs__msg__HexJoy * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // world_x_cmd
  if (lhs->world_x_cmd != rhs->world_x_cmd) {
    return false;
  }
  // world_y_cmd
  if (lhs->world_y_cmd != rhs->world_y_cmd) {
    return false;
  }
  // world_yaw_cmd
  if (lhs->world_yaw_cmd != rhs->world_yaw_cmd) {
    return false;
  }
  // place_x_cmd
  if (lhs->place_x_cmd != rhs->place_x_cmd) {
    return false;
  }
  // place_y_cmd
  if (lhs->place_y_cmd != rhs->place_y_cmd) {
    return false;
  }
  // place_z_cmd
  if (lhs->place_z_cmd != rhs->place_z_cmd) {
    return false;
  }
  // place_roll_cmd
  if (lhs->place_roll_cmd != rhs->place_roll_cmd) {
    return false;
  }
  // place_pitch_cmd
  if (lhs->place_pitch_cmd != rhs->place_pitch_cmd) {
    return false;
  }
  // pose_cmd
  if (lhs->pose_cmd != rhs->pose_cmd) {
    return false;
  }
  // move_type_cmd
  if (lhs->move_type_cmd != rhs->move_type_cmd) {
    return false;
  }
  // gait_toggle_cmd
  if (lhs->gait_toggle_cmd != rhs->gait_toggle_cmd) {
    return false;
  }
  // leg_toggle_cmd
  if (lhs->leg_toggle_cmd != rhs->leg_toggle_cmd) {
    return false;
  }
  // stance_cmd
  if (lhs->stance_cmd != rhs->stance_cmd) {
    return false;
  }
  // reboot_cmd
  if (lhs->reboot_cmd != rhs->reboot_cmd) {
    return false;
  }
  // set_home_pose_cmd
  if (lhs->set_home_pose_cmd != rhs->set_home_pose_cmd) {
    return false;
  }
  // speed_cmd
  if (lhs->speed_cmd != rhs->speed_cmd) {
    return false;
  }
  // speed_toggle_cmd
  if (lhs->speed_toggle_cmd != rhs->speed_toggle_cmd) {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__msg__HexJoy__copy(
  const interbotix_xs_msgs__msg__HexJoy * input,
  interbotix_xs_msgs__msg__HexJoy * output)
{
  if (!input || !output) {
    return false;
  }
  // world_x_cmd
  output->world_x_cmd = input->world_x_cmd;
  // world_y_cmd
  output->world_y_cmd = input->world_y_cmd;
  // world_yaw_cmd
  output->world_yaw_cmd = input->world_yaw_cmd;
  // place_x_cmd
  output->place_x_cmd = input->place_x_cmd;
  // place_y_cmd
  output->place_y_cmd = input->place_y_cmd;
  // place_z_cmd
  output->place_z_cmd = input->place_z_cmd;
  // place_roll_cmd
  output->place_roll_cmd = input->place_roll_cmd;
  // place_pitch_cmd
  output->place_pitch_cmd = input->place_pitch_cmd;
  // pose_cmd
  output->pose_cmd = input->pose_cmd;
  // move_type_cmd
  output->move_type_cmd = input->move_type_cmd;
  // gait_toggle_cmd
  output->gait_toggle_cmd = input->gait_toggle_cmd;
  // leg_toggle_cmd
  output->leg_toggle_cmd = input->leg_toggle_cmd;
  // stance_cmd
  output->stance_cmd = input->stance_cmd;
  // reboot_cmd
  output->reboot_cmd = input->reboot_cmd;
  // set_home_pose_cmd
  output->set_home_pose_cmd = input->set_home_pose_cmd;
  // speed_cmd
  output->speed_cmd = input->speed_cmd;
  // speed_toggle_cmd
  output->speed_toggle_cmd = input->speed_toggle_cmd;
  return true;
}

interbotix_xs_msgs__msg__HexJoy *
interbotix_xs_msgs__msg__HexJoy__create()
{
  interbotix_xs_msgs__msg__HexJoy * msg = (interbotix_xs_msgs__msg__HexJoy *)malloc(sizeof(interbotix_xs_msgs__msg__HexJoy));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__msg__HexJoy));
  bool success = interbotix_xs_msgs__msg__HexJoy__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__msg__HexJoy__destroy(interbotix_xs_msgs__msg__HexJoy * msg)
{
  if (msg) {
    interbotix_xs_msgs__msg__HexJoy__fini(msg);
  }
  free(msg);
}


bool
interbotix_xs_msgs__msg__HexJoy__Sequence__init(interbotix_xs_msgs__msg__HexJoy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interbotix_xs_msgs__msg__HexJoy * data = NULL;
  if (size) {
    data = (interbotix_xs_msgs__msg__HexJoy *)calloc(size, sizeof(interbotix_xs_msgs__msg__HexJoy));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__msg__HexJoy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__msg__HexJoy__fini(&data[i - 1]);
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
interbotix_xs_msgs__msg__HexJoy__Sequence__fini(interbotix_xs_msgs__msg__HexJoy__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interbotix_xs_msgs__msg__HexJoy__fini(&array->data[i]);
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

interbotix_xs_msgs__msg__HexJoy__Sequence *
interbotix_xs_msgs__msg__HexJoy__Sequence__create(size_t size)
{
  interbotix_xs_msgs__msg__HexJoy__Sequence * array = (interbotix_xs_msgs__msg__HexJoy__Sequence *)malloc(sizeof(interbotix_xs_msgs__msg__HexJoy__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__msg__HexJoy__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__msg__HexJoy__Sequence__destroy(interbotix_xs_msgs__msg__HexJoy__Sequence * array)
{
  if (array) {
    interbotix_xs_msgs__msg__HexJoy__Sequence__fini(array);
  }
  free(array);
}

bool
interbotix_xs_msgs__msg__HexJoy__Sequence__are_equal(const interbotix_xs_msgs__msg__HexJoy__Sequence * lhs, const interbotix_xs_msgs__msg__HexJoy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__msg__HexJoy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__msg__HexJoy__Sequence__copy(
  const interbotix_xs_msgs__msg__HexJoy__Sequence * input,
  interbotix_xs_msgs__msg__HexJoy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__msg__HexJoy);
    interbotix_xs_msgs__msg__HexJoy * data =
      (interbotix_xs_msgs__msg__HexJoy *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__msg__HexJoy__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__msg__HexJoy__fini(&data[i]);
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
    if (!interbotix_xs_msgs__msg__HexJoy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
