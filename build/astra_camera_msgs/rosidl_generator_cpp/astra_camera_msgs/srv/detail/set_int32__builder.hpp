// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from astra_camera_msgs:srv/SetInt32.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__SRV__DETAIL__SET_INT32__BUILDER_HPP_
#define ASTRA_CAMERA_MSGS__SRV__DETAIL__SET_INT32__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "astra_camera_msgs/srv/detail/set_int32__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace astra_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_SetInt32_Request_data
{
public:
  Init_SetInt32_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::astra_camera_msgs::srv::SetInt32_Request data(::astra_camera_msgs::srv::SetInt32_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::astra_camera_msgs::srv::SetInt32_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::astra_camera_msgs::srv::SetInt32_Request>()
{
  return astra_camera_msgs::srv::builder::Init_SetInt32_Request_data();
}

}  // namespace astra_camera_msgs


namespace astra_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_SetInt32_Response_message
{
public:
  explicit Init_SetInt32_Response_message(::astra_camera_msgs::srv::SetInt32_Response & msg)
  : msg_(msg)
  {}
  ::astra_camera_msgs::srv::SetInt32_Response message(::astra_camera_msgs::srv::SetInt32_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::astra_camera_msgs::srv::SetInt32_Response msg_;
};

class Init_SetInt32_Response_success
{
public:
  Init_SetInt32_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetInt32_Response_message success(::astra_camera_msgs::srv::SetInt32_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetInt32_Response_message(msg_);
  }

private:
  ::astra_camera_msgs::srv::SetInt32_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::astra_camera_msgs::srv::SetInt32_Response>()
{
  return astra_camera_msgs::srv::builder::Init_SetInt32_Response_success();
}

}  // namespace astra_camera_msgs

#endif  // ASTRA_CAMERA_MSGS__SRV__DETAIL__SET_INT32__BUILDER_HPP_
