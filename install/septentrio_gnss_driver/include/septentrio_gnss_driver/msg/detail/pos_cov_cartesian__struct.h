// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/PosCovCartesian.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__STRUCT_H_

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

// Struct defined in msg/PosCovCartesian in the package septentrio_gnss_driver.
typedef struct septentrio_gnss_driver__msg__PosCovCartesian
{
  std_msgs__msg__Header header;
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t mode;
  uint8_t error;
  float cov_xx;
  float cov_yy;
  float cov_zz;
  float cov_bb;
  float cov_xy;
  float cov_xz;
  float cov_xb;
  float cov_yz;
  float cov_yb;
  float cov_zb;
} septentrio_gnss_driver__msg__PosCovCartesian;

// Struct for a sequence of septentrio_gnss_driver__msg__PosCovCartesian.
typedef struct septentrio_gnss_driver__msg__PosCovCartesian__Sequence
{
  septentrio_gnss_driver__msg__PosCovCartesian * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__PosCovCartesian__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__STRUCT_H_
