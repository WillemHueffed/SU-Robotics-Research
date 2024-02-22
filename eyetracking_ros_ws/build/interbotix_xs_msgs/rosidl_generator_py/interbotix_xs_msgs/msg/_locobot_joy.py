# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interbotix_xs_msgs:msg/LocobotJoy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocobotJoy(type):
    """Metaclass of message 'LocobotJoy'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESET_ODOM': 1,
        'PAN_CCW': 2,
        'PAN_CW': 3,
        'TILT_UP': 4,
        'TILT_DOWN': 5,
        'PAN_TILT_HOME': 6,
        'EE_X_INC': 7,
        'EE_X_DEC': 8,
        'EE_Y_INC': 9,
        'EE_Y_DEC': 10,
        'EE_Z_INC': 11,
        'EE_Z_DEC': 12,
        'EE_ROLL_CCW': 13,
        'EE_ROLL_CW': 14,
        'EE_PITCH_UP': 15,
        'EE_PITCH_DOWN': 16,
        'WAIST_CCW': 17,
        'WAIST_CW': 18,
        'GRIPPER_RELEASE': 19,
        'GRIPPER_GRASP': 20,
        'HOME_POSE': 21,
        'SLEEP_POSE': 22,
        'SPEED_INC': 23,
        'SPEED_DEC': 24,
        'SPEED_COARSE': 25,
        'SPEED_FINE': 26,
        'GRIPPER_PWM_INC': 27,
        'GRIPPER_PWM_DEC': 28,
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
                'interbotix_xs_msgs.msg.LocobotJoy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__locobot_joy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__locobot_joy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__locobot_joy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__locobot_joy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__locobot_joy

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESET_ODOM': cls.__constants['RESET_ODOM'],
            'PAN_CCW': cls.__constants['PAN_CCW'],
            'PAN_CW': cls.__constants['PAN_CW'],
            'TILT_UP': cls.__constants['TILT_UP'],
            'TILT_DOWN': cls.__constants['TILT_DOWN'],
            'PAN_TILT_HOME': cls.__constants['PAN_TILT_HOME'],
            'EE_X_INC': cls.__constants['EE_X_INC'],
            'EE_X_DEC': cls.__constants['EE_X_DEC'],
            'EE_Y_INC': cls.__constants['EE_Y_INC'],
            'EE_Y_DEC': cls.__constants['EE_Y_DEC'],
            'EE_Z_INC': cls.__constants['EE_Z_INC'],
            'EE_Z_DEC': cls.__constants['EE_Z_DEC'],
            'EE_ROLL_CCW': cls.__constants['EE_ROLL_CCW'],
            'EE_ROLL_CW': cls.__constants['EE_ROLL_CW'],
            'EE_PITCH_UP': cls.__constants['EE_PITCH_UP'],
            'EE_PITCH_DOWN': cls.__constants['EE_PITCH_DOWN'],
            'WAIST_CCW': cls.__constants['WAIST_CCW'],
            'WAIST_CW': cls.__constants['WAIST_CW'],
            'GRIPPER_RELEASE': cls.__constants['GRIPPER_RELEASE'],
            'GRIPPER_GRASP': cls.__constants['GRIPPER_GRASP'],
            'HOME_POSE': cls.__constants['HOME_POSE'],
            'SLEEP_POSE': cls.__constants['SLEEP_POSE'],
            'SPEED_INC': cls.__constants['SPEED_INC'],
            'SPEED_DEC': cls.__constants['SPEED_DEC'],
            'SPEED_COARSE': cls.__constants['SPEED_COARSE'],
            'SPEED_FINE': cls.__constants['SPEED_FINE'],
            'GRIPPER_PWM_INC': cls.__constants['GRIPPER_PWM_INC'],
            'GRIPPER_PWM_DEC': cls.__constants['GRIPPER_PWM_DEC'],
        }

    @property
    def RESET_ODOM(self):
        """Message constant 'RESET_ODOM'."""
        return Metaclass_LocobotJoy.__constants['RESET_ODOM']

    @property
    def PAN_CCW(self):
        """Message constant 'PAN_CCW'."""
        return Metaclass_LocobotJoy.__constants['PAN_CCW']

    @property
    def PAN_CW(self):
        """Message constant 'PAN_CW'."""
        return Metaclass_LocobotJoy.__constants['PAN_CW']

    @property
    def TILT_UP(self):
        """Message constant 'TILT_UP'."""
        return Metaclass_LocobotJoy.__constants['TILT_UP']

    @property
    def TILT_DOWN(self):
        """Message constant 'TILT_DOWN'."""
        return Metaclass_LocobotJoy.__constants['TILT_DOWN']

    @property
    def PAN_TILT_HOME(self):
        """Message constant 'PAN_TILT_HOME'."""
        return Metaclass_LocobotJoy.__constants['PAN_TILT_HOME']

    @property
    def EE_X_INC(self):
        """Message constant 'EE_X_INC'."""
        return Metaclass_LocobotJoy.__constants['EE_X_INC']

    @property
    def EE_X_DEC(self):
        """Message constant 'EE_X_DEC'."""
        return Metaclass_LocobotJoy.__constants['EE_X_DEC']

    @property
    def EE_Y_INC(self):
        """Message constant 'EE_Y_INC'."""
        return Metaclass_LocobotJoy.__constants['EE_Y_INC']

    @property
    def EE_Y_DEC(self):
        """Message constant 'EE_Y_DEC'."""
        return Metaclass_LocobotJoy.__constants['EE_Y_DEC']

    @property
    def EE_Z_INC(self):
        """Message constant 'EE_Z_INC'."""
        return Metaclass_LocobotJoy.__constants['EE_Z_INC']

    @property
    def EE_Z_DEC(self):
        """Message constant 'EE_Z_DEC'."""
        return Metaclass_LocobotJoy.__constants['EE_Z_DEC']

    @property
    def EE_ROLL_CCW(self):
        """Message constant 'EE_ROLL_CCW'."""
        return Metaclass_LocobotJoy.__constants['EE_ROLL_CCW']

    @property
    def EE_ROLL_CW(self):
        """Message constant 'EE_ROLL_CW'."""
        return Metaclass_LocobotJoy.__constants['EE_ROLL_CW']

    @property
    def EE_PITCH_UP(self):
        """Message constant 'EE_PITCH_UP'."""
        return Metaclass_LocobotJoy.__constants['EE_PITCH_UP']

    @property
    def EE_PITCH_DOWN(self):
        """Message constant 'EE_PITCH_DOWN'."""
        return Metaclass_LocobotJoy.__constants['EE_PITCH_DOWN']

    @property
    def WAIST_CCW(self):
        """Message constant 'WAIST_CCW'."""
        return Metaclass_LocobotJoy.__constants['WAIST_CCW']

    @property
    def WAIST_CW(self):
        """Message constant 'WAIST_CW'."""
        return Metaclass_LocobotJoy.__constants['WAIST_CW']

    @property
    def GRIPPER_RELEASE(self):
        """Message constant 'GRIPPER_RELEASE'."""
        return Metaclass_LocobotJoy.__constants['GRIPPER_RELEASE']

    @property
    def GRIPPER_GRASP(self):
        """Message constant 'GRIPPER_GRASP'."""
        return Metaclass_LocobotJoy.__constants['GRIPPER_GRASP']

    @property
    def HOME_POSE(self):
        """Message constant 'HOME_POSE'."""
        return Metaclass_LocobotJoy.__constants['HOME_POSE']

    @property
    def SLEEP_POSE(self):
        """Message constant 'SLEEP_POSE'."""
        return Metaclass_LocobotJoy.__constants['SLEEP_POSE']

    @property
    def SPEED_INC(self):
        """Message constant 'SPEED_INC'."""
        return Metaclass_LocobotJoy.__constants['SPEED_INC']

    @property
    def SPEED_DEC(self):
        """Message constant 'SPEED_DEC'."""
        return Metaclass_LocobotJoy.__constants['SPEED_DEC']

    @property
    def SPEED_COARSE(self):
        """Message constant 'SPEED_COARSE'."""
        return Metaclass_LocobotJoy.__constants['SPEED_COARSE']

    @property
    def SPEED_FINE(self):
        """Message constant 'SPEED_FINE'."""
        return Metaclass_LocobotJoy.__constants['SPEED_FINE']

    @property
    def GRIPPER_PWM_INC(self):
        """Message constant 'GRIPPER_PWM_INC'."""
        return Metaclass_LocobotJoy.__constants['GRIPPER_PWM_INC']

    @property
    def GRIPPER_PWM_DEC(self):
        """Message constant 'GRIPPER_PWM_DEC'."""
        return Metaclass_LocobotJoy.__constants['GRIPPER_PWM_DEC']


class LocobotJoy(metaclass=Metaclass_LocobotJoy):
    """
    Message class 'LocobotJoy'.

    Constants:
      RESET_ODOM
      PAN_CCW
      PAN_CW
      TILT_UP
      TILT_DOWN
      PAN_TILT_HOME
      EE_X_INC
      EE_X_DEC
      EE_Y_INC
      EE_Y_DEC
      EE_Z_INC
      EE_Z_DEC
      EE_ROLL_CCW
      EE_ROLL_CW
      EE_PITCH_UP
      EE_PITCH_DOWN
      WAIST_CCW
      WAIST_CW
      GRIPPER_RELEASE
      GRIPPER_GRASP
      HOME_POSE
      SLEEP_POSE
      SPEED_INC
      SPEED_DEC
      SPEED_COARSE
      SPEED_FINE
      GRIPPER_PWM_INC
      GRIPPER_PWM_DEC
    """

    __slots__ = [
        '_base_x_cmd',
        '_base_theta_cmd',
        '_base_reset_odom_cmd',
        '_pan_cmd',
        '_tilt_cmd',
        '_ee_x_cmd',
        '_ee_y_cmd',
        '_ee_z_cmd',
        '_ee_roll_cmd',
        '_ee_pitch_cmd',
        '_waist_cmd',
        '_gripper_cmd',
        '_pose_cmd',
        '_speed_cmd',
        '_speed_toggle_cmd',
        '_gripper_pwm_cmd',
    ]

    _fields_and_field_types = {
        'base_x_cmd': 'double',
        'base_theta_cmd': 'double',
        'base_reset_odom_cmd': 'int8',
        'pan_cmd': 'int8',
        'tilt_cmd': 'int8',
        'ee_x_cmd': 'int8',
        'ee_y_cmd': 'int8',
        'ee_z_cmd': 'int8',
        'ee_roll_cmd': 'int8',
        'ee_pitch_cmd': 'int8',
        'waist_cmd': 'int8',
        'gripper_cmd': 'int8',
        'pose_cmd': 'int8',
        'speed_cmd': 'int8',
        'speed_toggle_cmd': 'int8',
        'gripper_pwm_cmd': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.base_x_cmd = kwargs.get('base_x_cmd', float())
        self.base_theta_cmd = kwargs.get('base_theta_cmd', float())
        self.base_reset_odom_cmd = kwargs.get('base_reset_odom_cmd', int())
        self.pan_cmd = kwargs.get('pan_cmd', int())
        self.tilt_cmd = kwargs.get('tilt_cmd', int())
        self.ee_x_cmd = kwargs.get('ee_x_cmd', int())
        self.ee_y_cmd = kwargs.get('ee_y_cmd', int())
        self.ee_z_cmd = kwargs.get('ee_z_cmd', int())
        self.ee_roll_cmd = kwargs.get('ee_roll_cmd', int())
        self.ee_pitch_cmd = kwargs.get('ee_pitch_cmd', int())
        self.waist_cmd = kwargs.get('waist_cmd', int())
        self.gripper_cmd = kwargs.get('gripper_cmd', int())
        self.pose_cmd = kwargs.get('pose_cmd', int())
        self.speed_cmd = kwargs.get('speed_cmd', int())
        self.speed_toggle_cmd = kwargs.get('speed_toggle_cmd', int())
        self.gripper_pwm_cmd = kwargs.get('gripper_pwm_cmd', int())

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
        if self.base_x_cmd != other.base_x_cmd:
            return False
        if self.base_theta_cmd != other.base_theta_cmd:
            return False
        if self.base_reset_odom_cmd != other.base_reset_odom_cmd:
            return False
        if self.pan_cmd != other.pan_cmd:
            return False
        if self.tilt_cmd != other.tilt_cmd:
            return False
        if self.ee_x_cmd != other.ee_x_cmd:
            return False
        if self.ee_y_cmd != other.ee_y_cmd:
            return False
        if self.ee_z_cmd != other.ee_z_cmd:
            return False
        if self.ee_roll_cmd != other.ee_roll_cmd:
            return False
        if self.ee_pitch_cmd != other.ee_pitch_cmd:
            return False
        if self.waist_cmd != other.waist_cmd:
            return False
        if self.gripper_cmd != other.gripper_cmd:
            return False
        if self.pose_cmd != other.pose_cmd:
            return False
        if self.speed_cmd != other.speed_cmd:
            return False
        if self.speed_toggle_cmd != other.speed_toggle_cmd:
            return False
        if self.gripper_pwm_cmd != other.gripper_pwm_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def base_x_cmd(self):
        """Message field 'base_x_cmd'."""
        return self._base_x_cmd

    @base_x_cmd.setter
    def base_x_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_x_cmd' field must be of type 'float'"
        self._base_x_cmd = value

    @property
    def base_theta_cmd(self):
        """Message field 'base_theta_cmd'."""
        return self._base_theta_cmd

    @base_theta_cmd.setter
    def base_theta_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_theta_cmd' field must be of type 'float'"
        self._base_theta_cmd = value

    @property
    def base_reset_odom_cmd(self):
        """Message field 'base_reset_odom_cmd'."""
        return self._base_reset_odom_cmd

    @base_reset_odom_cmd.setter
    def base_reset_odom_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_reset_odom_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'base_reset_odom_cmd' field must be an integer in [-128, 127]"
        self._base_reset_odom_cmd = value

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
    def ee_x_cmd(self):
        """Message field 'ee_x_cmd'."""
        return self._ee_x_cmd

    @ee_x_cmd.setter
    def ee_x_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ee_x_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'ee_x_cmd' field must be an integer in [-128, 127]"
        self._ee_x_cmd = value

    @property
    def ee_y_cmd(self):
        """Message field 'ee_y_cmd'."""
        return self._ee_y_cmd

    @ee_y_cmd.setter
    def ee_y_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ee_y_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'ee_y_cmd' field must be an integer in [-128, 127]"
        self._ee_y_cmd = value

    @property
    def ee_z_cmd(self):
        """Message field 'ee_z_cmd'."""
        return self._ee_z_cmd

    @ee_z_cmd.setter
    def ee_z_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ee_z_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'ee_z_cmd' field must be an integer in [-128, 127]"
        self._ee_z_cmd = value

    @property
    def ee_roll_cmd(self):
        """Message field 'ee_roll_cmd'."""
        return self._ee_roll_cmd

    @ee_roll_cmd.setter
    def ee_roll_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ee_roll_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'ee_roll_cmd' field must be an integer in [-128, 127]"
        self._ee_roll_cmd = value

    @property
    def ee_pitch_cmd(self):
        """Message field 'ee_pitch_cmd'."""
        return self._ee_pitch_cmd

    @ee_pitch_cmd.setter
    def ee_pitch_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ee_pitch_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'ee_pitch_cmd' field must be an integer in [-128, 127]"
        self._ee_pitch_cmd = value

    @property
    def waist_cmd(self):
        """Message field 'waist_cmd'."""
        return self._waist_cmd

    @waist_cmd.setter
    def waist_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'waist_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'waist_cmd' field must be an integer in [-128, 127]"
        self._waist_cmd = value

    @property
    def gripper_cmd(self):
        """Message field 'gripper_cmd'."""
        return self._gripper_cmd

    @gripper_cmd.setter
    def gripper_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gripper_cmd' field must be an integer in [-128, 127]"
        self._gripper_cmd = value

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

    @property
    def gripper_pwm_cmd(self):
        """Message field 'gripper_pwm_cmd'."""
        return self._gripper_pwm_cmd

    @gripper_pwm_cmd.setter
    def gripper_pwm_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_pwm_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gripper_pwm_cmd' field must be an integer in [-128, 127]"
        self._gripper_pwm_cmd = value
