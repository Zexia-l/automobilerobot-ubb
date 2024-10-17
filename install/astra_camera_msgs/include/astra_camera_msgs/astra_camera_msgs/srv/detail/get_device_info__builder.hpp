// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from astra_camera_msgs:srv/GetDeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_DEVICE_INFO__BUILDER_HPP_
#define ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_DEVICE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "astra_camera_msgs/srv/detail/get_device_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace astra_camera_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::astra_camera_msgs::srv::GetDeviceInfo_Request>()
{
  return ::astra_camera_msgs::srv::GetDeviceInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace astra_camera_msgs


namespace astra_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDeviceInfo_Response_message
{
public:
  explicit Init_GetDeviceInfo_Response_message(::astra_camera_msgs::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  ::astra_camera_msgs::srv::GetDeviceInfo_Response message(::astra_camera_msgs::srv::GetDeviceInfo_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_success
{
public:
  explicit Init_GetDeviceInfo_Response_success(::astra_camera_msgs::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_message success(::astra_camera_msgs::srv::GetDeviceInfo_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetDeviceInfo_Response_message(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_info
{
public:
  Init_GetDeviceInfo_Response_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDeviceInfo_Response_success info(::astra_camera_msgs::srv::GetDeviceInfo_Response::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetDeviceInfo_Response_success(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetDeviceInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::astra_camera_msgs::srv::GetDeviceInfo_Response>()
{
  return astra_camera_msgs::srv::builder::Init_GetDeviceInfo_Response_info();
}

}  // namespace astra_camera_msgs

#endif  // ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_DEVICE_INFO__BUILDER_HPP_
