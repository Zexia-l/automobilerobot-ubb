// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from astra_camera_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "astra_camera_msgs/msg/detail/device_info__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "astra_camera_msgs/msg/detail/device_info__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  std_msgs::msg::Header &);

size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);

size_t
max_serialized_size_Header(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace std_msgs


namespace astra_camera_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
cdr_serialize(
  const astra_camera_msgs::msg::DeviceInfo & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: name
  rv = ucdr_serialize_string(cdr, ros_message.name.c_str());
  // Member: vid
  rv = ucdr_serialize_int32_t(cdr, ros_message.vid);
  // Member: pid
  rv = ucdr_serialize_int32_t(cdr, ros_message.pid);
  // Member: serial_number
  rv = ucdr_serialize_string(cdr, ros_message.serial_number.c_str());
  // Member: firmware_version
  rv = ucdr_serialize_string(cdr, ros_message.firmware_version.c_str());
  // Member: supported_min_sdk_version
  rv = ucdr_serialize_string(cdr, ros_message.supported_min_sdk_version.c_str());
  // Member: hardware_version
  rv = ucdr_serialize_string(cdr, ros_message.hardware_version.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  astra_camera_msgs::msg::DeviceInfo & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: name
  ros_message.name.resize(ros_message.name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.name[0], ros_message.name.capacity());
  if (rv) {
    ros_message.name.resize(std::strlen(&ros_message.name[0]));
  }
  // Member: vid
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.vid);
  // Member: pid
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.pid);
  // Member: serial_number
  ros_message.serial_number.resize(ros_message.serial_number.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.serial_number[0], ros_message.serial_number.capacity());
  if (rv) {
    ros_message.serial_number.resize(std::strlen(&ros_message.serial_number[0]));
  }
  // Member: firmware_version
  ros_message.firmware_version.resize(ros_message.firmware_version.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.firmware_version[0], ros_message.firmware_version.capacity());
  if (rv) {
    ros_message.firmware_version.resize(std::strlen(&ros_message.firmware_version[0]));
  }
  // Member: supported_min_sdk_version
  ros_message.supported_min_sdk_version.resize(ros_message.supported_min_sdk_version.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.supported_min_sdk_version[0], ros_message.supported_min_sdk_version.capacity());
  if (rv) {
    ros_message.supported_min_sdk_version.resize(std::strlen(&ros_message.supported_min_sdk_version[0]));
  }
  // Member: hardware_version
  ros_message.hardware_version.resize(ros_message.hardware_version.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.hardware_version[0], ros_message.hardware_version.capacity());
  if (rv) {
    ros_message.hardware_version.resize(std::strlen(&ros_message.hardware_version[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
get_serialized_size(
  const astra_camera_msgs::msg::DeviceInfo & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.name.size() + 1;
  // Member: vid
  {
    const size_t item_size = sizeof(ros_message.vid);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: pid
  {
    const size_t item_size = sizeof(ros_message.pid);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: serial_number
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.serial_number.size() + 1;
  // Member: firmware_version
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.firmware_version.size() + 1;
  // Member: supported_min_sdk_version
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.supported_min_sdk_version.size() + 1;
  // Member: hardware_version
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.hardware_version.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
max_serialized_size_DeviceInfo(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Header(
    full_bounded,
    current_alignment);
  // Member: name
  *full_bounded = false;
  // Member: vid
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: pid
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: serial_number
  *full_bounded = false;
  // Member: firmware_version
  *full_bounded = false;
  // Member: supported_min_sdk_version
  *full_bounded = false;
  // Member: hardware_version
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _DeviceInfo__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::msg::DeviceInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DeviceInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<astra_camera_msgs::msg::DeviceInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DeviceInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::msg::DeviceInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DeviceInfo__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::msg::DeviceInfo *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _DeviceInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_DeviceInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t _DeviceInfo__callbacks = {
  "astra_camera_msgs::msg",
  "DeviceInfo",
  _DeviceInfo__cdr_serialize,
  _DeviceInfo__cdr_deserialize,
  _DeviceInfo__get_serialized_size,
  _DeviceInfo__get_serialized_size_with_initial_alignment,
  _DeviceInfo__max_serialized_size
};

static rosidl_message_type_support_t _DeviceInfo__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_DeviceInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace astra_camera_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_astra_camera_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<astra_camera_msgs::msg::DeviceInfo>()
{
  return &astra_camera_msgs::msg::typesupport_microxrcedds_cpp::_DeviceInfo__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, astra_camera_msgs, msg, DeviceInfo)() {
  return &astra_camera_msgs::msg::typesupport_microxrcedds_cpp::_DeviceInfo__handle;
}

#ifdef __cplusplus
}
#endif
