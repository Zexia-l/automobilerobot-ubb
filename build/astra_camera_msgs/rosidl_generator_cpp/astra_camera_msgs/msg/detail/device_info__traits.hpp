// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from astra_camera_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
#define ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "astra_camera_msgs/msg/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace astra_camera_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeviceInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: vid
  {
    out << "vid: ";
    rosidl_generator_traits::value_to_yaml(msg.vid, out);
    out << ", ";
  }

  // member: pid
  {
    out << "pid: ";
    rosidl_generator_traits::value_to_yaml(msg.pid, out);
    out << ", ";
  }

  // member: serial_number
  {
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << ", ";
  }

  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: supported_min_sdk_version
  {
    out << "supported_min_sdk_version: ";
    rosidl_generator_traits::value_to_yaml(msg.supported_min_sdk_version, out);
    out << ", ";
  }

  // member: hardware_version
  {
    out << "hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeviceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: vid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vid: ";
    rosidl_generator_traits::value_to_yaml(msg.vid, out);
    out << "\n";
  }

  // member: pid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid: ";
    rosidl_generator_traits::value_to_yaml(msg.pid, out);
    out << "\n";
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: supported_min_sdk_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supported_min_sdk_version: ";
    rosidl_generator_traits::value_to_yaml(msg.supported_min_sdk_version, out);
    out << "\n";
  }

  // member: hardware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeviceInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace astra_camera_msgs

namespace rosidl_generator_traits
{

[[deprecated("use astra_camera_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const astra_camera_msgs::msg::DeviceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  astra_camera_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use astra_camera_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const astra_camera_msgs::msg::DeviceInfo & msg)
{
  return astra_camera_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<astra_camera_msgs::msg::DeviceInfo>()
{
  return "astra_camera_msgs::msg::DeviceInfo";
}

template<>
inline const char * name<astra_camera_msgs::msg::DeviceInfo>()
{
  return "astra_camera_msgs/msg/DeviceInfo";
}

template<>
struct has_fixed_size<astra_camera_msgs::msg::DeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<astra_camera_msgs::msg::DeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<astra_camera_msgs::msg::DeviceInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
