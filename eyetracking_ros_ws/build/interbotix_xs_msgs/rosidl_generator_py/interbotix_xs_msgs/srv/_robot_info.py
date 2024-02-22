# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interbotix_xs_msgs:srv/RobotInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotInfo_Request(type):
    """Metaclass of message 'RobotInfo_Request'."""

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
                'interbotix_xs_msgs.srv.RobotInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_info__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotInfo_Request(metaclass=Metaclass_RobotInfo_Request):
    """Message class 'RobotInfo_Request'."""

    __slots__ = [
        '_cmd_type',
        '_name',
    ]

    _fields_and_field_types = {
        'cmd_type': 'string',
        'name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd_type = kwargs.get('cmd_type', str())
        self.name = kwargs.get('name', str())

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


# Import statements for member types

# Member 'joint_ids'
# Member 'joint_lower_limits'
# Member 'joint_upper_limits'
# Member 'joint_velocity_limits'
# Member 'joint_sleep_positions'
# Member 'joint_state_indices'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotInfo_Response(type):
    """Metaclass of message 'RobotInfo_Response'."""

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
                'interbotix_xs_msgs.srv.RobotInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_info__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotInfo_Response(metaclass=Metaclass_RobotInfo_Response):
    """Message class 'RobotInfo_Response'."""

    __slots__ = [
        '_mode',
        '_profile_type',
        '_joint_names',
        '_joint_ids',
        '_joint_lower_limits',
        '_joint_upper_limits',
        '_joint_velocity_limits',
        '_joint_sleep_positions',
        '_joint_state_indices',
        '_num_joints',
        '_name',
    ]

    _fields_and_field_types = {
        'mode': 'string',
        'profile_type': 'string',
        'joint_names': 'sequence<string>',
        'joint_ids': 'sequence<int16>',
        'joint_lower_limits': 'sequence<float>',
        'joint_upper_limits': 'sequence<float>',
        'joint_velocity_limits': 'sequence<float>',
        'joint_sleep_positions': 'sequence<float>',
        'joint_state_indices': 'sequence<int16>',
        'num_joints': 'int16',
        'name': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', str())
        self.profile_type = kwargs.get('profile_type', str())
        self.joint_names = kwargs.get('joint_names', [])
        self.joint_ids = array.array('h', kwargs.get('joint_ids', []))
        self.joint_lower_limits = array.array('f', kwargs.get('joint_lower_limits', []))
        self.joint_upper_limits = array.array('f', kwargs.get('joint_upper_limits', []))
        self.joint_velocity_limits = array.array('f', kwargs.get('joint_velocity_limits', []))
        self.joint_sleep_positions = array.array('f', kwargs.get('joint_sleep_positions', []))
        self.joint_state_indices = array.array('h', kwargs.get('joint_state_indices', []))
        self.num_joints = kwargs.get('num_joints', int())
        self.name = kwargs.get('name', [])

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
        if self.mode != other.mode:
            return False
        if self.profile_type != other.profile_type:
            return False
        if self.joint_names != other.joint_names:
            return False
        if self.joint_ids != other.joint_ids:
            return False
        if self.joint_lower_limits != other.joint_lower_limits:
            return False
        if self.joint_upper_limits != other.joint_upper_limits:
            return False
        if self.joint_velocity_limits != other.joint_velocity_limits:
            return False
        if self.joint_sleep_positions != other.joint_sleep_positions:
            return False
        if self.joint_state_indices != other.joint_state_indices:
            return False
        if self.num_joints != other.num_joints:
            return False
        if self.name != other.name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def joint_names(self):
        """Message field 'joint_names'."""
        return self._joint_names

    @joint_names.setter
    def joint_names(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'joint_names' field must be a set or sequence and each value of type 'str'"
        self._joint_names = value

    @property
    def joint_ids(self):
        """Message field 'joint_ids'."""
        return self._joint_ids

    @joint_ids.setter
    def joint_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'joint_ids' array.array() must have the type code of 'h'"
            self._joint_ids = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'joint_ids' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._joint_ids = array.array('h', value)

    @property
    def joint_lower_limits(self):
        """Message field 'joint_lower_limits'."""
        return self._joint_lower_limits

    @joint_lower_limits.setter
    def joint_lower_limits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_lower_limits' array.array() must have the type code of 'f'"
            self._joint_lower_limits = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_lower_limits' field must be a set or sequence and each value of type 'float'"
        self._joint_lower_limits = array.array('f', value)

    @property
    def joint_upper_limits(self):
        """Message field 'joint_upper_limits'."""
        return self._joint_upper_limits

    @joint_upper_limits.setter
    def joint_upper_limits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_upper_limits' array.array() must have the type code of 'f'"
            self._joint_upper_limits = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_upper_limits' field must be a set or sequence and each value of type 'float'"
        self._joint_upper_limits = array.array('f', value)

    @property
    def joint_velocity_limits(self):
        """Message field 'joint_velocity_limits'."""
        return self._joint_velocity_limits

    @joint_velocity_limits.setter
    def joint_velocity_limits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_velocity_limits' array.array() must have the type code of 'f'"
            self._joint_velocity_limits = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_velocity_limits' field must be a set or sequence and each value of type 'float'"
        self._joint_velocity_limits = array.array('f', value)

    @property
    def joint_sleep_positions(self):
        """Message field 'joint_sleep_positions'."""
        return self._joint_sleep_positions

    @joint_sleep_positions.setter
    def joint_sleep_positions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_sleep_positions' array.array() must have the type code of 'f'"
            self._joint_sleep_positions = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_sleep_positions' field must be a set or sequence and each value of type 'float'"
        self._joint_sleep_positions = array.array('f', value)

    @property
    def joint_state_indices(self):
        """Message field 'joint_state_indices'."""
        return self._joint_state_indices

    @joint_state_indices.setter
    def joint_state_indices(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'joint_state_indices' array.array() must have the type code of 'h'"
            self._joint_state_indices = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'joint_state_indices' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._joint_state_indices = array.array('h', value)

    @property
    def num_joints(self):
        """Message field 'num_joints'."""
        return self._num_joints

    @num_joints.setter
    def num_joints(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_joints' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'num_joints' field must be an integer in [-32768, 32767]"
        self._num_joints = value

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'name' field must be a set or sequence and each value of type 'str'"
        self._name = value


class Metaclass_RobotInfo(type):
    """Metaclass of service 'RobotInfo'."""

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
                'interbotix_xs_msgs.srv.RobotInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robot_info

            from interbotix_xs_msgs.srv import _robot_info
            if _robot_info.Metaclass_RobotInfo_Request._TYPE_SUPPORT is None:
                _robot_info.Metaclass_RobotInfo_Request.__import_type_support__()
            if _robot_info.Metaclass_RobotInfo_Response._TYPE_SUPPORT is None:
                _robot_info.Metaclass_RobotInfo_Response.__import_type_support__()


class RobotInfo(metaclass=Metaclass_RobotInfo):
    from interbotix_xs_msgs.srv._robot_info import RobotInfo_Request as Request
    from interbotix_xs_msgs.srv._robot_info import RobotInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
