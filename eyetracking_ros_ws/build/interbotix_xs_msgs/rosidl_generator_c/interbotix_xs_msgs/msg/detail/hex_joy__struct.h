// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:msg/HexJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__STRUCT_H_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WORLD_X_INC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__WORLD_X_INC = 1
};

/// Constant 'WORLD_X_DEC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__WORLD_X_DEC = 2
};

/// Constant 'WORLD_Y_INC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__WORLD_Y_INC = 3
};

/// Constant 'WORLD_Y_DEC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__WORLD_Y_DEC = 4
};

/// Constant 'WORLD_YAW_CCW'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__WORLD_YAW_CCW = 5
};

/// Constant 'WORLD_YAW_CW'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__WORLD_YAW_CW = 6
};

/// Constant 'PLACE_X_INC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__PLACE_X_INC = 7
};

/// Constant 'PLACE_X_DEC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__PLACE_X_DEC = 8
};

/// Constant 'PLACE_Y_INC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__PLACE_Y_INC = 9
};

/// Constant 'PLACE_Y_DEC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__PLACE_Y_DEC = 10
};

/// Constant 'PLACE_Z_INC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__PLACE_Z_INC = 11
};

/// Constant 'PLACE_Z_DEC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__PLACE_Z_DEC = 12
};

/// Constant 'PLACE_ROLL_CCW'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__PLACE_ROLL_CCW = 13
};

/// Constant 'PLACE_ROLL_CW'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__PLACE_ROLL_CW = 14
};

/// Constant 'PLACE_PITCH_UP'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__PLACE_PITCH_UP = 15
};

/// Constant 'PLACE_PITCH_DOWN'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__PLACE_PITCH_DOWN = 16
};

/// Constant 'MOVE_HEXAPOD'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__MOVE_HEXAPOD = 17
};

/// Constant 'MOVE_LEG'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__MOVE_LEG = 18
};

/// Constant 'HOME_POSE'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__HOME_POSE = 19
};

/// Constant 'SLEEP_POSE'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__SLEEP_POSE = 20
};

/// Constant 'GAIT_NEXT'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__GAIT_NEXT = 21
};

/// Constant 'GAIT_PREVIOUS'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__GAIT_PREVIOUS = 22
};

/// Constant 'LEG_NEXT'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__LEG_NEXT = 23
};

/// Constant 'LEG_PREVIOUS'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__LEG_PREVIOUS = 24
};

/// Constant 'WIDEN_STANCE'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__WIDEN_STANCE = 25
};

/// Constant 'NARROW_STANCE'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__NARROW_STANCE = 26
};

/// Constant 'REBOOT_MOTORS'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__REBOOT_MOTORS = 27
};

/// Constant 'SET_HOME_POSE'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__SET_HOME_POSE = 28
};

/// Constant 'SPEED_INC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__SPEED_INC = 29
};

/// Constant 'SPEED_DEC'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__SPEED_DEC = 30
};

/// Constant 'SPEED_COARSE'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__SPEED_COARSE = 31
};

/// Constant 'SPEED_FINE'.
enum
{
  interbotix_xs_msgs__msg__HexJoy__SPEED_FINE = 32
};

// Struct defined in msg/HexJoy in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__msg__HexJoy
{
  int8_t world_x_cmd;
  int8_t world_y_cmd;
  int8_t world_yaw_cmd;
  int8_t place_x_cmd;
  int8_t place_y_cmd;
  int8_t place_z_cmd;
  int8_t place_roll_cmd;
  int8_t place_pitch_cmd;
  int8_t pose_cmd;
  int8_t move_type_cmd;
  int8_t gait_toggle_cmd;
  int8_t leg_toggle_cmd;
  int8_t stance_cmd;
  int8_t reboot_cmd;
  int8_t set_home_pose_cmd;
  int8_t speed_cmd;
  int8_t speed_toggle_cmd;
} interbotix_xs_msgs__msg__HexJoy;

// Struct for a sequence of interbotix_xs_msgs__msg__HexJoy.
typedef struct interbotix_xs_msgs__msg__HexJoy__Sequence
{
  interbotix_xs_msgs__msg__HexJoy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__msg__HexJoy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__STRUCT_H_
