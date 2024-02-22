# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interbotix_xs_msgs:srv/OperatingModes.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OperatingModes_Request(type):
    """Metaclass of message 'OperatingModes_Request'."""

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
                'interbotix_xs_msgs.srv.OperatingModes_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__operating_modes__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__operating_modes__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__operating_modes__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__operating_modes__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__operating_modes__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OperatingModes_Request(metaclass=Metaclass_OperatingModes_Request):
    """Message class 'OperatingModes_Request'."""

    __slots__ = [
        '_cmd_type',
        '_name',
        '_mode',
        '_profile_type',
        '_profile_velocity',
        '_profile_acceleration',
    ]

    _fields_and_field_types = {
        'cmd_type': 'string',
        'name': 'string',
        'mode': 'string',
        'profile_type': 'string',
        'profile_velocity': 'int32',
        'profile_acceleration': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd_type = kwargs.get('cmd_type', str())
        self.name = kwargs.get('name', str())
        self.mode = kwargs.get('mode', str())
        self.profile_type = kwargs.get('profile_type', str())
        self.profile_velocity = kwargs.get('profile_velocity', int())
        self.profile_acceleration = kwargs.get('profile_acceleration', int())

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
        if self.mode != other.mode:
            return False
        if self.profile_type != other.profile_type:
            return False
        if self.profile_velocity != other.profile_velocity:
            return False
        if self.profile_acceleration != other.profile_acceleration:
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
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

    @property
    def profile_type(self):
        """Message field 'profile_type'."""
        return self._profile_type

    @profile_type.setter
    def profile_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'profile_type' field must be of type 'str'"
        self._profile_type = value

    @property
    def profile_velocity(self):
        """Message field 'profile_velocity'."""
        return self._profile_velocity

    @profile_velocity.setter
    def profile_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'profile_velocity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'profile_velocity' field must be an integer in [-2147483648, 2147483647]"
        self._profile_velocity = value

    @property
    def profile_acceleration(self):
        """Message field 'profile_acceleration'."""
        return self._profile_acceleration

    @profile_acceleration.setter
    def profile_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'profile_acceleration' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'profile_acceleration' field must be an integer in [-2147483648, 2147483647]"
        self._profile_acceleration = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OperatingModes_Response(type):
    """Metaclass of message 'OperatingModes_Response'."""

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
                'interbotix_xs_msgs.srv.OperatingModes_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__operating_modes__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__operating_modes__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__operating_modes__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__operating_modes__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__operating_modes__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OperatingModes_Response(metaclass=Metaclass_OperatingModes_Response):
    """Message class 'OperatingModes_Response'."""

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


class Metaclass_OperatingModes(type):
    """Metaclass of service 'OperatingModes'."""

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
                'interbotix_xs_msgs.srv.OperatingModes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__operating_modes

            from interbotix_xs_msgs.srv import _operating_modes
            if _operating_modes.Metaclass_OperatingModes_Request._TYPE_SUPPORT is None:
                _operating_modes.Metaclass_OperatingModes_Request.__import_type_support__()
            if _operating_modes.Metaclass_OperatingModes_Response._TYPE_SUPPORT is None:
                _operating_modes.Metaclass_OperatingModes_Response.__import_type_support__()


class OperatingModes(metaclass=Metaclass_OperatingModes):
    from interbotix_xs_msgs.srv._operating_modes import OperatingModes_Request as Request
    from interbotix_xs_msgs.srv._operating_modes import OperatingModes_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
