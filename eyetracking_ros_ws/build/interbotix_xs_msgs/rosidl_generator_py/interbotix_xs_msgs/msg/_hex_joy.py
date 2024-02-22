# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interbotix_xs_msgs:msg/HexJoy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HexJoy(type):
    """Metaclass of message 'HexJoy'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'WORLD_X_INC': 1,
        'WORLD_X_DEC': 2,
        'WORLD_Y_INC': 3,
        'WORLD_Y_DEC': 4,
        'WORLD_YAW_CCW': 5,
        'WORLD_YAW_CW': 6,
        'PLACE_X_INC': 7,
        'PLACE_X_DEC': 8,
        'PLACE_Y_INC': 9,
        'PLACE_Y_DEC': 10,
        'PLACE_Z_INC': 11,
        'PLACE_Z_DEC': 12,
        'PLACE_ROLL_CCW': 13,
        'PLACE_ROLL_CW': 14,
        'PLACE_PITCH_UP': 15,
        'PLACE_PITCH_DOWN': 16,
        'MOVE_HEXAPOD': 17,
        'MOVE_LEG': 18,
        'HOME_POSE': 19,
        'SLEEP_POSE': 20,
        'GAIT_NEXT': 21,
        'GAIT_PREVIOUS': 22,
        'LEG_NEXT': 23,
        'LEG_PREVIOUS': 24,
        'WIDEN_STANCE': 25,
        'NARROW_STANCE': 26,
        'REBOOT_MOTORS': 27,
        'SET_HOME_POSE': 28,
        'SPEED_INC': 29,
        'SPEED_DEC': 30,
        'SPEED_COARSE': 31,
        'SPEED_FINE': 32,
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
                'interbotix_xs_msgs.msg.HexJoy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hex_joy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hex_joy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hex_joy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hex_joy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hex_joy

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'WORLD_X_INC': cls.__constants['WORLD_X_INC'],
            'WORLD_X_DEC': cls.__constants['WORLD_X_DEC'],
            'WORLD_Y_INC': cls.__constants['WORLD_Y_INC'],
            'WORLD_Y_DEC': cls.__constants['WORLD_Y_DEC'],
            'WORLD_YAW_CCW': cls.__constants['WORLD_YAW_CCW'],
            'WORLD_YAW_CW': cls.__constants['WORLD_YAW_CW'],
            'PLACE_X_INC': cls.__constants['PLACE_X_INC'],
            'PLACE_X_DEC': cls.__constants['PLACE_X_DEC'],
            'PLACE_Y_INC': cls.__constants['PLACE_Y_INC'],
            'PLACE_Y_DEC': cls.__constants['PLACE_Y_DEC'],
            'PLACE_Z_INC': cls.__constants['PLACE_Z_INC'],
            'PLACE_Z_DEC': cls.__constants['PLACE_Z_DEC'],
            'PLACE_ROLL_CCW': cls.__constants['PLACE_ROLL_CCW'],
            'PLACE_ROLL_CW': cls.__constants['PLACE_ROLL_CW'],
            'PLACE_PITCH_UP': cls.__constants['PLACE_PITCH_UP'],
            'PLACE_PITCH_DOWN': cls.__constants['PLACE_PITCH_DOWN'],
            'MOVE_HEXAPOD': cls.__constants['MOVE_HEXAPOD'],
            'MOVE_LEG': cls.__constants['MOVE_LEG'],
            'HOME_POSE': cls.__constants['HOME_POSE'],
            'SLEEP_POSE': cls.__constants['SLEEP_POSE'],
            'GAIT_NEXT': cls.__constants['GAIT_NEXT'],
            'GAIT_PREVIOUS': cls.__constants['GAIT_PREVIOUS'],
            'LEG_NEXT': cls.__constants['LEG_NEXT'],
            'LEG_PREVIOUS': cls.__constants['LEG_PREVIOUS'],
            'WIDEN_STANCE': cls.__constants['WIDEN_STANCE'],
            'NARROW_STANCE': cls.__constants['NARROW_STANCE'],
            'REBOOT_MOTORS': cls.__constants['REBOOT_MOTORS'],
            'SET_HOME_POSE': cls.__constants['SET_HOME_POSE'],
            'SPEED_INC': cls.__constants['SPEED_INC'],
            'SPEED_DEC': cls.__constants['SPEED_DEC'],
            'SPEED_COARSE': cls.__constants['SPEED_COARSE'],
            'SPEED_FINE': cls.__constants['SPEED_FINE'],
        }

    @property
    def WORLD_X_INC(self):
        """Message constant 'WORLD_X_INC'."""
        return Metaclass_HexJoy.__constants['WORLD_X_INC']

    @property
    def WORLD_X_DEC(self):
        """Message constant 'WORLD_X_DEC'."""
        return Metaclass_HexJoy.__constants['WORLD_X_DEC']

    @property
    def WORLD_Y_INC(self):
        """Message constant 'WORLD_Y_INC'."""
        return Metaclass_HexJoy.__constants['WORLD_Y_INC']

    @property
    def WORLD_Y_DEC(self):
        """Message constant 'WORLD_Y_DEC'."""
        return Metaclass_HexJoy.__constants['WORLD_Y_DEC']

    @property
    def WORLD_YAW_CCW(self):
        """Message constant 'WORLD_YAW_CCW'."""
        return Metaclass_HexJoy.__constants['WORLD_YAW_CCW']

    @property
    def WORLD_YAW_CW(self):
        """Message constant 'WORLD_YAW_CW'."""
        return Metaclass_HexJoy.__constants['WORLD_YAW_CW']

    @property
    def PLACE_X_INC(self):
        """Message constant 'PLACE_X_INC'."""
        return Metaclass_HexJoy.__constants['PLACE_X_INC']

    @property
    def PLACE_X_DEC(self):
        """Message constant 'PLACE_X_DEC'."""
        return Metaclass_HexJoy.__constants['PLACE_X_DEC']

    @property
    def PLACE_Y_INC(self):
        """Message constant 'PLACE_Y_INC'."""
        return Metaclass_HexJoy.__constants['PLACE_Y_INC']

    @property
    def PLACE_Y_DEC(self):
        """Message constant 'PLACE_Y_DEC'."""
        return Metaclass_HexJoy.__constants['PLACE_Y_DEC']

    @property
    def PLACE_Z_INC(self):
        """Message constant 'PLACE_Z_INC'."""
        return Metaclass_HexJoy.__constants['PLACE_Z_INC']

    @property
    def PLACE_Z_DEC(self):
        """Message constant 'PLACE_Z_DEC'."""
        return Metaclass_HexJoy.__constants['PLACE_Z_DEC']

    @property
    def PLACE_ROLL_CCW(self):
        """Message constant 'PLACE_ROLL_CCW'."""
        return Metaclass_HexJoy.__constants['PLACE_ROLL_CCW']

    @property
    def PLACE_ROLL_CW(self):
        """Message constant 'PLACE_ROLL_CW'."""
        return Metaclass_HexJoy.__constants['PLACE_ROLL_CW']

    @property
    def PLACE_PITCH_UP(self):
        """Message constant 'PLACE_PITCH_UP'."""
        return Metaclass_HexJoy.__constants['PLACE_PITCH_UP']

    @property
    def PLACE_PITCH_DOWN(self):
        """Message constant 'PLACE_PITCH_DOWN'."""
        return Metaclass_HexJoy.__constants['PLACE_PITCH_DOWN']

    @property
    def MOVE_HEXAPOD(self):
        """Message constant 'MOVE_HEXAPOD'."""
        return Metaclass_HexJoy.__constants['MOVE_HEXAPOD']

    @property
    def MOVE_LEG(self):
        """Message constant 'MOVE_LEG'."""
        return Metaclass_HexJoy.__constants['MOVE_LEG']

    @property
    def HOME_POSE(self):
        """Message constant 'HOME_POSE'."""
        return Metaclass_HexJoy.__constants['HOME_POSE']

    @property
    def SLEEP_POSE(self):
        """Message constant 'SLEEP_POSE'."""
        return Metaclass_HexJoy.__constants['SLEEP_POSE']

    @property
    def GAIT_NEXT(self):
        """Message constant 'GAIT_NEXT'."""
        return Metaclass_HexJoy.__constants['GAIT_NEXT']

    @property
    def GAIT_PREVIOUS(self):
        """Message constant 'GAIT_PREVIOUS'."""
        return Metaclass_HexJoy.__constants['GAIT_PREVIOUS']

    @property
    def LEG_NEXT(self):
        """Message constant 'LEG_NEXT'."""
        return Metaclass_HexJoy.__constants['LEG_NEXT']

    @property
    def LEG_PREVIOUS(self):
        """Message constant 'LEG_PREVIOUS'."""
        return Metaclass_HexJoy.__constants['LEG_PREVIOUS']

    @property
    def WIDEN_STANCE(self):
        """Message constant 'WIDEN_STANCE'."""
        return Metaclass_HexJoy.__constants['WIDEN_STANCE']

    @property
    def NARROW_STANCE(self):
        """Message constant 'NARROW_STANCE'."""
        return Metaclass_HexJoy.__constants['NARROW_STANCE']

    @property
    def REBOOT_MOTORS(self):
        """Message constant 'REBOOT_MOTORS'."""
        return Metaclass_HexJoy.__constants['REBOOT_MOTORS']

    @property
    def SET_HOME_POSE(self):
        """Message constant 'SET_HOME_POSE'."""
        return Metaclass_HexJoy.__constants['SET_HOME_POSE']

    @property
    def SPEED_INC(self):
        """Message constant 'SPEED_INC'."""
        return Metaclass_HexJoy.__constants['SPEED_INC']

    @property
    def SPEED_DEC(self):
        """Message constant 'SPEED_DEC'."""
        return Metaclass_HexJoy.__constants['SPEED_DEC']

    @property
    def SPEED_COARSE(self):
        """Message constant 'SPEED_COARSE'."""
        return Metaclass_HexJoy.__constants['SPEED_COARSE']

    @property
    def SPEED_FINE(self):
        """Message constant 'SPEED_FINE'."""
        return Metaclass_HexJoy.__constants['SPEED_FINE']


class HexJoy(metaclass=Metaclass_HexJoy):
    """
    Message class 'HexJoy'.

    Constants:
      WORLD_X_INC
      WORLD_X_DEC
      WORLD_Y_INC
      WORLD_Y_DEC
      WORLD_YAW_CCW
      WORLD_YAW_CW
      PLACE_X_INC
      PLACE_X_DEC
      PLACE_Y_INC
      PLACE_Y_DEC
      PLACE_Z_INC
      PLACE_Z_DEC
      PLACE_ROLL_CCW
      PLACE_ROLL_CW
      PLACE_PITCH_UP
      PLACE_PITCH_DOWN
      MOVE_HEXAPOD
      MOVE_LEG
      HOME_POSE
      SLEEP_POSE
      GAIT_NEXT
      GAIT_PREVIOUS
      LEG_NEXT
      LEG_PREVIOUS
      WIDEN_STANCE
      NARROW_STANCE
      REBOOT_MOTORS
      SET_HOME_POSE
      SPEED_INC
      SPEED_DEC
      SPEED_COARSE
      SPEED_FINE
    """

    __slots__ = [
        '_world_x_cmd',
        '_world_y_cmd',
        '_world_yaw_cmd',
        '_place_x_cmd',
        '_place_y_cmd',
        '_place_z_cmd',
        '_place_roll_cmd',
        '_place_pitch_cmd',
        '_pose_cmd',
        '_move_type_cmd',
        '_gait_toggle_cmd',
        '_leg_toggle_cmd',
        '_stance_cmd',
        '_reboot_cmd',
        '_set_home_pose_cmd',
        '_speed_cmd',
        '_speed_toggle_cmd',
    ]

    _fields_and_field_types = {
        'world_x_cmd': 'int8',
        'world_y_cmd': 'int8',
        'world_yaw_cmd': 'int8',
        'place_x_cmd': 'int8',
        'place_y_cmd': 'int8',
        'place_z_cmd': 'int8',
        'place_roll_cmd': 'int8',
        'place_pitch_cmd': 'int8',
        'pose_cmd': 'int8',
        'move_type_cmd': 'int8',
        'gait_toggle_cmd': 'int8',
        'leg_toggle_cmd': 'int8',
        'stance_cmd': 'int8',
        'reboot_cmd': 'int8',
        'set_home_pose_cmd': 'int8',
        'speed_cmd': 'int8',
        'speed_toggle_cmd': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.world_x_cmd = kwargs.get('world_x_cmd', int())
        self.world_y_cmd = kwargs.get('world_y_cmd', int())
        self.world_yaw_cmd = kwargs.get('world_yaw_cmd', int())
        self.place_x_cmd = kwargs.get('place_x_cmd', int())
        self.place_y_cmd = kwargs.get('place_y_cmd', int())
        self.place_z_cmd = kwargs.get('place_z_cmd', int())
        self.place_roll_cmd = kwargs.get('place_roll_cmd', int())
        self.place_pitch_cmd = kwargs.get('place_pitch_cmd', int())
        self.pose_cmd = kwargs.get('pose_cmd', int())
        self.move_type_cmd = kwargs.get('move_type_cmd', int())
        self.gait_toggle_cmd = kwargs.get('gait_toggle_cmd', int())
        self.leg_toggle_cmd = kwargs.get('leg_toggle_cmd', int())
        self.stance_cmd = kwargs.get('stance_cmd', int())
        self.reboot_cmd = kwargs.get('reboot_cmd', int())
        self.set_home_pose_cmd = kwargs.get('set_home_pose_cmd', int())
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
        if self.world_x_cmd != other.world_x_cmd:
            return False
        if self.world_y_cmd != other.world_y_cmd:
            return False
        if self.world_yaw_cmd != other.world_yaw_cmd:
            return False
        if self.place_x_cmd != other.place_x_cmd:
            return False
        if self.place_y_cmd != other.place_y_cmd:
            return False
        if self.place_z_cmd != other.place_z_cmd:
            return False
        if self.place_roll_cmd != other.place_roll_cmd:
            return False
        if self.place_pitch_cmd != other.place_pitch_cmd:
            return False
        if self.pose_cmd != other.pose_cmd:
            return False
        if self.move_type_cmd != other.move_type_cmd:
            return False
        if self.gait_toggle_cmd != other.gait_toggle_cmd:
            return False
        if self.leg_toggle_cmd != other.leg_toggle_cmd:
            return False
        if self.stance_cmd != other.stance_cmd:
            return False
        if self.reboot_cmd != other.reboot_cmd:
            return False
        if self.set_home_pose_cmd != other.set_home_pose_cmd:
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
    def world_x_cmd(self):
        """Message field 'world_x_cmd'."""
        return self._world_x_cmd

    @world_x_cmd.setter
    def world_x_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'world_x_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'world_x_cmd' field must be an integer in [-128, 127]"
        self._world_x_cmd = value

    @property
    def world_y_cmd(self):
        """Message field 'world_y_cmd'."""
        return self._world_y_cmd

    @world_y_cmd.setter
    def world_y_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'world_y_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'world_y_cmd' field must be an integer in [-128, 127]"
        self._world_y_cmd = value

    @property
    def world_yaw_cmd(self):
        """Message field 'world_yaw_cmd'."""
        return self._world_yaw_cmd

    @world_yaw_cmd.setter
    def world_yaw_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'world_yaw_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'world_yaw_cmd' field must be an integer in [-128, 127]"
        self._world_yaw_cmd = value

    @property
    def place_x_cmd(self):
        """Message field 'place_x_cmd'."""
        return self._place_x_cmd

    @place_x_cmd.setter
    def place_x_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'place_x_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'place_x_cmd' field must be an integer in [-128, 127]"
        self._place_x_cmd = value

    @property
    def place_y_cmd(self):
        """Message field 'place_y_cmd'."""
        return self._place_y_cmd

    @place_y_cmd.setter
    def place_y_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'place_y_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'place_y_cmd' field must be an integer in [-128, 127]"
        self._place_y_cmd = value

    @property
    def place_z_cmd(self):
        """Message field 'place_z_cmd'."""
        return self._place_z_cmd

    @place_z_cmd.setter
    def place_z_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'place_z_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'place_z_cmd' field must be an integer in [-128, 127]"
        self._place_z_cmd = value

    @property
    def place_roll_cmd(self):
        """Message field 'place_roll_cmd'."""
        return self._place_roll_cmd

    @place_roll_cmd.setter
    def place_roll_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'place_roll_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'place_roll_cmd' field must be an integer in [-128, 127]"
        self._place_roll_cmd = value

    @property
    def place_pitch_cmd(self):
        """Message field 'place_pitch_cmd'."""
        return self._place_pitch_cmd

    @place_pitch_cmd.setter
    def place_pitch_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'place_pitch_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'place_pitch_cmd' field must be an integer in [-128, 127]"
        self._place_pitch_cmd = value

    @property
    def pose_cmd(self):
        """Message field 'pose_cmd'."""
        return self._pose_cmd

    @pose_cmd.setter
    def pose_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pose_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pose_cmd' field must be an integer in [-128, 127]"
        self._pose_cmd = value

    @property
    def move_type_cmd(self):
        """Message field 'move_type_cmd'."""
        return self._move_type_cmd

    @move_type_cmd.setter
    def move_type_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'move_type_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'move_type_cmd' field must be an integer in [-128, 127]"
        self._move_type_cmd = value

    @property
    def gait_toggle_cmd(self):
        """Message field 'gait_toggle_cmd'."""
        return self._gait_toggle_cmd

    @gait_toggle_cmd.setter
    def gait_toggle_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gait_toggle_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gait_toggle_cmd' field must be an integer in [-128, 127]"
        self._gait_toggle_cmd = value

    @property
    def leg_toggle_cmd(self):
        """Message field 'leg_toggle_cmd'."""
        return self._leg_toggle_cmd

    @leg_toggle_cmd.setter
    def leg_toggle_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'leg_toggle_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'leg_toggle_cmd' field must be an integer in [-128, 127]"
        self._leg_toggle_cmd = value

    @property
    def stance_cmd(self):
        """Message field 'stance_cmd'."""
        return self._stance_cmd

    @stance_cmd.setter
    def stance_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stance_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'stance_cmd' field must be an integer in [-128, 127]"
        self._stance_cmd = value

    @property
    def reboot_cmd(self):
        """Message field 'reboot_cmd'."""
        return self._reboot_cmd

    @reboot_cmd.setter
    def reboot_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reboot_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'reboot_cmd' field must be an integer in [-128, 127]"
        self._reboot_cmd = value

    @property
    def set_home_pose_cmd(self):
        """Message field 'set_home_pose_cmd'."""
        return self._set_home_pose_cmd

    @set_home_pose_cmd.setter
    def set_home_pose_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_home_pose_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'set_home_pose_cmd' field must be an integer in [-128, 127]"
        self._set_home_pose_cmd = value

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
