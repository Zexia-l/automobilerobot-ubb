// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from astra_camera_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__MSG__DEVICE_INFO__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define ASTRA_CAMERA_MSGS__MSG__DEVICE_INFO__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "astra_camera_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "astra_camera_msgs/msg/detail/device_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "ucdr/microcdr.h"

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
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  astra_camera_msgs::msg::DeviceInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
get_serialized_size(
  const astra_camera_msgs::msg::DeviceInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
max_serialized_size_DeviceInfo(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace astra_camera_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_astra_camera_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, astra_camera_msgs, msg, DeviceInfo)();

#ifdef __cplusplus
}
#endif

#endif  // ASTRA_CAMERA_MSGS__MSG__DEVICE_INFO__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
