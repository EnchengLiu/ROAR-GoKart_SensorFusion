// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/VelSensorSetup.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__TRAITS_HPP_

#include "septentrio_gnss_driver/msg/detail/vel_sensor_setup__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'block_header'
#include "septentrio_gnss_driver/msg/detail/block_header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<septentrio_gnss_driver::msg::VelSensorSetup>()
{
  return "septentrio_gnss_driver::msg::VelSensorSetup";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::VelSensorSetup>()
{
  return "septentrio_gnss_driver/msg/VelSensorSetup";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::VelSensorSetup>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::VelSensorSetup>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::VelSensorSetup>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__TRAITS_HPP_
