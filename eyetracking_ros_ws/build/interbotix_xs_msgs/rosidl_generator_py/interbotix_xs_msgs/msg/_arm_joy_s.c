// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interbotix_xs_msgs:msg/ArmJoy.idl
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
#include "interbotix_xs_msgs/msg/detail/arm_joy__struct.h"
#include "interbotix_xs_msgs/msg/detail/arm_joy__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interbotix_xs_msgs__msg__arm_joy__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("interbotix_xs_msgs.msg._arm_joy.ArmJoy", full_classname_dest, 38) == 0);
  }
  interbotix_xs_msgs__msg__ArmJoy * ros_message = _ros_message;
  {  // ee_x_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "ee_x_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ee_x_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ee_y_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "ee_y_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ee_y_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ee_z_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "ee_z_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ee_z_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ee_roll_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "ee_roll_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ee_roll_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ee_pitch_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "ee_pitch_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ee_pitch_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // waist_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "waist_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->waist_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gripper_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pose_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pose_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed_toggle_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_toggle_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed_toggle_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gripper_pwm_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_pwm_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gripper_pwm_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // torque_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->torque_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interbotix_xs_msgs__msg__arm_joy__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArmJoy */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interbotix_xs_msgs.msg._arm_joy");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArmJoy");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interbotix_xs_msgs__msg__ArmJoy * ros_message = (interbotix_xs_msgs__msg__ArmJoy *)raw_ros_message;
  {  // ee_x_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ee_x_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ee_x_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ee_y_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ee_y_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ee_y_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ee_z_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ee_z_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ee_z_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ee_roll_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ee_roll_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ee_roll_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ee_pitch_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ee_pitch_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ee_pitch_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waist_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->waist_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waist_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gripper_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pose_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->speed_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_toggle_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->speed_toggle_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_toggle_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper_pwm_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gripper_pwm_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_pwm_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torque_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->torque_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
