// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from astra_camera_msgs:srv/GetCameraParams.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__BUILDER_HPP_
#define ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "astra_camera_msgs/srv/detail/get_camera_params__struct.hpp"
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
auto build<::astra_camera_msgs::srv::GetCameraParams_Request>()
{
  return ::astra_camera_msgs::srv::GetCameraParams_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace astra_camera_msgs


namespace astra_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCameraParams_Response_message
{
public:
  explicit Init_GetCameraParams_Response_message(::astra_camera_msgs::srv::GetCameraParams_Response & msg)
  : msg_(msg)
  {}
  ::astra_camera_msgs::srv::GetCameraParams_Response message(::astra_camera_msgs::srv::GetCameraParams_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetCameraParams_Response msg_;
};

class Init_GetCameraParams_Response_success
{
public:
  explicit Init_GetCameraParams_Response_success(::astra_camera_msgs::srv::GetCameraParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetCameraParams_Response_message success(::astra_camera_msgs::srv::GetCameraParams_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetCameraParams_Response_message(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetCameraParams_Response msg_;
};

class Init_GetCameraParams_Response_r_k
{
public:
  explicit Init_GetCameraParams_Response_r_k(::astra_camera_msgs::srv::GetCameraParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetCameraParams_Response_success r_k(::astra_camera_msgs::srv::GetCameraParams_Response::_r_k_type arg)
  {
    msg_.r_k = std::move(arg);
    return Init_GetCameraParams_Response_success(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetCameraParams_Response msg_;
};

class Init_GetCameraParams_Response_l_k
{
public:
  explicit Init_GetCameraParams_Response_l_k(::astra_camera_msgs::srv::GetCameraParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetCameraParams_Response_r_k l_k(::astra_camera_msgs::srv::GetCameraParams_Response::_l_k_type arg)
  {
    msg_.l_k = std::move(arg);
    return Init_GetCameraParams_Response_r_k(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetCameraParams_Response msg_;
};

class Init_GetCameraParams_Response_r2l_t
{
public:
  explicit Init_GetCameraParams_Response_r2l_t(::astra_camera_msgs::srv::GetCameraParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetCameraParams_Response_l_k r2l_t(::astra_camera_msgs::srv::GetCameraParams_Response::_r2l_t_type arg)
  {
    msg_.r2l_t = std::move(arg);
    return Init_GetCameraParams_Response_l_k(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetCameraParams_Response msg_;
};

class Init_GetCameraParams_Response_r2l_r
{
public:
  explicit Init_GetCameraParams_Response_r2l_r(::astra_camera_msgs::srv::GetCameraParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetCameraParams_Response_r2l_t r2l_r(::astra_camera_msgs::srv::GetCameraParams_Response::_r2l_r_type arg)
  {
    msg_.r2l_r = std::move(arg);
    return Init_GetCameraParams_Response_r2l_t(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetCameraParams_Response msg_;
};

class Init_GetCameraParams_Response_r_intr_p
{
public:
  explicit Init_GetCameraParams_Response_r_intr_p(::astra_camera_msgs::srv::GetCameraParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetCameraParams_Response_r2l_r r_intr_p(::astra_camera_msgs::srv::GetCameraParams_Response::_r_intr_p_type arg)
  {
    msg_.r_intr_p = std::move(arg);
    return Init_GetCameraParams_Response_r2l_r(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetCameraParams_Response msg_;
};

class Init_GetCameraParams_Response_l_intr_p
{
public:
  Init_GetCameraParams_Response_l_intr_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCameraParams_Response_r_intr_p l_intr_p(::astra_camera_msgs::srv::GetCameraParams_Response::_l_intr_p_type arg)
  {
    msg_.l_intr_p = std::move(arg);
    return Init_GetCameraParams_Response_r_intr_p(msg_);
  }

private:
  ::astra_camera_msgs::srv::GetCameraParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::astra_camera_msgs::srv::GetCameraParams_Response>()
{
  return astra_camera_msgs::srv::builder::Init_GetCameraParams_Response_l_intr_p();
}

}  // namespace astra_camera_msgs

#endif  // ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__BUILDER_HPP_
