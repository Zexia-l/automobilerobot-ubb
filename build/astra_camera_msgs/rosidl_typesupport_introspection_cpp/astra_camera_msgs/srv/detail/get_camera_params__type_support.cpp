// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from astra_camera_msgs:srv/GetCameraParams.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "astra_camera_msgs/srv/detail/get_camera_params__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace astra_camera_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetCameraParams_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) astra_camera_msgs::srv::GetCameraParams_Request(_init);
}

void GetCameraParams_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<astra_camera_msgs::srv::GetCameraParams_Request *>(message_memory);
  typed_message->~GetCameraParams_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetCameraParams_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs::srv::GetCameraParams_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetCameraParams_Request_message_members = {
  "astra_camera_msgs::srv",  // message namespace
  "GetCameraParams_Request",  // message name
  1,  // number of fields
  sizeof(astra_camera_msgs::srv::GetCameraParams_Request),
  GetCameraParams_Request_message_member_array,  // message members
  GetCameraParams_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetCameraParams_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetCameraParams_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetCameraParams_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace astra_camera_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<astra_camera_msgs::srv::GetCameraParams_Request>()
{
  return &::astra_camera_msgs::srv::rosidl_typesupport_introspection_cpp::GetCameraParams_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, astra_camera_msgs, srv, GetCameraParams_Request)() {
  return &::astra_camera_msgs::srv::rosidl_typesupport_introspection_cpp::GetCameraParams_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "astra_camera_msgs/srv/detail/get_camera_params__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace astra_camera_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetCameraParams_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) astra_camera_msgs::srv::GetCameraParams_Response(_init);
}

void GetCameraParams_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<astra_camera_msgs::srv::GetCameraParams_Response *>(message_memory);
  typed_message->~GetCameraParams_Response();
}

size_t size_function__GetCameraParams_Response__l_intr_p(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__GetCameraParams_Response__l_intr_p(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__GetCameraParams_Response__l_intr_p(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetCameraParams_Response__l_intr_p(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__GetCameraParams_Response__l_intr_p(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__GetCameraParams_Response__l_intr_p(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__GetCameraParams_Response__l_intr_p(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__GetCameraParams_Response__r_intr_p(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__GetCameraParams_Response__r_intr_p(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__GetCameraParams_Response__r_intr_p(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetCameraParams_Response__r_intr_p(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__GetCameraParams_Response__r_intr_p(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__GetCameraParams_Response__r_intr_p(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__GetCameraParams_Response__r_intr_p(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__GetCameraParams_Response__r2l_r(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__GetCameraParams_Response__r2l_r(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__GetCameraParams_Response__r2l_r(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetCameraParams_Response__r2l_r(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__GetCameraParams_Response__r2l_r(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__GetCameraParams_Response__r2l_r(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__GetCameraParams_Response__r2l_r(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__GetCameraParams_Response__r2l_t(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__GetCameraParams_Response__r2l_t(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__GetCameraParams_Response__r2l_t(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetCameraParams_Response__r2l_t(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__GetCameraParams_Response__r2l_t(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__GetCameraParams_Response__r2l_t(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__GetCameraParams_Response__r2l_t(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__GetCameraParams_Response__l_k(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__GetCameraParams_Response__l_k(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__GetCameraParams_Response__l_k(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetCameraParams_Response__l_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__GetCameraParams_Response__l_k(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__GetCameraParams_Response__l_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__GetCameraParams_Response__l_k(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__GetCameraParams_Response__r_k(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__GetCameraParams_Response__r_k(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__GetCameraParams_Response__r_k(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetCameraParams_Response__r_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__GetCameraParams_Response__r_k(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__GetCameraParams_Response__r_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__GetCameraParams_Response__r_k(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetCameraParams_Response_message_member_array[8] = {
  {
    "l_intr_p",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs::srv::GetCameraParams_Response, l_intr_p),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetCameraParams_Response__l_intr_p,  // size() function pointer
    get_const_function__GetCameraParams_Response__l_intr_p,  // get_const(index) function pointer
    get_function__GetCameraParams_Response__l_intr_p,  // get(index) function pointer
    fetch_function__GetCameraParams_Response__l_intr_p,  // fetch(index, &value) function pointer
    assign_function__GetCameraParams_Response__l_intr_p,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "r_intr_p",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs::srv::GetCameraParams_Response, r_intr_p),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetCameraParams_Response__r_intr_p,  // size() function pointer
    get_const_function__GetCameraParams_Response__r_intr_p,  // get_const(index) function pointer
    get_function__GetCameraParams_Response__r_intr_p,  // get(index) function pointer
    fetch_function__GetCameraParams_Response__r_intr_p,  // fetch(index, &value) function pointer
    assign_function__GetCameraParams_Response__r_intr_p,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "r2l_r",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs::srv::GetCameraParams_Response, r2l_r),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetCameraParams_Response__r2l_r,  // size() function pointer
    get_const_function__GetCameraParams_Response__r2l_r,  // get_const(index) function pointer
    get_function__GetCameraParams_Response__r2l_r,  // get(index) function pointer
    fetch_function__GetCameraParams_Response__r2l_r,  // fetch(index, &value) function pointer
    assign_function__GetCameraParams_Response__r2l_r,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "r2l_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs::srv::GetCameraParams_Response, r2l_t),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetCameraParams_Response__r2l_t,  // size() function pointer
    get_const_function__GetCameraParams_Response__r2l_t,  // get_const(index) function pointer
    get_function__GetCameraParams_Response__r2l_t,  // get(index) function pointer
    fetch_function__GetCameraParams_Response__r2l_t,  // fetch(index, &value) function pointer
    assign_function__GetCameraParams_Response__r2l_t,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l_k",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs::srv::GetCameraParams_Response, l_k),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetCameraParams_Response__l_k,  // size() function pointer
    get_const_function__GetCameraParams_Response__l_k,  // get_const(index) function pointer
    get_function__GetCameraParams_Response__l_k,  // get(index) function pointer
    fetch_function__GetCameraParams_Response__l_k,  // fetch(index, &value) function pointer
    assign_function__GetCameraParams_Response__l_k,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "r_k",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs::srv::GetCameraParams_Response, r_k),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetCameraParams_Response__r_k,  // size() function pointer
    get_const_function__GetCameraParams_Response__r_k,  // get_const(index) function pointer
    get_function__GetCameraParams_Response__r_k,  // get(index) function pointer
    fetch_function__GetCameraParams_Response__r_k,  // fetch(index, &value) function pointer
    assign_function__GetCameraParams_Response__r_k,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs::srv::GetCameraParams_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs::srv::GetCameraParams_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetCameraParams_Response_message_members = {
  "astra_camera_msgs::srv",  // message namespace
  "GetCameraParams_Response",  // message name
  8,  // number of fields
  sizeof(astra_camera_msgs::srv::GetCameraParams_Response),
  GetCameraParams_Response_message_member_array,  // message members
  GetCameraParams_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetCameraParams_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetCameraParams_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetCameraParams_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace astra_camera_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<astra_camera_msgs::srv::GetCameraParams_Response>()
{
  return &::astra_camera_msgs::srv::rosidl_typesupport_introspection_cpp::GetCameraParams_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, astra_camera_msgs, srv, GetCameraParams_Response)() {
  return &::astra_camera_msgs::srv::rosidl_typesupport_introspection_cpp::GetCameraParams_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "astra_camera_msgs/srv/detail/get_camera_params__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace astra_camera_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetCameraParams_service_members = {
  "astra_camera_msgs::srv",  // service namespace
  "GetCameraParams",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<astra_camera_msgs::srv::GetCameraParams>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetCameraParams_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetCameraParams_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace astra_camera_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<astra_camera_msgs::srv::GetCameraParams>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::astra_camera_msgs::srv::rosidl_typesupport_introspection_cpp::GetCameraParams_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::astra_camera_msgs::srv::GetCameraParams_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::astra_camera_msgs::srv::GetCameraParams_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, astra_camera_msgs, srv, GetCameraParams)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<astra_camera_msgs::srv::GetCameraParams>();
}

#ifdef __cplusplus
}
#endif
