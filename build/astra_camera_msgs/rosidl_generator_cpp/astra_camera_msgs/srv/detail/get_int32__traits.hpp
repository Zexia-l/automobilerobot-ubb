// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from astra_camera_msgs:srv/GetInt32.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_INT32__TRAITS_HPP_
#define ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_INT32__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "astra_camera_msgs/srv/detail/get_int32__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace astra_camera_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetInt32_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetInt32_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetInt32_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace astra_camera_msgs

namespace rosidl_generator_traits
{

[[deprecated("use astra_camera_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const astra_camera_msgs::srv::GetInt32_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  astra_camera_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use astra_camera_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const astra_camera_msgs::srv::GetInt32_Request & msg)
{
  return astra_camera_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<astra_camera_msgs::srv::GetInt32_Request>()
{
  return "astra_camera_msgs::srv::GetInt32_Request";
}

template<>
inline const char * name<astra_camera_msgs::srv::GetInt32_Request>()
{
  return "astra_camera_msgs/srv/GetInt32_Request";
}

template<>
struct has_fixed_size<astra_camera_msgs::srv::GetInt32_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<astra_camera_msgs::srv::GetInt32_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<astra_camera_msgs::srv::GetInt32_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace astra_camera_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetInt32_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetInt32_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetInt32_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace astra_camera_msgs

namespace rosidl_generator_traits
{

[[deprecated("use astra_camera_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const astra_camera_msgs::srv::GetInt32_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  astra_camera_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use astra_camera_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const astra_camera_msgs::srv::GetInt32_Response & msg)
{
  return astra_camera_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<astra_camera_msgs::srv::GetInt32_Response>()
{
  return "astra_camera_msgs::srv::GetInt32_Response";
}

template<>
inline const char * name<astra_camera_msgs::srv::GetInt32_Response>()
{
  return "astra_camera_msgs/srv/GetInt32_Response";
}

template<>
struct has_fixed_size<astra_camera_msgs::srv::GetInt32_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<astra_camera_msgs::srv::GetInt32_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<astra_camera_msgs::srv::GetInt32_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<astra_camera_msgs::srv::GetInt32>()
{
  return "astra_camera_msgs::srv::GetInt32";
}

template<>
inline const char * name<astra_camera_msgs::srv::GetInt32>()
{
  return "astra_camera_msgs/srv/GetInt32";
}

template<>
struct has_fixed_size<astra_camera_msgs::srv::GetInt32>
  : std::integral_constant<
    bool,
    has_fixed_size<astra_camera_msgs::srv::GetInt32_Request>::value &&
    has_fixed_size<astra_camera_msgs::srv::GetInt32_Response>::value
  >
{
};

template<>
struct has_bounded_size<astra_camera_msgs::srv::GetInt32>
  : std::integral_constant<
    bool,
    has_bounded_size<astra_camera_msgs::srv::GetInt32_Request>::value &&
    has_bounded_size<astra_camera_msgs::srv::GetInt32_Response>::value
  >
{
};

template<>
struct is_service<astra_camera_msgs::srv::GetInt32>
  : std::true_type
{
};

template<>
struct is_service_request<astra_camera_msgs::srv::GetInt32_Request>
  : std::true_type
{
};

template<>
struct is_service_response<astra_camera_msgs::srv::GetInt32_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_INT32__TRAITS_HPP_
