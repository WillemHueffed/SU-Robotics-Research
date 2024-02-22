// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interbotix_xs_msgs:msg/JointSingleCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__FUNCTIONS_H_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interbotix_xs_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "interbotix_xs_msgs/msg/detail/joint_single_command__struct.h"

/// Initialize msg/JointSingleCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interbotix_xs_msgs__msg__JointSingleCommand
 * )) before or use
 * interbotix_xs_msgs__msg__JointSingleCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
bool
interbotix_xs_msgs__msg__JointSingleCommand__init(interbotix_xs_msgs__msg__JointSingleCommand * msg);

/// Finalize msg/JointSingleCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
void
interbotix_xs_msgs__msg__JointSingleCommand__fini(interbotix_xs_msgs__msg__JointSingleCommand * msg);

/// Create msg/JointSingleCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interbotix_xs_msgs__msg__JointSingleCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
interbotix_xs_msgs__msg__JointSingleCommand *
interbotix_xs_msgs__msg__JointSingleCommand__create();

/// Destroy msg/JointSingleCommand message.
/**
 * It calls
 * interbotix_xs_msgs__msg__JointSingleCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
void
interbotix_xs_msgs__msg__JointSingleCommand__destroy(interbotix_xs_msgs__msg__JointSingleCommand * msg);

/// Check for msg/JointSingleCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
bool
interbotix_xs_msgs__msg__JointSingleCommand__are_equal(const interbotix_xs_msgs__msg__JointSingleCommand * lhs, const interbotix_xs_msgs__msg__JointSingleCommand * rhs);

/// Copy a msg/JointSingleCommand message.
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
interbotix_xs_msgs__msg__JointSingleCommand__copy(
  const interbotix_xs_msgs__msg__JointSingleCommand * input,
  interbotix_xs_msgs__msg__JointSingleCommand * output);

/// Initialize array of msg/JointSingleCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * interbotix_xs_msgs__msg__JointSingleCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
bool
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__init(interbotix_xs_msgs__msg__JointSingleCommand__Sequence * array, size_t size);

/// Finalize array of msg/JointSingleCommand messages.
/**
 * It calls
 * interbotix_xs_msgs__msg__JointSingleCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
void
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__fini(interbotix_xs_msgs__msg__JointSingleCommand__Sequence * array);

/// Create array of msg/JointSingleCommand messages.
/**
 * It allocates the memory for the array and calls
 * interbotix_xs_msgs__msg__JointSingleCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
interbotix_xs_msgs__msg__JointSingleCommand__Sequence *
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__create(size_t size);

/// Destroy array of msg/JointSingleCommand messages.
/**
 * It calls
 * interbotix_xs_msgs__msg__JointSingleCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
void
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__destroy(interbotix_xs_msgs__msg__JointSingleCommand__Sequence * array);

/// Check for msg/JointSingleCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
bool
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__are_equal(const interbotix_xs_msgs__msg__JointSingleCommand__Sequence * lhs, const interbotix_xs_msgs__msg__JointSingleCommand__Sequence * rhs);

/// Copy an array of msg/JointSingleCommand messages.
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
interbotix_xs_msgs__msg__JointSingleCommand__Sequence__copy(
  const interbotix_xs_msgs__msg__JointSingleCommand__Sequence * input,
  interbotix_xs_msgs__msg__JointSingleCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__FUNCTIONS_H_
