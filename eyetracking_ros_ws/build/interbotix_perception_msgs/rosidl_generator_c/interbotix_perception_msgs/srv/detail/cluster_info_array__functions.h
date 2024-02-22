// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interbotix_perception_msgs:srv/ClusterInfoArray.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__FUNCTIONS_H_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interbotix_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.h"

/// Initialize srv/ClusterInfoArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interbotix_perception_msgs__srv__ClusterInfoArray_Request
 * )) before or use
 * interbotix_perception_msgs__srv__ClusterInfoArray_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Request__init(interbotix_perception_msgs__srv__ClusterInfoArray_Request * msg);

/// Finalize srv/ClusterInfoArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
void
interbotix_perception_msgs__srv__ClusterInfoArray_Request__fini(interbotix_perception_msgs__srv__ClusterInfoArray_Request * msg);

/// Create srv/ClusterInfoArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
interbotix_perception_msgs__srv__ClusterInfoArray_Request *
interbotix_perception_msgs__srv__ClusterInfoArray_Request__create();

/// Destroy srv/ClusterInfoArray message.
/**
 * It calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
void
interbotix_perception_msgs__srv__ClusterInfoArray_Request__destroy(interbotix_perception_msgs__srv__ClusterInfoArray_Request * msg);

/// Check for srv/ClusterInfoArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Request__are_equal(const interbotix_perception_msgs__srv__ClusterInfoArray_Request * lhs, const interbotix_perception_msgs__srv__ClusterInfoArray_Request * rhs);

/// Copy a srv/ClusterInfoArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Request__copy(
  const interbotix_perception_msgs__srv__ClusterInfoArray_Request * input,
  interbotix_perception_msgs__srv__ClusterInfoArray_Request * output);

/// Initialize array of srv/ClusterInfoArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence__init(interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence * array, size_t size);

/// Finalize array of srv/ClusterInfoArray messages.
/**
 * It calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
void
interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence__fini(interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence * array);

/// Create array of srv/ClusterInfoArray messages.
/**
 * It allocates the memory for the array and calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence *
interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence__create(size_t size);

/// Destroy array of srv/ClusterInfoArray messages.
/**
 * It calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
void
interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence__destroy(interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence * array);

/// Check for srv/ClusterInfoArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence__are_equal(const interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence * lhs, const interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence * rhs);

/// Copy an array of srv/ClusterInfoArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence__copy(
  const interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence * input,
  interbotix_perception_msgs__srv__ClusterInfoArray_Request__Sequence * output);

/// Initialize srv/ClusterInfoArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interbotix_perception_msgs__srv__ClusterInfoArray_Response
 * )) before or use
 * interbotix_perception_msgs__srv__ClusterInfoArray_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Response__init(interbotix_perception_msgs__srv__ClusterInfoArray_Response * msg);

/// Finalize srv/ClusterInfoArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
void
interbotix_perception_msgs__srv__ClusterInfoArray_Response__fini(interbotix_perception_msgs__srv__ClusterInfoArray_Response * msg);

/// Create srv/ClusterInfoArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
interbotix_perception_msgs__srv__ClusterInfoArray_Response *
interbotix_perception_msgs__srv__ClusterInfoArray_Response__create();

/// Destroy srv/ClusterInfoArray message.
/**
 * It calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
void
interbotix_perception_msgs__srv__ClusterInfoArray_Response__destroy(interbotix_perception_msgs__srv__ClusterInfoArray_Response * msg);

/// Check for srv/ClusterInfoArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Response__are_equal(const interbotix_perception_msgs__srv__ClusterInfoArray_Response * lhs, const interbotix_perception_msgs__srv__ClusterInfoArray_Response * rhs);

/// Copy a srv/ClusterInfoArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Response__copy(
  const interbotix_perception_msgs__srv__ClusterInfoArray_Response * input,
  interbotix_perception_msgs__srv__ClusterInfoArray_Response * output);

/// Initialize array of srv/ClusterInfoArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence__init(interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence * array, size_t size);

/// Finalize array of srv/ClusterInfoArray messages.
/**
 * It calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
void
interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence__fini(interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence * array);

/// Create array of srv/ClusterInfoArray messages.
/**
 * It allocates the memory for the array and calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence *
interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence__create(size_t size);

/// Destroy array of srv/ClusterInfoArray messages.
/**
 * It calls
 * interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
void
interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence__destroy(interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence * array);

/// Check for srv/ClusterInfoArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence__are_equal(const interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence * lhs, const interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence * rhs);

/// Copy an array of srv/ClusterInfoArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_interbotix_perception_msgs
bool
interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence__copy(
  const interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence * input,
  interbotix_perception_msgs__srv__ClusterInfoArray_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__FUNCTIONS_H_
