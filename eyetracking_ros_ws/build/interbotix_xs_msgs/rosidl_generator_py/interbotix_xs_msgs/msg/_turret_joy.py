# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interbotix_xs_msgs:msg/TurretJoy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TurretJoy(type):
    """Metaclass of message 'TurretJoy'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PAN_CCW': 1,
        'PAN_CW': 2,
        'TILT_UP': 3,
        'TILT_DOWN': 4,
        'PAN_TILT_HOME': 5,
        'SPEED_INC': 6,
        'SPEED_DEC': 7,
        'SPEED_COARSE': 8,
        'SPEED_FINE': 9,
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
                'interbotix_xs_msgs.msg.TurretJoy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__turret_joy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__turret_joy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__turret_joy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__turret_joy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__turret_joy

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PAN_CCW': cls.__constants['PAN_CCW'],
            'PAN_CW': cls.__constants['PAN_CW'],
            'TILT_UP': cls.__constants['TILT_UP'],
            'TILT_DOWN': cls.__constants['TILT_DOWN'],
            'PAN_TILT_HOME': cls.__constants['PAN_TILT_HOME'],
            'SPEED_INC': cls.__constants['SPEED_INC'],
            'SPEED_DEC': cls.__constants['SPEED_DEC'],
            'SPEED_COARSE': cls.__constants['SPEED_COARSE'],
            'SPEED_FINE': cls.__constants['SPEED_FINE'],
        }

    @property
    def PAN_CCW(self):
        """Message constant 'PAN_CCW'."""
        return Metaclass_TurretJoy.__constants['PAN_CCW']

    @property
    def PAN_CW(self):
        """Message constant 'PAN_CW'."""
        return Metaclass_TurretJoy.__constants['PAN_CW']

    @property
    def TILT_UP(self):
        """Message constant 'TILT_UP'."""
        return Metaclass_TurretJoy.__constants['TILT_UP']

    @property
    def TILT_DOWN(self):
        """Message constant 'TILT_DOWN'."""
        return Metaclass_TurretJoy.__constants['TILT_DOWN']

    @property
    def PAN_TILT_HOME(self):
        """Message constant 'PAN_TILT_HOME'."""
        return Metaclass_TurretJoy.__constants['PAN_TILT_HOME']

    @property
    def SPEED_INC(self):
        """Message constant 'SPEED_INC'."""
        return Metaclass_TurretJoy.__constants['SPEED_INC']

    @property
    def SPEED_DEC(self):
        """Message constant 'SPEED_DEC'."""
        return Metaclass_TurretJoy.__constants['SPEED_DEC']

    @property
    def SPEED_COARSE(self):
        """Message constant 'SPEED_COARSE'."""
        return Metaclass_TurretJoy.__constants['SPEED_COARSE']

    @property
    def SPEED_FINE(self):
        """Message constant 'SPEED_FINE'."""
        return Metaclass_TurretJoy.__constants['SPEED_FINE']


class TurretJoy(metaclass=Metaclass_TurretJoy):
    """
    Message class 'TurretJoy'.

    Constants:
      PAN_CCW
      PAN_CW
      TILT_UP
      TILT_DOWN
      PAN_TILT_HOME
      SPEED_INC
      SPEED_DEC
      SPEED_COARSE
      SPEED_FINE
    """

    __slots__ = [
        '_pan_cmd',
        '_tilt_cmd',
        '_speed_cmd',
        '_speed_toggle_cmd',
    ]

    _fields_and_field_types = {
        'pan_cmd': 'int8',
        'tilt_cmd': 'int8',
        'speed_cmd': 'int8',
        'speed_toggle_cmd': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pan_cmd = kwargs.get('pan_cmd', int())
        self.tilt_cmd = kwargs.get('tilt_cmd', int())
        self.speed_cmd = kwargs.get('speed_cmd', int())
        self.speed_toggle_cmd = kwargs.get('speed_toggle_cmd', int())

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
        if self.pan_cmd != other.pan_cmd:
            return False
        if self.tilt_cmd != other.tilt_cmd:
            return False
        if self.speed_cmd != other.speed_cmd:
            return False
        if self.speed_toggle_cmd != other.speed_toggle_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pan_cmd(self):
        """Message field 'pan_cmd'."""
        return self._pan_cmd

    @pan_cmd.setter
    def pan_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pan_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pan_cmd' field must be an integer in [-128, 127]"
        self._pan_cmd = value

    @property
    def tilt_cmd(self):
        """Message field 'tilt_cmd'."""
        return self._tilt_cmd

    @tilt_cmd.setter
    def tilt_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tilt_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'tilt_cmd' field must be an integer in [-128, 127]"
        self._tilt_cmd = value

    @property
    def speed_cmd(self):
        """Message field 'speed_cmd'."""
        return self._speed_cmd

    @speed_cmd.setter
    def speed_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'speed_cmd' field must be an integer in [-128, 127]"
        self._speed_cmd = value

    @property
    def speed_toggle_cmd(self):
        """Message field 'speed_toggle_cmd'."""
        return self._speed_toggle_cmd

    @speed_toggle_cmd.setter
    def speed_toggle_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_toggle_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'speed_toggle_cmd' field must be an integer in [-128, 127]"
        self._speed_toggle_cmd = value
