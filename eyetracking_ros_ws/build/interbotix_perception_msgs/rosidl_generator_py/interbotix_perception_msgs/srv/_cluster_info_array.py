# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interbotix_perception_msgs:srv/ClusterInfoArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ClusterInfoArray_Request(type):
    """Metaclass of message 'ClusterInfoArray_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interbotix_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interbotix_perception_msgs.srv.ClusterInfoArray_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cluster_info_array__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cluster_info_array__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cluster_info_array__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cluster_info_array__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cluster_info_array__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClusterInfoArray_Request(metaclass=Metaclass_ClusterInfoArray_Request):
    """Message class 'ClusterInfoArray_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ClusterInfoArray_Response(type):
    """Metaclass of message 'ClusterInfoArray_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interbotix_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interbotix_perception_msgs.srv.ClusterInfoArray_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cluster_info_array__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cluster_info_array__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cluster_info_array__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cluster_info_array__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cluster_info_array__response

            from interbotix_perception_msgs.msg import ClusterInfo
            if ClusterInfo.__class__._TYPE_SUPPORT is None:
                ClusterInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClusterInfoArray_Response(metaclass=Metaclass_ClusterInfoArray_Response):
    """Message class 'ClusterInfoArray_Response'."""

    __slots__ = [
        '_clusters',
    ]

    _fields_and_field_types = {
        'clusters': 'sequence<interbotix_perception_msgs/ClusterInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['interbotix_perception_msgs', 'msg'], 'ClusterInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.clusters = kwargs.get('clusters', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.clusters != other.clusters:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def clusters(self):
        """Message field 'clusters'."""
        return self._clusters

    @clusters.setter
    def clusters(self, value):
        if __debug__:
            from interbotix_perception_msgs.msg import ClusterInfo
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, ClusterInfo) for v in value) and
                 True), \
                "The 'clusters' field must be a set or sequence and each value of type 'ClusterInfo'"
        self._clusters = value


class Metaclass_ClusterInfoArray(type):
    """Metaclass of service 'ClusterInfoArray'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interbotix_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interbotix_perception_msgs.srv.ClusterInfoArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cluster_info_array

            from interbotix_perception_msgs.srv import _cluster_info_array
            if _cluster_info_array.Metaclass_ClusterInfoArray_Request._TYPE_SUPPORT is None:
                _cluster_info_array.Metaclass_ClusterInfoArray_Request.__import_type_support__()
            if _cluster_info_array.Metaclass_ClusterInfoArray_Response._TYPE_SUPPORT is None:
                _cluster_info_array.Metaclass_ClusterInfoArray_Response.__import_type_support__()


class ClusterInfoArray(metaclass=Metaclass_ClusterInfoArray):
    from interbotix_perception_msgs.srv._cluster_info_array import ClusterInfoArray_Request as Request
    from interbotix_perception_msgs.srv._cluster_info_array import ClusterInfoArray_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
