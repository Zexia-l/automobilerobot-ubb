// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from astra_camera_msgs:msg/Metadata.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__MSG__DETAIL__METADATA__BUILDER_HPP_
#define ASTRA_CAMERA_MSGS__MSG__DETAIL__METADATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "astra_camera_msgs/msg/detail/metadata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace astra_camera_msgs
{

namespace msg
{

namespace builder
{

class Init_Metadata_json_data
{
public:
  explicit Init_Metadata_json_data(::astra_camera_msgs::msg::Metadata & msg)
  : msg_(msg)
  {}
  ::astra_camera_msgs::msg::Metadata json_data(::astra_camera_msgs::msg::Metadata::_json_data_type arg)
  {
    msg_.json_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::astra_camera_msgs::msg::Metadata msg_;
};

class Init_Metadata_header
{
public:
  Init_Metadata_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Metadata_json_data header(::astra_camera_msgs::msg::Metadata::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Metadata_json_data(msg_);
  }

private:
  ::astra_camera_msgs::msg::Metadata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::astra_camera_msgs::msg::Metadata>()
{
  return astra_camera_msgs::msg::builder::Init_Metadata_header();
}

}  // namespace astra_camera_msgs

#endif  // ASTRA_CAMERA_MSGS__MSG__DETAIL__METADATA__BUILDER_HPP_
