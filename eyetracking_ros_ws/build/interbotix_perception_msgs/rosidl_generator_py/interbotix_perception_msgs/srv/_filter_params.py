# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interbotix_perception_msgs:srv/FilterParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FilterParams_Request(type):
    """Metaclass of message 'FilterParams_Request'."""

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
                'interbotix_perception_msgs.srv.FilterParams_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__filter_params__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__filter_params__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__filter_params__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__filter_params__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__filter_params__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FilterParams_Request(metaclass=Metaclass_FilterParams_Request):
    """Message class 'FilterParams_Request'."""

    __slots__ = [
        '_x_filter_min',
        '_x_filter_max',
        '_y_filter_min',
        '_y_filter_max',
        '_z_filter_min',
        '_z_filter_max',
        '_voxel_leaf_size',
        '_plane_max_iter',
        '_plane_dist_thresh',
        '_ror_radius_search',
        '_ror_min_neighbors',
        '_cluster_tol',
        '_cluster_min_size',
        '_cluster_max_size',
    ]

    _fields_and_field_types = {
        'x_filter_min': 'float',
        'x_filter_max': 'float',
        'y_filter_min': 'float',
        'y_filter_max': 'float',
        'z_filter_min': 'float',
        'z_filter_max': 'float',
        'voxel_leaf_size': 'float',
        'plane_max_iter': 'int32',
        'plane_dist_thresh': 'float',
        'ror_radius_search': 'float',
        'ror_min_neighbors': 'int32',
        'cluster_tol': 'float',
        'cluster_min_size': 'int32',
        'cluster_max_size': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_filter_min = kwargs.get('x_filter_min', float())
        self.x_filter_max = kwargs.get('x_filter_max', float())
        self.y_filter_min = kwargs.get('y_filter_min', float())
        self.y_filter_max = kwargs.get('y_filter_max', float())
        self.z_filter_min = kwargs.get('z_filter_min', float())
        self.z_filter_max = kwargs.get('z_filter_max', float())
        self.voxel_leaf_size = kwargs.get('voxel_leaf_size', float())
        self.plane_max_iter = kwargs.get('plane_max_iter', int())
        self.plane_dist_thresh = kwargs.get('plane_dist_thresh', float())
        self.ror_radius_search = kwargs.get('ror_radius_search', float())
        self.ror_min_neighbors = kwargs.get('ror_min_neighbors', int())
        self.cluster_tol = kwargs.get('cluster_tol', float())
        self.cluster_min_size = kwargs.get('cluster_min_size', int())
        self.cluster_max_size = kwargs.get('cluster_max_size', int())

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
        if self.x_filter_min != other.x_filter_min:
            return False
        if self.x_filter_max != other.x_filter_max:
            return False
        if self.y_filter_min != other.y_filter_min:
            return False
        if self.y_filter_max != other.y_filter_max:
            return False
        if self.z_filter_min != other.z_filter_min:
            return False
        if self.z_filter_max != other.z_filter_max:
            return False
        if self.voxel_leaf_size != other.voxel_leaf_size:
            return False
        if self.plane_max_iter != other.plane_max_iter:
            return False
        if self.plane_dist_thresh != other.plane_dist_thresh:
            return False
        if self.ror_radius_search != other.ror_radius_search:
            return False
        if self.ror_min_neighbors != other.ror_min_neighbors:
            return False
        if self.cluster_tol != other.cluster_tol:
            return False
        if self.cluster_min_size != other.cluster_min_size:
            return False
        if self.cluster_max_size != other.cluster_max_size:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x_filter_min(self):
        """Message field 'x_filter_min'."""
        return self._x_filter_min

    @x_filter_min.setter
    def x_filter_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_filter_min' field must be of type 'float'"
        self._x_filter_min = value

    @property
    def x_filter_max(self):
        """Message field 'x_filter_max'."""
        return self._x_filter_max

    @x_filter_max.setter
    def x_filter_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_filter_max' field must be of type 'float'"
        self._x_filter_max = value

    @property
    def y_filter_min(self):
        """Message field 'y_filter_min'."""
        return self._y_filter_min

    @y_filter_min.setter
    def y_filter_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_filter_min' field must be of type 'float'"
        self._y_filter_min = value

    @property
    def y_filter_max(self):
        """Message field 'y_filter_max'."""
        return self._y_filter_max

    @y_filter_max.setter
    def y_filter_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_filter_max' field must be of type 'float'"
        self._y_filter_max = value

    @property
    def z_filter_min(self):
        """Message field 'z_filter_min'."""
        return self._z_filter_min

    @z_filter_min.setter
    def z_filter_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_filter_min' field must be of type 'float'"
        self._z_filter_min = value

    @property
    def z_filter_max(self):
        """Message field 'z_filter_max'."""
        return self._z_filter_max

    @z_filter_max.setter
    def z_filter_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_filter_max' field must be of type 'float'"
        self._z_filter_max = value

    @property
    def voxel_leaf_size(self):
        """Message field 'voxel_leaf_size'."""
        return self._voxel_leaf_size

    @voxel_leaf_size.setter
    def voxel_leaf_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voxel_leaf_size' field must be of type 'float'"
        self._voxel_leaf_size = value

    @property
    def plane_max_iter(self):
        """Message field 'plane_max_iter'."""
        return self._plane_max_iter

    @plane_max_iter.setter
    def plane_max_iter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plane_max_iter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plane_max_iter' field must be an integer in [-2147483648, 2147483647]"
        self._plane_max_iter = value

    @property
    def plane_dist_thresh(self):
        """Message field 'plane_dist_thresh'."""
        return self._plane_dist_thresh

    @plane_dist_thresh.setter
    def plane_dist_thresh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'plane_dist_thresh' field must be of type 'float'"
        self._plane_dist_thresh = value

    @property
    def ror_radius_search(self):
        """Message field 'ror_radius_search'."""
        return self._ror_radius_search

    @ror_radius_search.setter
    def ror_radius_search(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ror_radius_search' field must be of type 'float'"
        self._ror_radius_search = value

    @property
    def ror_min_neighbors(self):
        """Message field 'ror_min_neighbors'."""
        return self._ror_min_neighbors

    @ror_min_neighbors.setter
    def ror_min_neighbors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ror_min_neighbors' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ror_min_neighbors' field must be an integer in [-2147483648, 2147483647]"
        self._ror_min_neighbors = value

    @property
    def cluster_tol(self):
        """Message field 'cluster_tol'."""
        return self._cluster_tol

    @cluster_tol.setter
    def cluster_tol(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cluster_tol' field must be of type 'float'"
        self._cluster_tol = value

    @property
    def cluster_min_size(self):
        """Message field 'cluster_min_size'."""
        return self._cluster_min_size

    @cluster_min_size.setter
    def cluster_min_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cluster_min_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cluster_min_size' field must be an integer in [-2147483648, 2147483647]"
        self._cluster_min_size = value

    @property
    def cluster_max_size(self):
        """Message field 'cluster_max_size'."""
        return self._cluster_max_size

    @cluster_max_size.setter
    def cluster_max_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cluster_max_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cluster_max_size' field must be an integer in [-2147483648, 2147483647]"
        self._cluster_max_size = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FilterParams_Response(type):
    """Metaclass of message 'FilterParams_Response'."""

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
                'interbotix_perception_msgs.srv.FilterParams_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__filter_params__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__filter_params__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__filter_params__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__filter_params__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__filter_params__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FilterParams_Response(metaclass=Metaclass_FilterParams_Response):
    """Message class 'FilterParams_Response'."""

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


class Metaclass_FilterParams(type):
    """Metaclass of service 'FilterParams'."""

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
                'interbotix_perception_msgs.srv.FilterParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__filter_params

            from interbotix_perception_msgs.srv import _filter_params
            if _filter_params.Metaclass_FilterParams_Request._TYPE_SUPPORT is None:
                _filter_params.Metaclass_FilterParams_Request.__import_type_support__()
            if _filter_params.Metaclass_FilterParams_Response._TYPE_SUPPORT is None:
                _filter_params.Metaclass_FilterParams_Response.__import_type_support__()


class FilterParams(metaclass=Metaclass_FilterParams):
    from interbotix_perception_msgs.srv._filter_params import FilterParams_Request as Request
    from interbotix_perception_msgs.srv._filter_params import FilterParams_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
