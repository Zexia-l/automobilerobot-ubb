// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from astra_camera_msgs:srv/GetString.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_STRING__STRUCT_HPP_
#define ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_STRING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__astra_camera_msgs__srv__GetString_Request __attribute__((deprecated))
#else
# define DEPRECATED__astra_camera_msgs__srv__GetString_Request __declspec(deprecated)
#endif

namespace astra_camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetString_Request_
{
  using Type = GetString_Request_<ContainerAllocator>;

  explicit GetString_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetString_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    astra_camera_msgs::srv::GetString_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const astra_camera_msgs::srv::GetString_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<astra_camera_msgs::srv::GetString_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<astra_camera_msgs::srv::GetString_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      astra_camera_msgs::srv::GetString_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<astra_camera_msgs::srv::GetString_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      astra_camera_msgs::srv::GetString_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<astra_camera_msgs::srv::GetString_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<astra_camera_msgs::srv::GetString_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<astra_camera_msgs::srv::GetString_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__astra_camera_msgs__srv__GetString_Request
    std::shared_ptr<astra_camera_msgs::srv::GetString_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__astra_camera_msgs__srv__GetString_Request
    std::shared_ptr<astra_camera_msgs::srv::GetString_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetString_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetString_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetString_Request_

// alias to use template instance with default allocator
using GetString_Request =
  astra_camera_msgs::srv::GetString_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace astra_camera_msgs


#ifndef _WIN32
# define DEPRECATED__astra_camera_msgs__srv__GetString_Response __attribute__((deprecated))
#else
# define DEPRECATED__astra_camera_msgs__srv__GetString_Response __declspec(deprecated)
#endif

namespace astra_camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetString_Response_
{
  using Type = GetString_Response_<ContainerAllocator>;

  explicit GetString_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->success = false;
      this->message = "";
    }
  }

  explicit GetString_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    astra_camera_msgs::srv::GetString_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const astra_camera_msgs::srv::GetString_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<astra_camera_msgs::srv::GetString_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<astra_camera_msgs::srv::GetString_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      astra_camera_msgs::srv::GetString_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<astra_camera_msgs::srv::GetString_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      astra_camera_msgs::srv::GetString_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<astra_camera_msgs::srv::GetString_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<astra_camera_msgs::srv::GetString_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<astra_camera_msgs::srv::GetString_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__astra_camera_msgs__srv__GetString_Response
    std::shared_ptr<astra_camera_msgs::srv::GetString_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__astra_camera_msgs__srv__GetString_Response
    std::shared_ptr<astra_camera_msgs::srv::GetString_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetString_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetString_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetString_Response_

// alias to use template instance with default allocator
using GetString_Response =
  astra_camera_msgs::srv::GetString_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace astra_camera_msgs

namespace astra_camera_msgs
{

namespace srv
{

struct GetString
{
  using Request = astra_camera_msgs::srv::GetString_Request;
  using Response = astra_camera_msgs::srv::GetString_Response;
};

}  // namespace srv

}  // namespace astra_camera_msgs

#endif  // ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_STRING__STRUCT_HPP_
