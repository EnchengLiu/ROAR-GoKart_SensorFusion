// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/IMUSetup.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__STRUCT_H_

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

// Struct defined in msg/IMUSetup in the package septentrio_gnss_driver.
typedef struct septentrio_gnss_driver__msg__IMUSetup
{
  std_msgs__msg__Header header;
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t serial_port;
  float ant_lever_arm_x;
  float ant_lever_arm_y;
  float ant_lever_arm_z;
  float theta_x;
  float theta_y;
  float theta_z;
} septentrio_gnss_driver__msg__IMUSetup;

// Struct for a sequence of septentrio_gnss_driver__msg__IMUSetup.
typedef struct septentrio_gnss_driver__msg__IMUSetup__Sequence
{
  septentrio_gnss_driver__msg__IMUSetup * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__IMUSetup__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__STRUCT_H_
