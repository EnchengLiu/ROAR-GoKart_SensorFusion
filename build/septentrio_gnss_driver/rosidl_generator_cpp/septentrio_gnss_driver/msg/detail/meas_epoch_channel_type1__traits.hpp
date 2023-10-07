// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType1.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__TRAITS_HPP_

#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<septentrio_gnss_driver::msg::MeasEpochChannelType1>()
{
  return "septentrio_gnss_driver::msg::MeasEpochChannelType1";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::MeasEpochChannelType1>()
{
  return "septentrio_gnss_driver/msg/MeasEpochChannelType1";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::MeasEpochChannelType1>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::MeasEpochChannelType1>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<septentrio_gnss_driver::msg::MeasEpochChannelType1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__TRAITS_HPP_
