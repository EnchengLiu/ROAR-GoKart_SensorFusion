// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from septentrio_gnss_driver:msg/RFBand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "septentrio_gnss_driver/msg/detail/rf_band__rosidl_typesupport_introspection_c.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "septentrio_gnss_driver/msg/detail/rf_band__functions.h"
#include "septentrio_gnss_driver/msg/detail/rf_band__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RFBand__rosidl_typesupport_introspection_c__RFBand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  septentrio_gnss_driver__msg__RFBand__init(message_memory);
}

void RFBand__rosidl_typesupport_introspection_c__RFBand_fini_function(void * message_memory)
{
  septentrio_gnss_driver__msg__RFBand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RFBand__rosidl_typesupport_introspection_c__RFBand_message_member_array[3] = {
  {
    "frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__RFBand, frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bandwidth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__RFBand, bandwidth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__RFBand, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RFBand__rosidl_typesupport_introspection_c__RFBand_message_members = {
  "septentrio_gnss_driver__msg",  // message namespace
  "RFBand",  // message name
  3,  // number of fields
  sizeof(septentrio_gnss_driver__msg__RFBand),
  RFBand__rosidl_typesupport_introspection_c__RFBand_message_member_array,  // message members
  RFBand__rosidl_typesupport_introspection_c__RFBand_init_function,  // function to initialize message memory (memory has to be allocated)
  RFBand__rosidl_typesupport_introspection_c__RFBand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RFBand__rosidl_typesupport_introspection_c__RFBand_message_type_support_handle = {
  0,
  &RFBand__rosidl_typesupport_introspection_c__RFBand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, RFBand)() {
  if (!RFBand__rosidl_typesupport_introspection_c__RFBand_message_type_support_handle.typesupport_identifier) {
    RFBand__rosidl_typesupport_introspection_c__RFBand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RFBand__rosidl_typesupport_introspection_c__RFBand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
