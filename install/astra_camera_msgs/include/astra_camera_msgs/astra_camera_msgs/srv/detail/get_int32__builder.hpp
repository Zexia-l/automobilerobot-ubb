// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from astra_camera_msgs:srv/GetInt32.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_INT32__BUILDER_HPP_
#define ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_INT32__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "astra_camera_msgs/srv/detail/get_int32__struct.hpp"
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
auto build<::astra_camera_msgs::srv::GetInt32_Request>()
{
  return ::astra_camera_msgs::srv::GetInt32_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace astra_camera_msgs


namespace astra_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_GetInt32_Response_message
{
public:
  explicit Init_GetInt32_Response_message(::astra_camera_msgs::srv::GetInt32_Response & msg)
  : msg_(msg)
  {}
  ::astra_camera_msgs::srv::GetInt32_Response message(::astra_camera_msgs::srv::GetInt32_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetInt32_Response msg_;
};

class Init_GetInt32_Response_success
{
public:
  explicit Init_GetInt32_Response_success(::astra_camera_msgs::srv::GetInt32_Response & msg)
  : msg_(msg)
  {}
  Init_GetInt32_Response_message success(::astra_camera_msgs::srv::GetInt32_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetInt32_Response_message(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetInt32_Response msg_;
};

class Init_GetInt32_Response_data
{
public:
  Init_GetInt32_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetInt32_Response_success data(::astra_camera_msgs::srv::GetInt32_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_GetInt32_Response_success(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetInt32_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::astra_camera_msgs::srv::GetInt32_Response>()
{
  return astra_camera_msgs::srv::builder::Init_GetInt32_Response_data();
}

}  // namespace astra_camera_msgs

#endif  // ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_INT32__BUILDER_HPP_
