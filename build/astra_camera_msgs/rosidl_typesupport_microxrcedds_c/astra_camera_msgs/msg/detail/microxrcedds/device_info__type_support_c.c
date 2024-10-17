// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from astra_camera_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "astra_camera_msgs/msg/detail/device_info__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "astra_camera_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "astra_camera_msgs/msg/detail/device_info__struct.h"
#include "astra_camera_msgs/msg/detail/device_info__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // firmware_version, hardware_version, name, serial_number, supported_min_sdk_version
#include "rosidl_runtime_c/string_functions.h"  // firmware_version, hardware_version, name, serial_number, supported_min_sdk_version
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_astra_camera_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_astra_camera_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_astra_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef astra_camera_msgs__msg__DeviceInfo _DeviceInfo__ros_msg_type;

static bool _DeviceInfo__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _DeviceInfo__ros_msg_type * ros_message = (_DeviceInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: name
 {
    uint32_t string_len = (ros_message->name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->name.data) + 1;
    ros_message->name.size = (ros_message->name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->name.data, string_len);
  }
  // Member: vid
  rv = ucdr_serialize_int32_t(cdr, ros_message->vid);
  // Member: pid
  rv = ucdr_serialize_int32_t(cdr, ros_message->pid);
  // Member: serial_number
 {
    uint32_t string_len = (ros_message->serial_number.data == NULL) ? 0 : (uint32_t)strlen(ros_message->serial_number.data) + 1;
    ros_message->serial_number.size = (ros_message->serial_number.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->serial_number.data, string_len);
  }
  // Member: firmware_version
 {
    uint32_t string_len = (ros_message->firmware_version.data == NULL) ? 0 : (uint32_t)strlen(ros_message->firmware_version.data) + 1;
    ros_message->firmware_version.size = (ros_message->firmware_version.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->firmware_version.data, string_len);
  }
  // Member: supported_min_sdk_version
 {
    uint32_t string_len = (ros_message->supported_min_sdk_version.data == NULL) ? 0 : (uint32_t)strlen(ros_message->supported_min_sdk_version.data) + 1;
    ros_message->supported_min_sdk_version.size = (ros_message->supported_min_sdk_version.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->supported_min_sdk_version.data, string_len);
  }
  // Member: hardware_version
 {
    uint32_t string_len = (ros_message->hardware_version.data == NULL) ? 0 : (uint32_t)strlen(ros_message->hardware_version.data) + 1;
    ros_message->hardware_version.size = (ros_message->hardware_version.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->hardware_version.data, string_len);
  }

  return rv;
}

static bool _DeviceInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _DeviceInfo__ros_msg_type * ros_message = (_DeviceInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: name
  {
    size_t capacity = ros_message->name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->name.data, capacity, &string_size);
    if (rv) {
      ros_message->name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: vid
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->vid);
  // Field name: pid
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->pid);
  // Field name: serial_number
  {
    size_t capacity = ros_message->serial_number.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->serial_number.data, capacity, &string_size);
    if (rv) {
      ros_message->serial_number.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->serial_number.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: firmware_version
  {
    size_t capacity = ros_message->firmware_version.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->firmware_version.data, capacity, &string_size);
    if (rv) {
      ros_message->firmware_version.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->firmware_version.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: supported_min_sdk_version
  {
    size_t capacity = ros_message->supported_min_sdk_version.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->supported_min_sdk_version.data, capacity, &string_size);
    if (rv) {
      ros_message->supported_min_sdk_version.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->supported_min_sdk_version.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: hardware_version
  {
    size_t capacity = ros_message->hardware_version.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->hardware_version.data, capacity, &string_size);
    if (rv) {
      ros_message->hardware_version.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->hardware_version.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_astra_camera_msgs
size_t get_serialized_size_astra_camera_msgs__msg__DeviceInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _DeviceInfo__ros_msg_type * ros_message = (const _DeviceInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->name.size + 1;
  // Member: vid
  {
    const size_t item_size = sizeof(ros_message->vid);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: pid
  {
    const size_t item_size = sizeof(ros_message->pid);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: serial_number
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->serial_number.size + 1;
  // Member: firmware_version
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->firmware_version.size + 1;
  // Member: supported_min_sdk_version
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->supported_min_sdk_version.size + 1;
  // Member: hardware_version
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->hardware_version.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _DeviceInfo__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_astra_camera_msgs__msg__DeviceInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_astra_camera_msgs
size_t max_serialized_size_astra_camera_msgs__msg__DeviceInfo(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: name
  *full_bounded = false;
  // Member: vid
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: pid
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: serial_number
  *full_bounded = false;
  // Member: firmware_version
  *full_bounded = false;
  // Member: supported_min_sdk_version
  *full_bounded = false;
  // Member: hardware_version
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _DeviceInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_astra_camera_msgs__msg__DeviceInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_DeviceInfo = {
  "astra_camera_msgs::msg",
  "DeviceInfo",
  _DeviceInfo__cdr_serialize,
  _DeviceInfo__cdr_deserialize,
  _DeviceInfo__get_serialized_size,
  get_serialized_size_astra_camera_msgs__msg__DeviceInfo,
  _DeviceInfo__max_serialized_size
};

static rosidl_message_type_support_t _DeviceInfo__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_DeviceInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, astra_camera_msgs, msg, DeviceInfo)() {
  return &_DeviceInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
