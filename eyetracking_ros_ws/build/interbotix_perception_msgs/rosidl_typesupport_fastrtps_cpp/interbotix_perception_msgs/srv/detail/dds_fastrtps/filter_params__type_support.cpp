// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interbotix_perception_msgs:srv/FilterParams.idl
// generated code does not contain a copyright notice
#include "interbotix_perception_msgs/srv/detail/filter_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interbotix_perception_msgs/srv/detail/filter_params__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace interbotix_perception_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
cdr_serialize(
  const interbotix_perception_msgs::srv::FilterParams_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x_filter_min
  cdr << ros_message.x_filter_min;
  // Member: x_filter_max
  cdr << ros_message.x_filter_max;
  // Member: y_filter_min
  cdr << ros_message.y_filter_min;
  // Member: y_filter_max
  cdr << ros_message.y_filter_max;
  // Member: z_filter_min
  cdr << ros_message.z_filter_min;
  // Member: z_filter_max
  cdr << ros_message.z_filter_max;
  // Member: voxel_leaf_size
  cdr << ros_message.voxel_leaf_size;
  // Member: plane_max_iter
  cdr << ros_message.plane_max_iter;
  // Member: plane_dist_thresh
  cdr << ros_message.plane_dist_thresh;
  // Member: ror_radius_search
  cdr << ros_message.ror_radius_search;
  // Member: ror_min_neighbors
  cdr << ros_message.ror_min_neighbors;
  // Member: cluster_tol
  cdr << ros_message.cluster_tol;
  // Member: cluster_min_size
  cdr << ros_message.cluster_min_size;
  // Member: cluster_max_size
  cdr << ros_message.cluster_max_size;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interbotix_perception_msgs::srv::FilterParams_Request & ros_message)
{
  // Member: x_filter_min
  cdr >> ros_message.x_filter_min;

  // Member: x_filter_max
  cdr >> ros_message.x_filter_max;

  // Member: y_filter_min
  cdr >> ros_message.y_filter_min;

  // Member: y_filter_max
  cdr >> ros_message.y_filter_max;

  // Member: z_filter_min
  cdr >> ros_message.z_filter_min;

  // Member: z_filter_max
  cdr >> ros_message.z_filter_max;

  // Member: voxel_leaf_size
  cdr >> ros_message.voxel_leaf_size;

  // Member: plane_max_iter
  cdr >> ros_message.plane_max_iter;

  // Member: plane_dist_thresh
  cdr >> ros_message.plane_dist_thresh;

  // Member: ror_radius_search
  cdr >> ros_message.ror_radius_search;

  // Member: ror_min_neighbors
  cdr >> ros_message.ror_min_neighbors;

  // Member: cluster_tol
  cdr >> ros_message.cluster_tol;

  // Member: cluster_min_size
  cdr >> ros_message.cluster_min_size;

  // Member: cluster_max_size
  cdr >> ros_message.cluster_max_size;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
get_serialized_size(
  const interbotix_perception_msgs::srv::FilterParams_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x_filter_min
  {
    size_t item_size = sizeof(ros_message.x_filter_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_filter_max
  {
    size_t item_size = sizeof(ros_message.x_filter_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_filter_min
  {
    size_t item_size = sizeof(ros_message.y_filter_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_filter_max
  {
    size_t item_size = sizeof(ros_message.y_filter_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_filter_min
  {
    size_t item_size = sizeof(ros_message.z_filter_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_filter_max
  {
    size_t item_size = sizeof(ros_message.z_filter_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voxel_leaf_size
  {
    size_t item_size = sizeof(ros_message.voxel_leaf_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plane_max_iter
  {
    size_t item_size = sizeof(ros_message.plane_max_iter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plane_dist_thresh
  {
    size_t item_size = sizeof(ros_message.plane_dist_thresh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ror_radius_search
  {
    size_t item_size = sizeof(ros_message.ror_radius_search);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ror_min_neighbors
  {
    size_t item_size = sizeof(ros_message.ror_min_neighbors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cluster_tol
  {
    size_t item_size = sizeof(ros_message.cluster_tol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cluster_min_size
  {
    size_t item_size = sizeof(ros_message.cluster_min_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cluster_max_size
  {
    size_t item_size = sizeof(ros_message.cluster_max_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
max_serialized_size_FilterParams_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x_filter_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_filter_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_filter_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_filter_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_filter_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_filter_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: voxel_leaf_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: plane_max_iter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: plane_dist_thresh
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ror_radius_search
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ror_min_neighbors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cluster_tol
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cluster_min_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cluster_max_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _FilterParams_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interbotix_perception_msgs::srv::FilterParams_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FilterParams_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interbotix_perception_msgs::srv::FilterParams_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FilterParams_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interbotix_perception_msgs::srv::FilterParams_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FilterParams_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FilterParams_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _FilterParams_Request__callbacks = {
  "interbotix_perception_msgs::srv",
  "FilterParams_Request",
  _FilterParams_Request__cdr_serialize,
  _FilterParams_Request__cdr_deserialize,
  _FilterParams_Request__get_serialized_size,
  _FilterParams_Request__max_serialized_size
};

static rosidl_message_type_support_t _FilterParams_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FilterParams_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interbotix_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interbotix_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_perception_msgs::srv::FilterParams_Request>()
{
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_FilterParams_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_perception_msgs, srv, FilterParams_Request)() {
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_FilterParams_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace interbotix_perception_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
cdr_serialize(
  const interbotix_perception_msgs::srv::FilterParams_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interbotix_perception_msgs::srv::FilterParams_Response & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
get_serialized_size(
  const interbotix_perception_msgs::srv::FilterParams_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
max_serialized_size_FilterParams_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _FilterParams_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interbotix_perception_msgs::srv::FilterParams_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FilterParams_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interbotix_perception_msgs::srv::FilterParams_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FilterParams_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interbotix_perception_msgs::srv::FilterParams_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FilterParams_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FilterParams_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _FilterParams_Response__callbacks = {
  "interbotix_perception_msgs::srv",
  "FilterParams_Response",
  _FilterParams_Response__cdr_serialize,
  _FilterParams_Response__cdr_deserialize,
  _FilterParams_Response__get_serialized_size,
  _FilterParams_Response__max_serialized_size
};

static rosidl_message_type_support_t _FilterParams_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FilterParams_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interbotix_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interbotix_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_perception_msgs::srv::FilterParams_Response>()
{
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_FilterParams_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_perception_msgs, srv, FilterParams_Response)() {
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_FilterParams_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace interbotix_perception_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _FilterParams__callbacks = {
  "interbotix_perception_msgs::srv",
  "FilterParams",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_perception_msgs, srv, FilterParams_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_perception_msgs, srv, FilterParams_Response)(),
};

static rosidl_service_type_support_t _FilterParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FilterParams__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interbotix_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interbotix_perception_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<interbotix_perception_msgs::srv::FilterParams>()
{
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_FilterParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_perception_msgs, srv, FilterParams)() {
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_FilterParams__handle;
}

#ifdef __cplusplus
}
#endif
