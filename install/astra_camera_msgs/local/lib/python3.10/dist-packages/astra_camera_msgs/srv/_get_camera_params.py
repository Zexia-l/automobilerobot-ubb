# generated from rosidl_generator_py/resource/_idl.py.em
# with input from astra_camera_msgs:srv/GetCameraParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetCameraParams_Request(type):
    """Metaclass of message 'GetCameraParams_Request'."""

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
            module = import_type_support('astra_camera_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'astra_camera_msgs.srv.GetCameraParams_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_camera_params__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_camera_params__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_camera_params__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_camera_params__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_camera_params__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCameraParams_Request(metaclass=Metaclass_GetCameraParams_Request):
    """Message class 'GetCameraParams_Request'."""

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

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'l_intr_p'
# Member 'r_intr_p'
# Member 'r2l_r'
# Member 'r2l_t'
# Member 'l_k'
# Member 'r_k'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetCameraParams_Response(type):
    """Metaclass of message 'GetCameraParams_Response'."""

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
            module = import_type_support('astra_camera_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'astra_camera_msgs.srv.GetCameraParams_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_camera_params__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_camera_params__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_camera_params__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_camera_params__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_camera_params__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCameraParams_Response(metaclass=Metaclass_GetCameraParams_Response):
    """Message class 'GetCameraParams_Response'."""

    __slots__ = [
        '_l_intr_p',
        '_r_intr_p',
        '_r2l_r',
        '_r2l_t',
        '_l_k',
        '_r_k',
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'l_intr_p': 'float[4]',
        'r_intr_p': 'float[4]',
        'r2l_r': 'float[9]',
        'r2l_t': 'float[3]',
        'l_k': 'float[5]',
        'r_k': 'float[5]',
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'l_intr_p' not in kwargs:
            self.l_intr_p = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.l_intr_p = numpy.array(kwargs.get('l_intr_p'), dtype=numpy.float32)
            assert self.l_intr_p.shape == (4, )
        if 'r_intr_p' not in kwargs:
            self.r_intr_p = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.r_intr_p = numpy.array(kwargs.get('r_intr_p'), dtype=numpy.float32)
            assert self.r_intr_p.shape == (4, )
        if 'r2l_r' not in kwargs:
            self.r2l_r = numpy.zeros(9, dtype=numpy.float32)
        else:
            self.r2l_r = numpy.array(kwargs.get('r2l_r'), dtype=numpy.float32)
            assert self.r2l_r.shape == (9, )
        if 'r2l_t' not in kwargs:
            self.r2l_t = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.r2l_t = numpy.array(kwargs.get('r2l_t'), dtype=numpy.float32)
            assert self.r2l_t.shape == (3, )
        if 'l_k' not in kwargs:
            self.l_k = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.l_k = numpy.array(kwargs.get('l_k'), dtype=numpy.float32)
            assert self.l_k.shape == (5, )
        if 'r_k' not in kwargs:
            self.r_k = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.r_k = numpy.array(kwargs.get('r_k'), dtype=numpy.float32)
            assert self.r_k.shape == (5, )
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if all(self.l_intr_p != other.l_intr_p):
            return False
        if all(self.r_intr_p != other.r_intr_p):
            return False
        if all(self.r2l_r != other.r2l_r):
            return False
        if all(self.r2l_t != other.r2l_t):
            return False
        if all(self.l_k != other.l_k):
            return False
        if all(self.r_k != other.r_k):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def l_intr_p(self):
        """Message field 'l_intr_p'."""
        return self._l_intr_p

    @l_intr_p.setter
    def l_intr_p(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'l_intr_p' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'l_intr_p' numpy.ndarray() must have a size of 4"
            self._l_intr_p = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'l_intr_p' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._l_intr_p = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def r_intr_p(self):
        """Message field 'r_intr_p'."""
        return self._r_intr_p

    @r_intr_p.setter
    def r_intr_p(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'r_intr_p' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'r_intr_p' numpy.ndarray() must have a size of 4"
            self._r_intr_p = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'r_intr_p' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._r_intr_p = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def r2l_r(self):
        """Message field 'r2l_r'."""
        return self._r2l_r

    @r2l_r.setter
    def r2l_r(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'r2l_r' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 9, \
                "The 'r2l_r' numpy.ndarray() must have a size of 9"
            self._r2l_r = value
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'r2l_r' field must be a set or sequence with length 9 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._r2l_r = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def r2l_t(self):
        """Message field 'r2l_t'."""
        return self._r2l_t

    @r2l_t.setter
    def r2l_t(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'r2l_t' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'r2l_t' numpy.ndarray() must have a size of 3"
            self._r2l_t = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'r2l_t' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._r2l_t = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def l_k(self):
        """Message field 'l_k'."""
        return self._l_k

    @l_k.setter
    def l_k(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'l_k' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'l_k' numpy.ndarray() must have a size of 5"
            self._l_k = value
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'l_k' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._l_k = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def r_k(self):
        """Message field 'r_k'."""
        return self._r_k

    @r_k.setter
    def r_k(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'r_k' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'r_k' numpy.ndarray() must have a size of 5"
            self._r_k = value
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'r_k' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._r_k = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_GetCameraParams(type):
    """Metaclass of service 'GetCameraParams'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('astra_camera_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'astra_camera_msgs.srv.GetCameraParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_camera_params

            from astra_camera_msgs.srv import _get_camera_params
            if _get_camera_params.Metaclass_GetCameraParams_Request._TYPE_SUPPORT is None:
                _get_camera_params.Metaclass_GetCameraParams_Request.__import_type_support__()
            if _get_camera_params.Metaclass_GetCameraParams_Response._TYPE_SUPPORT is None:
                _get_camera_params.Metaclass_GetCameraParams_Response.__import_type_support__()


class GetCameraParams(metaclass=Metaclass_GetCameraParams):
    from astra_camera_msgs.srv._get_camera_params import GetCameraParams_Request as Request
    from astra_camera_msgs.srv._get_camera_params import GetCameraParams_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
