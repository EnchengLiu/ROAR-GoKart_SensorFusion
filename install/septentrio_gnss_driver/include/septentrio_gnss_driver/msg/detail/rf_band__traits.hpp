// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/RFBand.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_BAND__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_BAND__TRAITS_HPP_

#include "septentrio_gnss_driver/msg/detail/rf_band__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<septentrio_gnss_driver::msg::RFBand>()
{
  return "septentrio_gnss_driver::msg::RFBand";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::RFBand>()
{
  return "septentrio_gnss_driver/msg/RFBand";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::RFBand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::RFBand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<septentrio_gnss_driver::msg::RFBand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_BAND__TRAITS_HPP_
