// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_xs_msgs:msg/JointGroupCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_xs_msgs/msg/detail/joint_group_command__rosidl_typesupport_introspection_c.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_xs_msgs/msg/detail/joint_group_command__functions.h"
#include "interbotix_xs_msgs/msg/detail/joint_group_command__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `cmd`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__msg__JointGroupCommand__init(message_memory);
}

void JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_fini_function(void * message_memory)
{
  interbotix_xs_msgs__msg__JointGroupCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__msg__JointGroupCommand, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__msg__JointGroupCommand, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_message_members = {
  "interbotix_xs_msgs__msg",  // message namespace
  "JointGroupCommand",  // message name
  2,  // number of fields
  sizeof(interbotix_xs_msgs__msg__JointGroupCommand),
  JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_message_member_array,  // message members
  JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_message_type_support_handle = {
  0,
  &JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, msg, JointGroupCommand)() {
  if (!JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_message_type_support_handle.typesupport_identifier) {
    JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointGroupCommand__rosidl_typesupport_introspection_c__JointGroupCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
