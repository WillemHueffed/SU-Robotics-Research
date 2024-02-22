// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interbotix_perception_msgs:srv/FilterParams.idl
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
#include "interbotix_perception_msgs/srv/detail/filter_params__struct.h"
#include "interbotix_perception_msgs/srv/detail/filter_params__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interbotix_perception_msgs__srv__filter_params__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("interbotix_perception_msgs.srv._filter_params.FilterParams_Request", full_classname_dest, 66) == 0);
  }
  interbotix_perception_msgs__srv__FilterParams_Request * ros_message = _ros_message;
  {  // x_filter_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_filter_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_filter_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_filter_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_filter_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_filter_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_filter_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_filter_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_filter_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_filter_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_filter_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_filter_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_filter_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_filter_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_filter_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_filter_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_filter_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_filter_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // voxel_leaf_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "voxel_leaf_size");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voxel_leaf_size = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // plane_max_iter
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_max_iter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plane_max_iter = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // plane_dist_thresh
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_dist_thresh");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->plane_dist_thresh = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ror_radius_search
    PyObject * field = PyObject_GetAttrString(_pymsg, "ror_radius_search");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ror_radius_search = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ror_min_neighbors
    PyObject * field = PyObject_GetAttrString(_pymsg, "ror_min_neighbors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ror_min_neighbors = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cluster_tol
    PyObject * field = PyObject_GetAttrString(_pymsg, "cluster_tol");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cluster_tol = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cluster_min_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "cluster_min_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cluster_min_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cluster_max_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "cluster_max_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cluster_max_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interbotix_perception_msgs__srv__filter_params__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FilterParams_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interbotix_perception_msgs.srv._filter_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FilterParams_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interbotix_perception_msgs__srv__FilterParams_Request * ros_message = (interbotix_perception_msgs__srv__FilterParams_Request *)raw_ros_message;
  {  // x_filter_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_filter_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_filter_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_filter_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_filter_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_filter_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_filter_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_filter_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_filter_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_filter_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_filter_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_filter_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_filter_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_filter_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_filter_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_filter_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_filter_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_filter_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voxel_leaf_size
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voxel_leaf_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voxel_leaf_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plane_max_iter
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plane_max_iter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plane_max_iter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plane_dist_thresh
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->plane_dist_thresh);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plane_dist_thresh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ror_radius_search
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ror_radius_search);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ror_radius_search", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ror_min_neighbors
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ror_min_neighbors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ror_min_neighbors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cluster_tol
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cluster_tol);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cluster_tol", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cluster_min_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cluster_min_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cluster_min_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cluster_max_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cluster_max_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cluster_max_size", field);
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
// #include "interbotix_perception_msgs/srv/detail/filter_params__struct.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/filter_params__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interbotix_perception_msgs__srv__filter_params__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("interbotix_perception_msgs.srv._filter_params.FilterParams_Response", full_classname_dest, 67) == 0);
  }
  interbotix_perception_msgs__srv__FilterParams_Response * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interbotix_perception_msgs__srv__filter_params__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FilterParams_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interbotix_perception_msgs.srv._filter_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FilterParams_Response");
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
