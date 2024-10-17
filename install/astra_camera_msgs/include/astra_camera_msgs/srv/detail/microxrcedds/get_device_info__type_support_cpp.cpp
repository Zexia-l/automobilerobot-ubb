// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from astra_camera_msgs:srv/GetDeviceInfo.idl
// generated code does not contain a copyright notice
#include "astra_camera_msgs/srv/detail/get_device_info__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "astra_camera_msgs/srv/detail/get_device_info__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace astra_camera_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
cdr_serialize(
  const astra_camera_msgs::srv::GetDeviceInfo_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message.structure_needs_at_least_one_member);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  astra_camera_msgs::srv::GetDeviceInfo_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.structure_needs_at_least_one_member);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
get_serialized_size(
  const astra_camera_msgs::srv::GetDeviceInfo_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
max_serialized_size_GetDeviceInfo_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static bool _GetDeviceInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::srv::GetDeviceInfo_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetDeviceInfo_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<astra_camera_msgs::srv::GetDeviceInfo_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetDeviceInfo_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::srv::GetDeviceInfo_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetDeviceInfo_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::srv::GetDeviceInfo_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GetDeviceInfo_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GetDeviceInfo_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _GetDeviceInfo_Request__callbacks = {
  "astra_camera_msgs::srv",
  "GetDeviceInfo_Request",
  _GetDeviceInfo_Request__cdr_serialize,
  _GetDeviceInfo_Request__cdr_deserialize,
  _GetDeviceInfo_Request__get_serialized_size,
  _GetDeviceInfo_Request__get_serialized_size_with_initial_alignment,
  _GetDeviceInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetDeviceInfo_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetDeviceInfo_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace astra_camera_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_astra_camera_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<astra_camera_msgs::srv::GetDeviceInfo_Request>()
{
  return &astra_camera_msgs::srv::typesupport_microxrcedds_cpp::_GetDeviceInfo_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, astra_camera_msgs, srv, GetDeviceInfo_Request)() {
  return &astra_camera_msgs::srv::typesupport_microxrcedds_cpp::_GetDeviceInfo_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace astra_camera_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const astra_camera_msgs::msg::DeviceInfo &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  astra_camera_msgs::msg::DeviceInfo &);

size_t get_serialized_size(
  const astra_camera_msgs::msg::DeviceInfo &,
  size_t current_alignment);

size_t
max_serialized_size_DeviceInfo(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace astra_camera_msgs


namespace astra_camera_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
cdr_serialize(
  const astra_camera_msgs::srv::GetDeviceInfo_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: info
  rv = astra_camera_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.info,
    cdr);
  // Member: success
  rv = ucdr_serialize_bool(cdr, ros_message.success);
  // Member: message
  rv = ucdr_serialize_string(cdr, ros_message.message.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  astra_camera_msgs::srv::GetDeviceInfo_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: info
  rv = astra_camera_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.info);
  // Member: success
  rv = ucdr_deserialize_bool(cdr, &ros_message.success);
  // Member: message
  ros_message.message.resize(ros_message.message.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.message[0], ros_message.message.capacity());
  if (rv) {
    ros_message.message.resize(std::strlen(&ros_message.message[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
get_serialized_size(
  const astra_camera_msgs::srv::GetDeviceInfo_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: info
  current_alignment += astra_camera_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.info,
    current_alignment);
  // Member: success
  {
    const size_t item_size = sizeof(ros_message.success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.message.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
max_serialized_size_GetDeviceInfo_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: info
  current_alignment += astra_camera_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_DeviceInfo(
    full_bounded,
    current_alignment);
  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: message
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _GetDeviceInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::srv::GetDeviceInfo_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetDeviceInfo_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<astra_camera_msgs::srv::GetDeviceInfo_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetDeviceInfo_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::srv::GetDeviceInfo_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetDeviceInfo_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::srv::GetDeviceInfo_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GetDeviceInfo_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GetDeviceInfo_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _GetDeviceInfo_Response__callbacks = {
  "astra_camera_msgs::srv",
  "GetDeviceInfo_Response",
  _GetDeviceInfo_Response__cdr_serialize,
  _GetDeviceInfo_Response__cdr_deserialize,
  _GetDeviceInfo_Response__get_serialized_size,
  _GetDeviceInfo_Response__get_serialized_size_with_initial_alignment,
  _GetDeviceInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetDeviceInfo_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetDeviceInfo_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace astra_camera_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_astra_camera_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<astra_camera_msgs::srv::GetDeviceInfo_Response>()
{
  return &astra_camera_msgs::srv::typesupport_microxrcedds_cpp::_GetDeviceInfo_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, astra_camera_msgs, srv, GetDeviceInfo_Response)() {
  return &astra_camera_msgs::srv::typesupport_microxrcedds_cpp::_GetDeviceInfo_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace astra_camera_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _GetDeviceInfo__callbacks = {
  "astra_camera_msgs::srv",
  "GetDeviceInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, astra_camera_msgs, srv, GetDeviceInfo_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, astra_camera_msgs, srv, GetDeviceInfo_Response),
};

static rosidl_service_type_support_t _GetDeviceInfo__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetDeviceInfo__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace astra_camera_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_astra_camera_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<astra_camera_msgs::srv::GetDeviceInfo>()
{
  return &astra_camera_msgs::srv::typesupport_microxrcedds_cpp::_GetDeviceInfo__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, astra_camera_msgs, srv, GetDeviceInfo)() {
  return &astra_camera_msgs::srv::typesupport_microxrcedds_cpp::_GetDeviceInfo__handle;
}

#ifdef __cplusplus
}
#endif
