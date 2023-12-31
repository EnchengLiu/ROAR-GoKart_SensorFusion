// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__rosidl_typesupport_introspection_c.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__functions.h"
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  septentrio_gnss_driver__msg__MeasEpochChannelType2__init(message_memory);
}

void MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_fini_function(void * message_memory)
{
  septentrio_gnss_driver__msg__MeasEpochChannelType2__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_message_member_array[9] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType2, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lock_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType2, lock_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cn0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType2, cn0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offsets_msb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType2, offsets_msb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "carrier_msb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType2, carrier_msb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obs_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType2, obs_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code_offset_lsb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType2, code_offset_lsb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "carrier_lsb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType2, carrier_lsb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "doppler_offset_lsb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType2, doppler_offset_lsb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_message_members = {
  "septentrio_gnss_driver__msg",  // message namespace
  "MeasEpochChannelType2",  // message name
  9,  // number of fields
  sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType2),
  MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_message_member_array,  // message members
  MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_init_function,  // function to initialize message memory (memory has to be allocated)
  MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_message_type_support_handle = {
  0,
  &MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, MeasEpochChannelType2)() {
  if (!MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_message_type_support_handle.typesupport_identifier) {
    MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MeasEpochChannelType2__rosidl_typesupport_introspection_c__MeasEpochChannelType2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
