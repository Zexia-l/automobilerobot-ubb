// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from astra_camera_msgs:msg/Extrinsics.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__MSG__DETAIL__EXTRINSICS__BUILDER_HPP_
#define ASTRA_CAMERA_MSGS__MSG__DETAIL__EXTRINSICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "astra_camera_msgs/msg/detail/extrinsics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace astra_camera_msgs
{

namespace msg
{

namespace builder
{

class Init_Extrinsics_translation
{
public:
  explicit Init_Extrinsics_translation(::astra_camera_msgs::msg::Extrinsics & msg)
  : msg_(msg)
  {}
  ::astra_camera_msgs::msg::Extrinsics translation(::astra_camera_msgs::msg::Extrinsics::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::astra_camera_msgs::msg::Extrinsics msg_;
};

class Init_Extrinsics_rotation
{
public:
  explicit Init_Extrinsics_rotation(::astra_camera_msgs::msg::Extrinsics & msg)
  : msg_(msg)
  {}
  Init_Extrinsics_translation rotation(::astra_camera_msgs::msg::Extrinsics::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_Extrinsics_translation(msg_);
  }

private:
  ::astra_camera_msgs::msg::Extrinsics msg_;
};

class Init_Extrinsics_header
{
public:
  Init_Extrinsics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Extrinsics_rotation header(::astra_camera_msgs::msg::Extrinsics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Extrinsics_rotation(msg_);
  }

private:
  ::astra_camera_msgs::msg::Extrinsics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::astra_camera_msgs::msg::Extrinsics>()
{
  return astra_camera_msgs::msg::builder::Init_Extrinsics_header();
}

}  // namespace astra_camera_msgs

#endif  // ASTRA_CAMERA_MSGS__MSG__DETAIL__EXTRINSICS__BUILDER_HPP_
