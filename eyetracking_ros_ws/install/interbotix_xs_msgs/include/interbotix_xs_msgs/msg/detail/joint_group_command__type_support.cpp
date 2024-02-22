// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interbotix_xs_msgs:msg/JointGroupCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interbotix_xs_msgs/msg/detail/joint_group_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interbotix_xs_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointGroupCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interbotix_xs_msgs::msg::JointGroupCommand(_init);
}

void JointGroupCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interbotix_xs_msgs::msg::JointGroupCommand *>(message_memory);
  typed_message->~JointGroupCommand();
}

size_t size_function__JointGroupCommand__cmd(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointGroupCommand__cmd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__JointGroupCommand__cmd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__JointGroupCommand__cmd(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointGroupCommand_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::msg::JointGroupCommand, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs::msg::JointGroupCommand, cmd),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointGroupCommand__cmd,  // size() function pointer
    get_const_function__JointGroupCommand__cmd,  // get_const(index) function pointer
    get_function__JointGroupCommand__cmd,  // get(index) function pointer
    resize_function__JointGroupCommand__cmd  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointGroupCommand_message_members = {
  "interbotix_xs_msgs::msg",  // message namespace
  "JointGroupCommand",  // message name
  2,  // number of fields
  sizeof(interbotix_xs_msgs::msg::JointGroupCommand),
  JointGroupCommand_message_member_array,  // message members
  JointGroupCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  JointGroupCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointGroupCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointGroupCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interbotix_xs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::msg::JointGroupCommand>()
{
  return &::interbotix_xs_msgs::msg::rosidl_typesupport_introspection_cpp::JointGroupCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, msg, JointGroupCommand)() {
  return &::interbotix_xs_msgs::msg::rosidl_typesupport_introspection_cpp::JointGroupCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
