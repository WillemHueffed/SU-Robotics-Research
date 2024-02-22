# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interbotix_xs_msgs:msg/ArmJoy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmJoy(type):
    """Metaclass of message 'ArmJoy'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EE_X_INC': 1,
        'EE_X_DEC': 2,
        'EE_Y_INC': 3,
        'EE_Y_DEC': 4,
        'EE_Z_INC': 5,
        'EE_Z_DEC': 6,
        'EE_ROLL_CCW': 7,
        'EE_ROLL_CW': 8,
        'EE_PITCH_UP': 9,
        'EE_PITCH_DOWN': 10,
        'WAIST_CCW': 11,
        'WAIST_CW': 12,
        'GRIPPER_RELEASE': 13,
        'GRIPPER_GRASP': 14,
        'HOME_POSE': 15,
        'SLEEP_POSE': 16,
        'SPEED_INC': 17,
        'SPEED_DEC': 18,
        'SPEED_COARSE': 19,
        'SPEED_FINE': 20,
        'GRIPPER_PWM_INC': 21,
        'GRIPPER_PWM_DEC': 22,
        'TORQUE_ON': 23,
        'TORQUE_OFF': 24,
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
                'interbotix_xs_msgs.msg.ArmJoy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_joy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_joy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_joy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_joy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_joy

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
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
            'TORQUE_ON': cls.__constants['TORQUE_ON'],
            'TORQUE_OFF': cls.__constants['TORQUE_OFF'],
        }

    @property
    def EE_X_INC(self):
        """Message constant 'EE_X_INC'."""
        return Metaclass_ArmJoy.__constants['EE_X_INC']

    @property
    def EE_X_DEC(self):
        """Message constant 'EE_X_DEC'."""
        return Metaclass_ArmJoy.__constants['EE_X_DEC']

    @property
    def EE_Y_INC(self):
        """Message constant 'EE_Y_INC'."""
        return Metaclass_ArmJoy.__constants['EE_Y_INC']

    @property
    def EE_Y_DEC(self):
        """Message constant 'EE_Y_DEC'."""
        return Metaclass_ArmJoy.__constants['EE_Y_DEC']

    @property
    def EE_Z_INC(self):
        """Message constant 'EE_Z_INC'."""
        return Metaclass_ArmJoy.__constants['EE_Z_INC']

    @property
    def EE_Z_DEC(self):
        """Message constant 'EE_Z_DEC'."""
        return Metaclass_ArmJoy.__constants['EE_Z_DEC']

    @property
    def EE_ROLL_CCW(self):
        """Message constant 'EE_ROLL_CCW'."""
        return Metaclass_ArmJoy.__constants['EE_ROLL_CCW']

    @property
    def EE_ROLL_CW(self):
        """Message constant 'EE_ROLL_CW'."""
        return Metaclass_ArmJoy.__constants['EE_ROLL_CW']

    @property
    def EE_PITCH_UP(self):
        """Message constant 'EE_PITCH_UP'."""
        return Metaclass_ArmJoy.__constants['EE_PITCH_UP']

    @property
    def EE_PITCH_DOWN(self):
        """Message constant 'EE_PITCH_DOWN'."""
        return Metaclass_ArmJoy.__constants['EE_PITCH_DOWN']

    @property
    def WAIST_CCW(self):
        """Message constant 'WAIST_CCW'."""
        return Metaclass_ArmJoy.__constants['WAIST_CCW']

    @property
    def WAIST_CW(self):
        """Message constant 'WAIST_CW'."""
        return Metaclass_ArmJoy.__constants['WAIST_CW']

    @property
    def GRIPPER_RELEASE(self):
        """Message constant 'GRIPPER_RELEASE'."""
        return Metaclass_ArmJoy.__constants['GRIPPER_RELEASE']

    @property
    def GRIPPER_GRASP(self):
        """Message constant 'GRIPPER_GRASP'."""
        return Metaclass_ArmJoy.__constants['GRIPPER_GRASP']

    @property
    def HOME_POSE(self):
        """Message constant 'HOME_POSE'."""
        return Metaclass_ArmJoy.__constants['HOME_POSE']

    @property
    def SLEEP_POSE(self):
        """Message constant 'SLEEP_POSE'."""
        return Metaclass_ArmJoy.__constants['SLEEP_POSE']

    @property
    def SPEED_INC(self):
        """Message constant 'SPEED_INC'."""
        return Metaclass_ArmJoy.__constants['SPEED_INC']

    @property
    def SPEED_DEC(self):
        """Message constant 'SPEED_DEC'."""
        return Metaclass_ArmJoy.__constants['SPEED_DEC']

    @property
    def SPEED_COARSE(self):
        """Message constant 'SPEED_COARSE'."""
        return Metaclass_ArmJoy.__constants['SPEED_COARSE']

    @property
    def SPEED_FINE(self):
        """Message constant 'SPEED_FINE'."""
        return Metaclass_ArmJoy.__constants['SPEED_FINE']

    @property
    def GRIPPER_PWM_INC(self):
        """Message constant 'GRIPPER_PWM_INC'."""
        return Metaclass_ArmJoy.__constants['GRIPPER_PWM_INC']

    @property
    def GRIPPER_PWM_DEC(self):
        """Message constant 'GRIPPER_PWM_DEC'."""
        return Metaclass_ArmJoy.__constants['GRIPPER_PWM_DEC']

    @property
    def TORQUE_ON(self):
        """Message constant 'TORQUE_ON'."""
        return Metaclass_ArmJoy.__constants['TORQUE_ON']

    @property
    def TORQUE_OFF(self):
        """Message constant 'TORQUE_OFF'."""
        return Metaclass_ArmJoy.__constants['TORQUE_OFF']


class ArmJoy(metaclass=Metaclass_ArmJoy):
    """
    Message class 'ArmJoy'.

    Constants:
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
      TORQUE_ON
      TORQUE_OFF
    """

    __slots__ = [
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
        '_torque_cmd',
    ]

    _fields_and_field_types = {
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
        'torque_cmd': 'int8',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
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
        self.torque_cmd = kwargs.get('torque_cmd', int())

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
        if self.torque_cmd != other.torque_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @property
    def torque_cmd(self):
        """Message field 'torque_cmd'."""
        return self._torque_cmd

    @torque_cmd.setter
    def torque_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'torque_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'torque_cmd' field must be an integer in [-128, 127]"
        self._torque_cmd = value
