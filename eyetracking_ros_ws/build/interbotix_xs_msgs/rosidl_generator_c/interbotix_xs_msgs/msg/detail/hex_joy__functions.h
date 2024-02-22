// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interbotix_xs_msgs:msg/HexJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__FUNCTIONS_H_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interbotix_xs_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "interbotix_xs_msgs/msg/detail/hex_joy__struct.h"

/// Initialize msg/HexJoy message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interbotix_xs_msgs__msg__HexJoy
 * )) before or use
 * interbotix_xs_msgs__msg__HexJoy__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
bool
interbotix_xs_msgs__msg__HexJoy__init(interbotix_xs_msgs__msg__HexJoy * msg);

/// Finalize msg/HexJoy message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
void
interbotix_xs_msgs__msg__HexJoy__fini(interbotix_xs_msgs__msg__HexJoy * msg);

/// Create msg/HexJoy message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interbotix_xs_msgs__msg__HexJoy__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
interbotix_xs_msgs__msg__HexJoy *
interbotix_xs_msgs__msg__HexJoy__create();

/// Destroy msg/HexJoy message.
/**
 * It calls
 * interbotix_xs_msgs__msg__HexJoy__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
void
interbotix_xs_msgs__msg__HexJoy__destroy(interbotix_xs_msgs__msg__HexJoy * msg);

/// Check for msg/HexJoy message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
bool
interbotix_xs_msgs__msg__HexJoy__are_equal(const interbotix_xs_msgs__msg__HexJoy * lhs, const interbotix_xs_msgs__msg__HexJoy * rhs);

/// Copy a msg/HexJoy message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
bool
interbotix_xs_msgs__msg__HexJoy__copy(
  const interbotix_xs_msgs__msg__HexJoy * input,
  interbotix_xs_msgs__msg__HexJoy * output);

/// Initialize array of msg/HexJoy messages.
/**
 * It allocates the memory for the number of elements and calls
 * interbotix_xs_msgs__msg__HexJoy__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
bool
interbotix_xs_msgs__msg__HexJoy__Sequence__init(interbotix_xs_msgs__msg__HexJoy__Sequence * array, size_t size);

/// Finalize array of msg/HexJoy messages.
/**
 * It calls
 * interbotix_xs_msgs__msg__HexJoy__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
void
interbotix_xs_msgs__msg__HexJoy__Sequence__fini(interbotix_xs_msgs__msg__HexJoy__Sequence * array);

/// Create array of msg/HexJoy messages.
/**
 * It allocates the memory for the array and calls
 * interbotix_xs_msgs__msg__HexJoy__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
interbotix_xs_msgs__msg__HexJoy__Sequence *
interbotix_xs_msgs__msg__HexJoy__Sequence__create(size_t size);

/// Destroy array of msg/HexJoy messages.
/**
 * It calls
 * interbotix_xs_msgs__msg__HexJoy__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
void
interbotix_xs_msgs__msg__HexJoy__Sequence__destroy(interbotix_xs_msgs__msg__HexJoy__Sequence * array);

/// Check for msg/HexJoy message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
bool
interbotix_xs_msgs__msg__HexJoy__Sequence__are_equal(const interbotix_xs_msgs__msg__HexJoy__Sequence * lhs, const interbotix_xs_msgs__msg__HexJoy__Sequence * rhs);

/// Copy an array of msg/HexJoy messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
bool
interbotix_xs_msgs__msg__HexJoy__Sequence__copy(
  const interbotix_xs_msgs__msg__HexJoy__Sequence * input,
  interbotix_xs_msgs__msg__HexJoy__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__FUNCTIONS_H_
