// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interbotix_perception_msgs:srv/FilterParams.idl
// generated code does not contain a copyright notice
#include "interbotix_perception_msgs/srv/detail/filter_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interbotix_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interbotix_perception_msgs/srv/detail/filter_params__struct.h"
#include "interbotix_perception_msgs/srv/detail/filter_params__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _FilterParams_Request__ros_msg_type = interbotix_perception_msgs__srv__FilterParams_Request;

static bool _FilterParams_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FilterParams_Request__ros_msg_type * ros_message = static_cast<const _FilterParams_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x_filter_min
  {
    cdr << ros_message->x_filter_min;
  }

  // Field name: x_filter_max
  {
    cdr << ros_message->x_filter_max;
  }

  // Field name: y_filter_min
  {
    cdr << ros_message->y_filter_min;
  }

  // Field name: y_filter_max
  {
    cdr << ros_message->y_filter_max;
  }

  // Field name: z_filter_min
  {
    cdr << ros_message->z_filter_min;
  }

  // Field name: z_filter_max
  {
    cdr << ros_message->z_filter_max;
  }

  // Field name: voxel_leaf_size
  {
    cdr << ros_message->voxel_leaf_size;
  }

  // Field name: plane_max_iter
  {
    cdr << ros_message->plane_max_iter;
  }

  // Field name: plane_dist_thresh
  {
    cdr << ros_message->plane_dist_thresh;
  }

  // Field name: ror_radius_search
  {
    cdr << ros_message->ror_radius_search;
  }

  // Field name: ror_min_neighbors
  {
    cdr << ros_message->ror_min_neighbors;
  }

  // Field name: cluster_tol
  {
    cdr << ros_message->cluster_tol;
  }

  // Field name: cluster_min_size
  {
    cdr << ros_message->cluster_min_size;
  }

  // Field name: cluster_max_size
  {
    cdr << ros_message->cluster_max_size;
  }

  return true;
}

static bool _FilterParams_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FilterParams_Request__ros_msg_type * ros_message = static_cast<_FilterParams_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x_filter_min
  {
    cdr >> ros_message->x_filter_min;
  }

  // Field name: x_filter_max
  {
    cdr >> ros_message->x_filter_max;
  }

  // Field name: y_filter_min
  {
    cdr >> ros_message->y_filter_min;
  }

  // Field name: y_filter_max
  {
    cdr >> ros_message->y_filter_max;
  }

  // Field name: z_filter_min
  {
    cdr >> ros_message->z_filter_min;
  }

  // Field name: z_filter_max
  {
    cdr >> ros_message->z_filter_max;
  }

  // Field name: voxel_leaf_size
  {
    cdr >> ros_message->voxel_leaf_size;
  }

  // Field name: plane_max_iter
  {
    cdr >> ros_message->plane_max_iter;
  }

  // Field name: plane_dist_thresh
  {
    cdr >> ros_message->plane_dist_thresh;
  }

  // Field name: ror_radius_search
  {
    cdr >> ros_message->ror_radius_search;
  }

  // Field name: ror_min_neighbors
  {
    cdr >> ros_message->ror_min_neighbors;
  }

  // Field name: cluster_tol
  {
    cdr >> ros_message->cluster_tol;
  }

  // Field name: cluster_min_size
  {
    cdr >> ros_message->cluster_min_size;
  }

  // Field name: cluster_max_size
  {
    cdr >> ros_message->cluster_max_size;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t get_serialized_size_interbotix_perception_msgs__srv__FilterParams_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FilterParams_Request__ros_msg_type * ros_message = static_cast<const _FilterParams_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_filter_min
  {
    size_t item_size = sizeof(ros_message->x_filter_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_filter_max
  {
    size_t item_size = sizeof(ros_message->x_filter_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_filter_min
  {
    size_t item_size = sizeof(ros_message->y_filter_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_filter_max
  {
    size_t item_size = sizeof(ros_message->y_filter_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_filter_min
  {
    size_t item_size = sizeof(ros_message->z_filter_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_filter_max
  {
    size_t item_size = sizeof(ros_message->z_filter_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voxel_leaf_size
  {
    size_t item_size = sizeof(ros_message->voxel_leaf_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plane_max_iter
  {
    size_t item_size = sizeof(ros_message->plane_max_iter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plane_dist_thresh
  {
    size_t item_size = sizeof(ros_message->plane_dist_thresh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ror_radius_search
  {
    size_t item_size = sizeof(ros_message->ror_radius_search);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ror_min_neighbors
  {
    size_t item_size = sizeof(ros_message->ror_min_neighbors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cluster_tol
  {
    size_t item_size = sizeof(ros_message->cluster_tol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cluster_min_size
  {
    size_t item_size = sizeof(ros_message->cluster_min_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cluster_max_size
  {
    size_t item_size = sizeof(ros_message->cluster_max_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FilterParams_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interbotix_perception_msgs__srv__FilterParams_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t max_serialized_size_interbotix_perception_msgs__srv__FilterParams_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x_filter_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_filter_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_filter_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_filter_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_filter_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_filter_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: voxel_leaf_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: plane_max_iter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: plane_dist_thresh
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ror_radius_search
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ror_min_neighbors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cluster_tol
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cluster_min_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cluster_max_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _FilterParams_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interbotix_perception_msgs__srv__FilterParams_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FilterParams_Request = {
  "interbotix_perception_msgs::srv",
  "FilterParams_Request",
  _FilterParams_Request__cdr_serialize,
  _FilterParams_Request__cdr_deserialize,
  _FilterParams_Request__get_serialized_size,
  _FilterParams_Request__max_serialized_size
};

static rosidl_message_type_support_t _FilterParams_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FilterParams_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, FilterParams_Request)() {
  return &_FilterParams_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "interbotix_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/filter_params__struct.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/filter_params__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _FilterParams_Response__ros_msg_type = interbotix_perception_msgs__srv__FilterParams_Response;

static bool _FilterParams_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FilterParams_Response__ros_msg_type * ros_message = static_cast<const _FilterParams_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _FilterParams_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FilterParams_Response__ros_msg_type * ros_message = static_cast<_FilterParams_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t get_serialized_size_interbotix_perception_msgs__srv__FilterParams_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FilterParams_Response__ros_msg_type * ros_message = static_cast<const _FilterParams_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FilterParams_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interbotix_perception_msgs__srv__FilterParams_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t max_serialized_size_interbotix_perception_msgs__srv__FilterParams_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _FilterParams_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interbotix_perception_msgs__srv__FilterParams_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FilterParams_Response = {
  "interbotix_perception_msgs::srv",
  "FilterParams_Response",
  _FilterParams_Response__cdr_serialize,
  _FilterParams_Response__cdr_deserialize,
  _FilterParams_Response__get_serialized_size,
  _FilterParams_Response__max_serialized_size
};

static rosidl_message_type_support_t _FilterParams_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FilterParams_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, FilterParams_Response)() {
  return &_FilterParams_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interbotix_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interbotix_perception_msgs/srv/filter_params.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FilterParams__callbacks = {
  "interbotix_perception_msgs::srv",
  "FilterParams",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, FilterParams_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, FilterParams_Response)(),
};

static rosidl_service_type_support_t FilterParams__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FilterParams__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, FilterParams)() {
  return &FilterParams__handle;
}

#if defined(__cplusplus)
}
#endif
