// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from septentrio_gnss_driver:msg/BaseVectorGeod.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "septentrio_gnss_driver/msg/detail/base_vector_geod__rosidl_typesupport_introspection_c.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "septentrio_gnss_driver/msg/detail/base_vector_geod__functions.h"
#include "septentrio_gnss_driver/msg/detail/base_vector_geod__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `block_header`
#include "septentrio_gnss_driver/msg/block_header.h"
// Member `block_header`
#include "septentrio_gnss_driver/msg/detail/block_header__rosidl_typesupport_introspection_c.h"
// Member `vector_info_geod`
#include "septentrio_gnss_driver/msg/vector_info_geod.h"
// Member `vector_info_geod`
#include "septentrio_gnss_driver/msg/detail/vector_info_geod__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  septentrio_gnss_driver__msg__BaseVectorGeod__init(message_memory);
}

void BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_fini_function(void * message_memory)
{
  septentrio_gnss_driver__msg__BaseVectorGeod__fini(message_memory);
}

size_t BaseVectorGeod__rosidl_typesupport_introspection_c__size_function__VectorInfoGeod__vector_info_geod(
  const void * untyped_member)
{
  const septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * member =
    (const septentrio_gnss_driver__msg__VectorInfoGeod__Sequence *)(untyped_member);
  return member->size;
}

const void * BaseVectorGeod__rosidl_typesupport_introspection_c__get_const_function__VectorInfoGeod__vector_info_geod(
  const void * untyped_member, size_t index)
{
  const septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * member =
    (const septentrio_gnss_driver__msg__VectorInfoGeod__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BaseVectorGeod__rosidl_typesupport_introspection_c__get_function__VectorInfoGeod__vector_info_geod(
  void * untyped_member, size_t index)
{
  septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * member =
    (septentrio_gnss_driver__msg__VectorInfoGeod__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BaseVectorGeod__rosidl_typesupport_introspection_c__resize_function__VectorInfoGeod__vector_info_geod(
  void * untyped_member, size_t size)
{
  septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * member =
    (septentrio_gnss_driver__msg__VectorInfoGeod__Sequence *)(untyped_member);
  septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__fini(member);
  return septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__BaseVectorGeod, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "block_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__BaseVectorGeod, block_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__BaseVectorGeod, n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sb_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__BaseVectorGeod, sb_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vector_info_geod",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__BaseVectorGeod, vector_info_geod),  // bytes offset in struct
    NULL,  // default value
    BaseVectorGeod__rosidl_typesupport_introspection_c__size_function__VectorInfoGeod__vector_info_geod,  // size() function pointer
    BaseVectorGeod__rosidl_typesupport_introspection_c__get_const_function__VectorInfoGeod__vector_info_geod,  // get_const(index) function pointer
    BaseVectorGeod__rosidl_typesupport_introspection_c__get_function__VectorInfoGeod__vector_info_geod,  // get(index) function pointer
    BaseVectorGeod__rosidl_typesupport_introspection_c__resize_function__VectorInfoGeod__vector_info_geod  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_message_members = {
  "septentrio_gnss_driver__msg",  // message namespace
  "BaseVectorGeod",  // message name
  5,  // number of fields
  sizeof(septentrio_gnss_driver__msg__BaseVectorGeod),
  BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_message_member_array,  // message members
  BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_message_type_support_handle = {
  0,
  &BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, BaseVectorGeod)() {
  BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, BlockHeader)();
  BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, VectorInfoGeod)();
  if (!BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_message_type_support_handle.typesupport_identifier) {
    BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BaseVectorGeod__rosidl_typesupport_introspection_c__BaseVectorGeod_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
