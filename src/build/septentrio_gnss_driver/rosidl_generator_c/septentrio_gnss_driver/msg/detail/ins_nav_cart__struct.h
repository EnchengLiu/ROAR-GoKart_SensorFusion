// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/INSNavCart.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__STRUCT_H_

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

// Struct defined in msg/INSNavCart in the package septentrio_gnss_driver.
typedef struct septentrio_gnss_driver__msg__INSNavCart
{
  std_msgs__msg__Header header;
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t gnss_mode;
  uint8_t error;
  uint16_t info;
  uint16_t gnss_age;
  double x;
  double y;
  double z;
  uint16_t accuracy;
  uint16_t latency;
  uint8_t datum;
  uint16_t sb_list;
  float x_std_dev;
  float y_std_dev;
  float z_std_dev;
  float xy_cov;
  float xz_cov;
  float yz_cov;
  float heading;
  float pitch;
  float roll;
  float heading_std_dev;
  float pitch_std_dev;
  float roll_std_dev;
  float heading_pitch_cov;
  float heading_roll_cov;
  float pitch_roll_cov;
  float vx;
  float vy;
  float vz;
  float vx_std_dev;
  float vy_std_dev;
  float vz_std_dev;
  float vx_vy_cov;
  float vx_vz_cov;
  float vy_vz_cov;
} septentrio_gnss_driver__msg__INSNavCart;

// Struct for a sequence of septentrio_gnss_driver__msg__INSNavCart.
typedef struct septentrio_gnss_driver__msg__INSNavCart__Sequence
{
  septentrio_gnss_driver__msg__INSNavCart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__INSNavCart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__STRUCT_H_
