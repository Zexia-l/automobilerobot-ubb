// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from astra_camera_msgs:srv/GetCameraParams.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__STRUCT_HPP_
#define ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__astra_camera_msgs__srv__GetCameraParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__astra_camera_msgs__srv__GetCameraParams_Request __declspec(deprecated)
#endif

namespace astra_camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCameraParams_Request_
{
  using Type = GetCameraParams_Request_<ContainerAllocator>;

  explicit GetCameraParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetCameraParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__astra_camera_msgs__srv__GetCameraParams_Request
    std::shared_ptr<astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__astra_camera_msgs__srv__GetCameraParams_Request
    std::shared_ptr<astra_camera_msgs::srv::GetCameraParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCameraParams_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCameraParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCameraParams_Request_

// alias to use template instance with default allocator
using GetCameraParams_Request =
  astra_camera_msgs::srv::GetCameraParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace astra_camera_msgs


#ifndef _WIN32
# define DEPRECATED__astra_camera_msgs__srv__GetCameraParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__astra_camera_msgs__srv__GetCameraParams_Response __declspec(deprecated)
#endif

namespace astra_camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCameraParams_Response_
{
  using Type = GetCameraParams_Response_<ContainerAllocator>;

  explicit GetCameraParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->l_intr_p.begin(), this->l_intr_p.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->r_intr_p.begin(), this->r_intr_p.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->r2l_r.begin(), this->r2l_r.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->r2l_t.begin(), this->r2l_t.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->l_k.begin(), this->l_k.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->r_k.begin(), this->r_k.end(), 0.0f);
      this->success = false;
      this->message = "";
    }
  }

  explicit GetCameraParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : l_intr_p(_alloc),
    r_intr_p(_alloc),
    r2l_r(_alloc),
    r2l_t(_alloc),
    l_k(_alloc),
    r_k(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->l_intr_p.begin(), this->l_intr_p.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->r_intr_p.begin(), this->r_intr_p.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->r2l_r.begin(), this->r2l_r.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->r2l_t.begin(), this->r2l_t.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->l_k.begin(), this->l_k.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->r_k.begin(), this->r_k.end(), 0.0f);
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _l_intr_p_type =
    std::array<float, 4>;
  _l_intr_p_type l_intr_p;
  using _r_intr_p_type =
    std::array<float, 4>;
  _r_intr_p_type r_intr_p;
  using _r2l_r_type =
    std::array<float, 9>;
  _r2l_r_type r2l_r;
  using _r2l_t_type =
    std::array<float, 3>;
  _r2l_t_type r2l_t;
  using _l_k_type =
    std::array<float, 5>;
  _l_k_type l_k;
  using _r_k_type =
    std::array<float, 5>;
  _r_k_type r_k;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__l_intr_p(
    const std::array<float, 4> & _arg)
  {
    this->l_intr_p = _arg;
    return *this;
  }
  Type & set__r_intr_p(
    const std::array<float, 4> & _arg)
  {
    this->r_intr_p = _arg;
    return *this;
  }
  Type & set__r2l_r(
    const std::array<float, 9> & _arg)
  {
    this->r2l_r = _arg;
    return *this;
  }
  Type & set__r2l_t(
    const std::array<float, 3> & _arg)
  {
    this->r2l_t = _arg;
    return *this;
  }
  Type & set__l_k(
    const std::array<float, 5> & _arg)
  {
    this->l_k = _arg;
    return *this;
  }
  Type & set__r_k(
    const std::array<float, 5> & _arg)
  {
    this->r_k = _arg;
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
    astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__astra_camera_msgs__srv__GetCameraParams_Response
    std::shared_ptr<astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__astra_camera_msgs__srv__GetCameraParams_Response
    std::shared_ptr<astra_camera_msgs::srv::GetCameraParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCameraParams_Response_ & other) const
  {
    if (this->l_intr_p != other.l_intr_p) {
      return false;
    }
    if (this->r_intr_p != other.r_intr_p) {
      return false;
    }
    if (this->r2l_r != other.r2l_r) {
      return false;
    }
    if (this->r2l_t != other.r2l_t) {
      return false;
    }
    if (this->l_k != other.l_k) {
      return false;
    }
    if (this->r_k != other.r_k) {
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
  bool operator!=(const GetCameraParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCameraParams_Response_

// alias to use template instance with default allocator
using GetCameraParams_Response =
  astra_camera_msgs::srv::GetCameraParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace astra_camera_msgs

namespace astra_camera_msgs
{

namespace srv
{

struct GetCameraParams
{
  using Request = astra_camera_msgs::srv::GetCameraParams_Request;
  using Response = astra_camera_msgs::srv::GetCameraParams_Response;
};

}  // namespace srv

}  // namespace astra_camera_msgs

#endif  // ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__STRUCT_HPP_
