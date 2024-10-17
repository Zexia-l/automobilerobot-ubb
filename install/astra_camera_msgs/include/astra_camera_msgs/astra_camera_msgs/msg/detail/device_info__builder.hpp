// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from astra_camera_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_
#define ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "astra_camera_msgs/msg/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace astra_camera_msgs
{

namespace msg
{

namespace builder
{

class Init_DeviceInfo_hardware_version
{
public:
  explicit Init_DeviceInfo_hardware_version(::astra_camera_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  ::astra_camera_msgs::msg::DeviceInfo hardware_version(::astra_camera_msgs::msg::DeviceInfo::_hardware_version_type arg)
  {
    msg_.hardware_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::astra_camera_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_supported_min_sdk_version
{
public:
  explicit Init_DeviceInfo_supported_min_sdk_version(::astra_camera_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_hardware_version supported_min_sdk_version(::astra_camera_msgs::msg::DeviceInfo::_supported_min_sdk_version_type arg)
  {
    msg_.supported_min_sdk_version = std::move(arg);
    return Init_DeviceInfo_hardware_version(msg_);
  }

private:
  ::astra_camera_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_firmware_version
{
public:
  explicit Init_DeviceInfo_firmware_version(::astra_camera_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_supported_min_sdk_version firmware_version(::astra_camera_msgs::msg::DeviceInfo::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_DeviceInfo_supported_min_sdk_version(msg_);
  }

private:
  ::astra_camera_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_serial_number
{
public:
  explicit Init_DeviceInfo_serial_number(::astra_camera_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_firmware_version serial_number(::astra_camera_msgs::msg::DeviceInfo::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_DeviceInfo_firmware_version(msg_);
  }

private:
  ::astra_camera_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_pid
{
public:
  explicit Init_DeviceInfo_pid(::astra_camera_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_serial_number pid(::astra_camera_msgs::msg::DeviceInfo::_pid_type arg)
  {
    msg_.pid = std::move(arg);
    return Init_DeviceInfo_serial_number(msg_);
  }

private:
  ::astra_camera_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_vid
{
public:
  explicit Init_DeviceInfo_vid(::astra_camera_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_pid vid(::astra_camera_msgs::msg::DeviceInfo::_vid_type arg)
  {
    msg_.vid = std::move(arg);
    return Init_DeviceInfo_pid(msg_);
  }

private:
  ::astra_camera_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_name
{
public:
  explicit Init_DeviceInfo_name(::astra_camera_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_vid name(::astra_camera_msgs::msg::DeviceInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DeviceInfo_vid(msg_);
  }

private:
  ::astra_camera_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_header
{
public:
  Init_DeviceInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceInfo_name header(::astra_camera_msgs::msg::DeviceInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DeviceInfo_name(msg_);
  }

private:
  ::astra_camera_msgs::msg::DeviceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::astra_camera_msgs::msg::DeviceInfo>()
{
  return astra_camera_msgs::msg::builder::Init_DeviceInfo_header();
}

}  // namespace astra_camera_msgs

#endif  // ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_
