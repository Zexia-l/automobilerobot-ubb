// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from astra_camera_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "astra_camera_msgs/msg/detail/device_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
// Member `serial_number`
// Member `firmware_version`
// Member `supported_min_sdk_version`
// Member `hardware_version`
#include "rosidl_runtime_c/string_functions.h"

bool
astra_camera_msgs__msg__DeviceInfo__init(astra_camera_msgs__msg__DeviceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    astra_camera_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    astra_camera_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // vid
  // pid
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    astra_camera_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__init(&msg->firmware_version)) {
    astra_camera_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // supported_min_sdk_version
  if (!rosidl_runtime_c__String__init(&msg->supported_min_sdk_version)) {
    astra_camera_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__init(&msg->hardware_version)) {
    astra_camera_msgs__msg__DeviceInfo__fini(msg);
    return false;
  }
  return true;
}

void
astra_camera_msgs__msg__DeviceInfo__fini(astra_camera_msgs__msg__DeviceInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // vid
  // pid
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
  // firmware_version
  rosidl_runtime_c__String__fini(&msg->firmware_version);
  // supported_min_sdk_version
  rosidl_runtime_c__String__fini(&msg->supported_min_sdk_version);
  // hardware_version
  rosidl_runtime_c__String__fini(&msg->hardware_version);
}

bool
astra_camera_msgs__msg__DeviceInfo__are_equal(const astra_camera_msgs__msg__DeviceInfo * lhs, const astra_camera_msgs__msg__DeviceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // vid
  if (lhs->vid != rhs->vid) {
    return false;
  }
  // pid
  if (lhs->pid != rhs->pid) {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_number), &(rhs->serial_number)))
  {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_version), &(rhs->firmware_version)))
  {
    return false;
  }
  // supported_min_sdk_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->supported_min_sdk_version), &(rhs->supported_min_sdk_version)))
  {
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hardware_version), &(rhs->hardware_version)))
  {
    return false;
  }
  return true;
}

bool
astra_camera_msgs__msg__DeviceInfo__copy(
  const astra_camera_msgs__msg__DeviceInfo * input,
  astra_camera_msgs__msg__DeviceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // vid
  output->vid = input->vid;
  // pid
  output->pid = input->pid;
  // serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_number), &(output->serial_number)))
  {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_version), &(output->firmware_version)))
  {
    return false;
  }
  // supported_min_sdk_version
  if (!rosidl_runtime_c__String__copy(
      &(input->supported_min_sdk_version), &(output->supported_min_sdk_version)))
  {
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->hardware_version), &(output->hardware_version)))
  {
    return false;
  }
  return true;
}

astra_camera_msgs__msg__DeviceInfo *
astra_camera_msgs__msg__DeviceInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  astra_camera_msgs__msg__DeviceInfo * msg = (astra_camera_msgs__msg__DeviceInfo *)allocator.allocate(sizeof(astra_camera_msgs__msg__DeviceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(astra_camera_msgs__msg__DeviceInfo));
  bool success = astra_camera_msgs__msg__DeviceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
astra_camera_msgs__msg__DeviceInfo__destroy(astra_camera_msgs__msg__DeviceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    astra_camera_msgs__msg__DeviceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
astra_camera_msgs__msg__DeviceInfo__Sequence__init(astra_camera_msgs__msg__DeviceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  astra_camera_msgs__msg__DeviceInfo * data = NULL;

  if (size) {
    data = (astra_camera_msgs__msg__DeviceInfo *)allocator.zero_allocate(size, sizeof(astra_camera_msgs__msg__DeviceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = astra_camera_msgs__msg__DeviceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        astra_camera_msgs__msg__DeviceInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
astra_camera_msgs__msg__DeviceInfo__Sequence__fini(astra_camera_msgs__msg__DeviceInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      astra_camera_msgs__msg__DeviceInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

astra_camera_msgs__msg__DeviceInfo__Sequence *
astra_camera_msgs__msg__DeviceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  astra_camera_msgs__msg__DeviceInfo__Sequence * array = (astra_camera_msgs__msg__DeviceInfo__Sequence *)allocator.allocate(sizeof(astra_camera_msgs__msg__DeviceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = astra_camera_msgs__msg__DeviceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
astra_camera_msgs__msg__DeviceInfo__Sequence__destroy(astra_camera_msgs__msg__DeviceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    astra_camera_msgs__msg__DeviceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
astra_camera_msgs__msg__DeviceInfo__Sequence__are_equal(const astra_camera_msgs__msg__DeviceInfo__Sequence * lhs, const astra_camera_msgs__msg__DeviceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!astra_camera_msgs__msg__DeviceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
astra_camera_msgs__msg__DeviceInfo__Sequence__copy(
  const astra_camera_msgs__msg__DeviceInfo__Sequence * input,
  astra_camera_msgs__msg__DeviceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(astra_camera_msgs__msg__DeviceInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    astra_camera_msgs__msg__DeviceInfo * data =
      (astra_camera_msgs__msg__DeviceInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!astra_camera_msgs__msg__DeviceInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          astra_camera_msgs__msg__DeviceInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!astra_camera_msgs__msg__DeviceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
