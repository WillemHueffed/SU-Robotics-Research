// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_xs_msgs:msg/LocobotJoy.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/msg/detail/locobot_joy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
interbotix_xs_msgs__msg__LocobotJoy__init(interbotix_xs_msgs__msg__LocobotJoy * msg)
{
  if (!msg) {
    return false;
  }
  // base_x_cmd
  // base_theta_cmd
  // base_reset_odom_cmd
  // pan_cmd
  // tilt_cmd
  // ee_x_cmd
  // ee_y_cmd
  // ee_z_cmd
  // ee_roll_cmd
  // ee_pitch_cmd
  // waist_cmd
  // gripper_cmd
  // pose_cmd
  // speed_cmd
  // speed_toggle_cmd
  // gripper_pwm_cmd
  return true;
}

void
interbotix_xs_msgs__msg__LocobotJoy__fini(interbotix_xs_msgs__msg__LocobotJoy * msg)
{
  if (!msg) {
    return;
  }
  // base_x_cmd
  // base_theta_cmd
  // base_reset_odom_cmd
  // pan_cmd
  // tilt_cmd
  // ee_x_cmd
  // ee_y_cmd
  // ee_z_cmd
  // ee_roll_cmd
  // ee_pitch_cmd
  // waist_cmd
  // gripper_cmd
  // pose_cmd
  // speed_cmd
  // speed_toggle_cmd
  // gripper_pwm_cmd
}

bool
interbotix_xs_msgs__msg__LocobotJoy__are_equal(const interbotix_xs_msgs__msg__LocobotJoy * lhs, const interbotix_xs_msgs__msg__LocobotJoy * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_x_cmd
  if (lhs->base_x_cmd != rhs->base_x_cmd) {
    return false;
  }
  // base_theta_cmd
  if (lhs->base_theta_cmd != rhs->base_theta_cmd) {
    return false;
  }
  // base_reset_odom_cmd
  if (lhs->base_reset_odom_cmd != rhs->base_reset_odom_cmd) {
    return false;
  }
  // pan_cmd
  if (lhs->pan_cmd != rhs->pan_cmd) {
    return false;
  }
  // tilt_cmd
  if (lhs->tilt_cmd != rhs->tilt_cmd) {
    return false;
  }
  // ee_x_cmd
  if (lhs->ee_x_cmd != rhs->ee_x_cmd) {
    return false;
  }
  // ee_y_cmd
  if (lhs->ee_y_cmd != rhs->ee_y_cmd) {
    return false;
  }
  // ee_z_cmd
  if (lhs->ee_z_cmd != rhs->ee_z_cmd) {
    return false;
  }
  // ee_roll_cmd
  if (lhs->ee_roll_cmd != rhs->ee_roll_cmd) {
    return false;
  }
  // ee_pitch_cmd
  if (lhs->ee_pitch_cmd != rhs->ee_pitch_cmd) {
    return false;
  }
  // waist_cmd
  if (lhs->waist_cmd != rhs->waist_cmd) {
    return false;
  }
  // gripper_cmd
  if (lhs->gripper_cmd != rhs->gripper_cmd) {
    return false;
  }
  // pose_cmd
  if (lhs->pose_cmd != rhs->pose_cmd) {
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
  // gripper_pwm_cmd
  if (lhs->gripper_pwm_cmd != rhs->gripper_pwm_cmd) {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__msg__LocobotJoy__copy(
  const interbotix_xs_msgs__msg__LocobotJoy * input,
  interbotix_xs_msgs__msg__LocobotJoy * output)
{
  if (!input || !output) {
    return false;
  }
  // base_x_cmd
  output->base_x_cmd = input->base_x_cmd;
  // base_theta_cmd
  output->base_theta_cmd = input->base_theta_cmd;
  // base_reset_odom_cmd
  output->base_reset_odom_cmd = input->base_reset_odom_cmd;
  // pan_cmd
  output->pan_cmd = input->pan_cmd;
  // tilt_cmd
  output->tilt_cmd = input->tilt_cmd;
  // ee_x_cmd
  output->ee_x_cmd = input->ee_x_cmd;
  // ee_y_cmd
  output->ee_y_cmd = input->ee_y_cmd;
  // ee_z_cmd
  output->ee_z_cmd = input->ee_z_cmd;
  // ee_roll_cmd
  output->ee_roll_cmd = input->ee_roll_cmd;
  // ee_pitch_cmd
  output->ee_pitch_cmd = input->ee_pitch_cmd;
  // waist_cmd
  output->waist_cmd = input->waist_cmd;
  // gripper_cmd
  output->gripper_cmd = input->gripper_cmd;
  // pose_cmd
  output->pose_cmd = input->pose_cmd;
  // speed_cmd
  output->speed_cmd = input->speed_cmd;
  // speed_toggle_cmd
  output->speed_toggle_cmd = input->speed_toggle_cmd;
  // gripper_pwm_cmd
  output->gripper_pwm_cmd = input->gripper_pwm_cmd;
  return true;
}

interbotix_xs_msgs__msg__LocobotJoy *
interbotix_xs_msgs__msg__LocobotJoy__create()
{
  interbotix_xs_msgs__msg__LocobotJoy * msg = (interbotix_xs_msgs__msg__LocobotJoy *)malloc(sizeof(interbotix_xs_msgs__msg__LocobotJoy));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__msg__LocobotJoy));
  bool success = interbotix_xs_msgs__msg__LocobotJoy__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__msg__LocobotJoy__destroy(interbotix_xs_msgs__msg__LocobotJoy * msg)
{
  if (msg) {
    interbotix_xs_msgs__msg__LocobotJoy__fini(msg);
  }
  free(msg);
}


bool
interbotix_xs_msgs__msg__LocobotJoy__Sequence__init(interbotix_xs_msgs__msg__LocobotJoy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interbotix_xs_msgs__msg__LocobotJoy * data = NULL;
  if (size) {
    data = (interbotix_xs_msgs__msg__LocobotJoy *)calloc(size, sizeof(interbotix_xs_msgs__msg__LocobotJoy));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__msg__LocobotJoy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__msg__LocobotJoy__fini(&data[i - 1]);
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
interbotix_xs_msgs__msg__LocobotJoy__Sequence__fini(interbotix_xs_msgs__msg__LocobotJoy__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interbotix_xs_msgs__msg__LocobotJoy__fini(&array->data[i]);
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

interbotix_xs_msgs__msg__LocobotJoy__Sequence *
interbotix_xs_msgs__msg__LocobotJoy__Sequence__create(size_t size)
{
  interbotix_xs_msgs__msg__LocobotJoy__Sequence * array = (interbotix_xs_msgs__msg__LocobotJoy__Sequence *)malloc(sizeof(interbotix_xs_msgs__msg__LocobotJoy__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__msg__LocobotJoy__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__msg__LocobotJoy__Sequence__destroy(interbotix_xs_msgs__msg__LocobotJoy__Sequence * array)
{
  if (array) {
    interbotix_xs_msgs__msg__LocobotJoy__Sequence__fini(array);
  }
  free(array);
}

bool
interbotix_xs_msgs__msg__LocobotJoy__Sequence__are_equal(const interbotix_xs_msgs__msg__LocobotJoy__Sequence * lhs, const interbotix_xs_msgs__msg__LocobotJoy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__msg__LocobotJoy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__msg__LocobotJoy__Sequence__copy(
  const interbotix_xs_msgs__msg__LocobotJoy__Sequence * input,
  interbotix_xs_msgs__msg__LocobotJoy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__msg__LocobotJoy);
    interbotix_xs_msgs__msg__LocobotJoy * data =
      (interbotix_xs_msgs__msg__LocobotJoy *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__msg__LocobotJoy__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__msg__LocobotJoy__fini(&data[i]);
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
    if (!interbotix_xs_msgs__msg__LocobotJoy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
