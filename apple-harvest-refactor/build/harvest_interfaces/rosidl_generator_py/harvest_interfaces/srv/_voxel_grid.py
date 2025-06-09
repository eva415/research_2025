# generated from rosidl_generator_py/resource/_idl.py.em
# with input from harvest_interfaces:srv/VoxelGrid.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VoxelGrid_Request(type):
    """Metaclass of message 'VoxelGrid_Request'."""

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
            module = import_type_support('harvest_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'harvest_interfaces.srv.VoxelGrid_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__voxel_grid__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__voxel_grid__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__voxel_grid__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__voxel_grid__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__voxel_grid__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VoxelGrid_Request(metaclass=Metaclass_VoxelGrid_Request):
    """Message class 'VoxelGrid_Request'."""

    __slots__ = [
        '_voxel_size',
    ]

    _fields_and_field_types = {
        'voxel_size': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.voxel_size = kwargs.get('voxel_size', float())

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
        if self.voxel_size != other.voxel_size:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def voxel_size(self):
        """Message field 'voxel_size'."""
        return self._voxel_size

    @voxel_size.setter
    def voxel_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voxel_size' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voxel_size' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voxel_size = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_VoxelGrid_Response(type):
    """Metaclass of message 'VoxelGrid_Response'."""

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
            module = import_type_support('harvest_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'harvest_interfaces.srv.VoxelGrid_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__voxel_grid__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__voxel_grid__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__voxel_grid__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__voxel_grid__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__voxel_grid__response

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from std_msgs.msg import ColorRGBA
            if ColorRGBA.__class__._TYPE_SUPPORT is None:
                ColorRGBA.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VoxelGrid_Response(metaclass=Metaclass_VoxelGrid_Response):
    """Message class 'VoxelGrid_Response'."""

    __slots__ = [
        '_voxel_centers',
        '_voxel_colors',
    ]

    _fields_and_field_types = {
        'voxel_centers': 'sequence<geometry_msgs/Point>',
        'voxel_colors': 'sequence<std_msgs/ColorRGBA>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.voxel_centers = kwargs.get('voxel_centers', [])
        self.voxel_colors = kwargs.get('voxel_colors', [])

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
        if self.voxel_centers != other.voxel_centers:
            return False
        if self.voxel_colors != other.voxel_colors:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def voxel_centers(self):
        """Message field 'voxel_centers'."""
        return self._voxel_centers

    @voxel_centers.setter
    def voxel_centers(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'voxel_centers' field must be a set or sequence and each value of type 'Point'"
        self._voxel_centers = value

    @builtins.property
    def voxel_colors(self):
        """Message field 'voxel_colors'."""
        return self._voxel_colors

    @voxel_colors.setter
    def voxel_colors(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
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
                 all(isinstance(v, ColorRGBA) for v in value) and
                 True), \
                "The 'voxel_colors' field must be a set or sequence and each value of type 'ColorRGBA'"
        self._voxel_colors = value


class Metaclass_VoxelGrid(type):
    """Metaclass of service 'VoxelGrid'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('harvest_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'harvest_interfaces.srv.VoxelGrid')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__voxel_grid

            from harvest_interfaces.srv import _voxel_grid
            if _voxel_grid.Metaclass_VoxelGrid_Request._TYPE_SUPPORT is None:
                _voxel_grid.Metaclass_VoxelGrid_Request.__import_type_support__()
            if _voxel_grid.Metaclass_VoxelGrid_Response._TYPE_SUPPORT is None:
                _voxel_grid.Metaclass_VoxelGrid_Response.__import_type_support__()


class VoxelGrid(metaclass=Metaclass_VoxelGrid):
    from harvest_interfaces.srv._voxel_grid import VoxelGrid_Request as Request
    from harvest_interfaces.srv._voxel_grid import VoxelGrid_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
