# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interbotix_xs_msgs:srv/TorqueEnable.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TorqueEnable_Request(type):
    """Metaclass of message 'TorqueEnable_Request'."""

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
            module = import_type_support('interbotix_xs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interbotix_xs_msgs.srv.TorqueEnable_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__torque_enable__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__torque_enable__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__torque_enable__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__torque_enable__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__torque_enable__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TorqueEnable_Request(metaclass=Metaclass_TorqueEnable_Request):
    """Message class 'TorqueEnable_Request'."""

    __slots__ = [
        '_cmd_type',
        '_name',
        '_enable',
    ]

    _fields_and_field_types = {
        'cmd_type': 'string',
        'name': 'string',
        'enable': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd_type = kwargs.get('cmd_type', str())
        self.name = kwargs.get('name', str())
        self.enable = kwargs.get('enable', bool())

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
        if self.cmd_type != other.cmd_type:
            return False
        if self.name != other.name:
            return False
        if self.enable != other.enable:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cmd_type(self):
        """Message field 'cmd_type'."""
        return self._cmd_type

    @cmd_type.setter
    def cmd_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cmd_type' field must be of type 'str'"
        self._cmd_type = value

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def enable(self):
        """Message field 'enable'."""
        return self._enable

    @enable.setter
    def enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable' field must be of type 'bool'"
        self._enable = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TorqueEnable_Response(type):
    """Metaclass of message 'TorqueEnable_Response'."""

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
            module = import_type_support('interbotix_xs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interbotix_xs_msgs.srv.TorqueEnable_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__torque_enable__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__torque_enable__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__torque_enable__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__torque_enable__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__torque_enable__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TorqueEnable_Response(metaclass=Metaclass_TorqueEnable_Response):
    """Message class 'TorqueEnable_Response'."""

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


class Metaclass_TorqueEnable(type):
    """Metaclass of service 'TorqueEnable'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interbotix_xs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interbotix_xs_msgs.srv.TorqueEnable')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__torque_enable

            from interbotix_xs_msgs.srv import _torque_enable
            if _torque_enable.Metaclass_TorqueEnable_Request._TYPE_SUPPORT is None:
                _torque_enable.Metaclass_TorqueEnable_Request.__import_type_support__()
            if _torque_enable.Metaclass_TorqueEnable_Response._TYPE_SUPPORT is None:
                _torque_enable.Metaclass_TorqueEnable_Response.__import_type_support__()


class TorqueEnable(metaclass=Metaclass_TorqueEnable):
    from interbotix_xs_msgs.srv._torque_enable import TorqueEnable_Request as Request
    from interbotix_xs_msgs.srv._torque_enable import TorqueEnable_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
