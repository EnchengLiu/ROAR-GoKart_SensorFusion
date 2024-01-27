// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/ExtSensorMeas.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'block_header'
#include "septentrio_gnss_driver/msg/detail/block_header__struct.h"
// Member 'source'
// Member 'sensor_model'
// Member 'type'
// Member 'obs_info'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/ExtSensorMeas in the package septentrio_gnss_driver.
typedef struct septentrio_gnss_driver__msg__ExtSensorMeas
{
  std_msgs__msg__Header header;
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t n;
  uint8_t sb_length;
  rosidl_runtime_c__uint8__Sequence source;
  rosidl_runtime_c__uint8__Sequence sensor_model;
  rosidl_runtime_c__uint8__Sequence type;
  rosidl_runtime_c__uint8__Sequence obs_info;
  double acceleration_x;
  double acceleration_y;
  double acceleration_z;
  double angular_rate_x;
  double angular_rate_y;
  double angular_rate_z;
  float velocity_x;
  float velocity_y;
  float velocity_z;
  float std_dev_x;
  float std_dev_y;
  float std_dev_z;
  float sensor_temperature;
  double zero_velocity_flag;
} septentrio_gnss_driver__msg__ExtSensorMeas;

// Struct for a sequence of septentrio_gnss_driver__msg__ExtSensorMeas.
typedef struct septentrio_gnss_driver__msg__ExtSensorMeas__Sequence
{
  septentrio_gnss_driver__msg__ExtSensorMeas * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__ExtSensorMeas__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__STRUCT_H_
