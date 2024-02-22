// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interbotix_perception_msgs:srv/ClusterInfoArray.idl
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
#include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.h"
#include "interbotix_perception_msgs/srv/detail/cluster_info_array__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interbotix_perception_msgs__srv__cluster_info_array__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
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
    assert(strncmp("interbotix_perception_msgs.srv._cluster_info_array.ClusterInfoArray_Request", full_classname_dest, 75) == 0);
  }
  interbotix_perception_msgs__srv__ClusterInfoArray_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interbotix_perception_msgs__srv__cluster_info_array__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ClusterInfoArray_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interbotix_perception_msgs.srv._cluster_info_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ClusterInfoArray_Request");
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
// #include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/cluster_info_array__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "interbotix_perception_msgs/msg/detail/cluster_info__functions.h"
// end nested array functions include
bool interbotix_perception_msgs__msg__cluster_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interbotix_perception_msgs__msg__cluster_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interbotix_perception_msgs__srv__cluster_info_array__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("interbotix_perception_msgs.srv._cluster_info_array.ClusterInfoArray_Response", full_classname_dest, 76) == 0);
  }
  interbotix_perception_msgs__srv__ClusterInfoArray_Response * ros_message = _ros_message;
  {  // clusters
    PyObject * field = PyObject_GetAttrString(_pymsg, "clusters");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'clusters'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!interbotix_perception_msgs__msg__ClusterInfo__Sequence__init(&(ros_message->clusters), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create interbotix_perception_msgs__msg__ClusterInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    interbotix_perception_msgs__msg__ClusterInfo * dest = ros_message->clusters.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!interbotix_perception_msgs__msg__cluster_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interbotix_perception_msgs__srv__cluster_info_array__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ClusterInfoArray_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interbotix_perception_msgs.srv._cluster_info_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ClusterInfoArray_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interbotix_perception_msgs__srv__ClusterInfoArray_Response * ros_message = (interbotix_perception_msgs__srv__ClusterInfoArray_Response *)raw_ros_message;
  {  // clusters
    PyObject * field = NULL;
    size_t size = ros_message->clusters.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    interbotix_perception_msgs__msg__ClusterInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->clusters.data[i]);
      PyObject * pyitem = interbotix_perception_msgs__msg__cluster_info__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "clusters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
