// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interbotix_xs_msgs:srv/MotorGains.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "interbotix_xs_msgs/srv/detail/motor_gains__struct.h"
#include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interbotix_xs_msgs__srv__motor_gains__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interbotix_xs_msgs.srv._motor_gains.MotorGains_Request", full_classname_dest, 54) == 0);
  }
  interbotix_xs_msgs__srv__MotorGains_Request * ros_message = _ros_message;
  {  // cmd_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->cmd_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // kp_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "kp_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kp_pos = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ki_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "ki_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ki_pos = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // kd_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "kd_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kd_pos = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // k1
    PyObject * field = PyObject_GetAttrString(_pymsg, "k1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->k1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // k2
    PyObject * field = PyObject_GetAttrString(_pymsg, "k2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->k2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // kp_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "kp_vel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kp_vel = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ki_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "ki_vel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ki_vel = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interbotix_xs_msgs__srv__motor_gains__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorGains_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interbotix_xs_msgs.srv._motor_gains");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorGains_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interbotix_xs_msgs__srv__MotorGains_Request * ros_message = (interbotix_xs_msgs__srv__MotorGains_Request *)raw_ros_message;
  {  // cmd_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->cmd_type.data,
      strlen(ros_message->cmd_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kp_pos
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->kp_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kp_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ki_pos
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ki_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ki_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kd_pos
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->kd_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kd_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->k1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->k2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kp_vel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->kp_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kp_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ki_vel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ki_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ki_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interbotix_xs_msgs__srv__motor_gains__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interbotix_xs_msgs.srv._motor_gains.MotorGains_Response", full_classname_dest, 55) == 0);
  }
  interbotix_xs_msgs__srv__MotorGains_Response * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interbotix_xs_msgs__srv__motor_gains__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorGains_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interbotix_xs_msgs.srv._motor_gains");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorGains_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
