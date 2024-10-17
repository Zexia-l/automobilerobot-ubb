// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from astra_camera_msgs:srv/GetCameraParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "astra_camera_msgs/srv/detail/get_camera_params__rosidl_typesupport_introspection_c.h"
#include "astra_camera_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "astra_camera_msgs/srv/detail/get_camera_params__functions.h"
#include "astra_camera_msgs/srv/detail/get_camera_params__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  astra_camera_msgs__srv__GetCameraParams_Request__init(message_memory);
}

void astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_fini_function(void * message_memory)
{
  astra_camera_msgs__srv__GetCameraParams_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__srv__GetCameraParams_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_message_members = {
  "astra_camera_msgs__srv",  // message namespace
  "GetCameraParams_Request",  // message name
  1,  // number of fields
  sizeof(astra_camera_msgs__srv__GetCameraParams_Request),
  astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_message_member_array,  // message members
  astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_message_type_support_handle = {
  0,
  &astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_astra_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, astra_camera_msgs, srv, GetCameraParams_Request)() {
  if (!astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_message_type_support_handle.typesupport_identifier) {
    astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &astra_camera_msgs__srv__GetCameraParams_Request__rosidl_typesupport_introspection_c__GetCameraParams_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "astra_camera_msgs/srv/detail/get_camera_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "astra_camera_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "astra_camera_msgs/srv/detail/get_camera_params__functions.h"
// already included above
// #include "astra_camera_msgs/srv/detail/get_camera_params__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  astra_camera_msgs__srv__GetCameraParams_Response__init(message_memory);
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_fini_function(void * message_memory)
{
  astra_camera_msgs__srv__GetCameraParams_Response__fini(message_memory);
}

size_t astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__l_intr_p(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__l_intr_p(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__l_intr_p(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__l_intr_p(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__l_intr_p(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__l_intr_p(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__l_intr_p(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__r_intr_p(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r_intr_p(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r_intr_p(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__r_intr_p(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r_intr_p(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__r_intr_p(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r_intr_p(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__r2l_r(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r2l_r(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r2l_r(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__r2l_r(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r2l_r(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__r2l_r(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r2l_r(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__r2l_t(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r2l_t(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r2l_t(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__r2l_t(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r2l_t(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__r2l_t(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r2l_t(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__l_k(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__l_k(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__l_k(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__l_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__l_k(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__l_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__l_k(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__r_k(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r_k(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r_k(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__r_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r_k(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__r_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r_k(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_message_member_array[8] = {
  {
    "l_intr_p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__srv__GetCameraParams_Response, l_intr_p),  // bytes offset in struct
    NULL,  // default value
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__l_intr_p,  // size() function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__l_intr_p,  // get_const(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__l_intr_p,  // get(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__l_intr_p,  // fetch(index, &value) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__l_intr_p,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r_intr_p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__srv__GetCameraParams_Response, r_intr_p),  // bytes offset in struct
    NULL,  // default value
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__r_intr_p,  // size() function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r_intr_p,  // get_const(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r_intr_p,  // get(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__r_intr_p,  // fetch(index, &value) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__r_intr_p,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r2l_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__srv__GetCameraParams_Response, r2l_r),  // bytes offset in struct
    NULL,  // default value
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__r2l_r,  // size() function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r2l_r,  // get_const(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r2l_r,  // get(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__r2l_r,  // fetch(index, &value) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__r2l_r,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r2l_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__srv__GetCameraParams_Response, r2l_t),  // bytes offset in struct
    NULL,  // default value
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__r2l_t,  // size() function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r2l_t,  // get_const(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r2l_t,  // get(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__r2l_t,  // fetch(index, &value) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__r2l_t,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "l_k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__srv__GetCameraParams_Response, l_k),  // bytes offset in struct
    NULL,  // default value
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__l_k,  // size() function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__l_k,  // get_const(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__l_k,  // get(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__l_k,  // fetch(index, &value) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__l_k,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r_k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__srv__GetCameraParams_Response, r_k),  // bytes offset in struct
    NULL,  // default value
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__size_function__GetCameraParams_Response__r_k,  // size() function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetCameraParams_Response__r_k,  // get_const(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__get_function__GetCameraParams_Response__r_k,  // get(index) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetCameraParams_Response__r_k,  // fetch(index, &value) function pointer
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__assign_function__GetCameraParams_Response__r_k,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__srv__GetCameraParams_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__srv__GetCameraParams_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_message_members = {
  "astra_camera_msgs__srv",  // message namespace
  "GetCameraParams_Response",  // message name
  8,  // number of fields
  sizeof(astra_camera_msgs__srv__GetCameraParams_Response),
  astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_message_member_array,  // message members
  astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_message_type_support_handle = {
  0,
  &astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_astra_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, astra_camera_msgs, srv, GetCameraParams_Response)() {
  if (!astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_message_type_support_handle.typesupport_identifier) {
    astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &astra_camera_msgs__srv__GetCameraParams_Response__rosidl_typesupport_introspection_c__GetCameraParams_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "astra_camera_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "astra_camera_msgs/srv/detail/get_camera_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers astra_camera_msgs__srv__detail__get_camera_params__rosidl_typesupport_introspection_c__GetCameraParams_service_members = {
  "astra_camera_msgs__srv",  // service namespace
  "GetCameraParams",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // astra_camera_msgs__srv__detail__get_camera_params__rosidl_typesupport_introspection_c__GetCameraParams_Request_message_type_support_handle,
  NULL  // response message
  // astra_camera_msgs__srv__detail__get_camera_params__rosidl_typesupport_introspection_c__GetCameraParams_Response_message_type_support_handle
};

static rosidl_service_type_support_t astra_camera_msgs__srv__detail__get_camera_params__rosidl_typesupport_introspection_c__GetCameraParams_service_type_support_handle = {
  0,
  &astra_camera_msgs__srv__detail__get_camera_params__rosidl_typesupport_introspection_c__GetCameraParams_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, astra_camera_msgs, srv, GetCameraParams_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, astra_camera_msgs, srv, GetCameraParams_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_astra_camera_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, astra_camera_msgs, srv, GetCameraParams)() {
  if (!astra_camera_msgs__srv__detail__get_camera_params__rosidl_typesupport_introspection_c__GetCameraParams_service_type_support_handle.typesupport_identifier) {
    astra_camera_msgs__srv__detail__get_camera_params__rosidl_typesupport_introspection_c__GetCameraParams_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)astra_camera_msgs__srv__detail__get_camera_params__rosidl_typesupport_introspection_c__GetCameraParams_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, astra_camera_msgs, srv, GetCameraParams_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, astra_camera_msgs, srv, GetCameraParams_Response)()->data;
  }

  return &astra_camera_msgs__srv__detail__get_camera_params__rosidl_typesupport_introspection_c__GetCameraParams_service_type_support_handle;
}
