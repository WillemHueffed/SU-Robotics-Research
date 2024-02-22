// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:msg/TurretJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__STRUCT_H_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PAN_CCW'.
enum
{
  interbotix_xs_msgs__msg__TurretJoy__PAN_CCW = 1
};

/// Constant 'PAN_CW'.
enum
{
  interbotix_xs_msgs__msg__TurretJoy__PAN_CW = 2
};

/// Constant 'TILT_UP'.
enum
{
  interbotix_xs_msgs__msg__TurretJoy__TILT_UP = 3
};

/// Constant 'TILT_DOWN'.
enum
{
  interbotix_xs_msgs__msg__TurretJoy__TILT_DOWN = 4
};

/// Constant 'PAN_TILT_HOME'.
enum
{
  interbotix_xs_msgs__msg__TurretJoy__PAN_TILT_HOME = 5
};

/// Constant 'SPEED_INC'.
enum
{
  interbotix_xs_msgs__msg__TurretJoy__SPEED_INC = 6
};

/// Constant 'SPEED_DEC'.
enum
{
  interbotix_xs_msgs__msg__TurretJoy__SPEED_DEC = 7
};

/// Constant 'SPEED_COARSE'.
enum
{
  interbotix_xs_msgs__msg__TurretJoy__SPEED_COARSE = 8
};

/// Constant 'SPEED_FINE'.
enum
{
  interbotix_xs_msgs__msg__TurretJoy__SPEED_FINE = 9
};

// Struct defined in msg/TurretJoy in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__msg__TurretJoy
{
  int8_t pan_cmd;
  int8_t tilt_cmd;
  int8_t speed_cmd;
  int8_t speed_toggle_cmd;
} interbotix_xs_msgs__msg__TurretJoy;

// Struct for a sequence of interbotix_xs_msgs__msg__TurretJoy.
typedef struct interbotix_xs_msgs__msg__TurretJoy__Sequence
{
  interbotix_xs_msgs__msg__TurretJoy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__msg__TurretJoy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__STRUCT_H_
