// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__TRAITS_HPP_
#define INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_example/msg/detail/arithmetic_argument__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_example
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArithmeticArgument & msg,
  std::ostream & out)
{
  out << "{";
  // member: argument_a
  {
    out << "argument_a: ";
    rosidl_generator_traits::value_to_yaml(msg.argument_a, out);
    out << ", ";
  }

  // member: argument_b
  {
    out << "argument_b: ";
    rosidl_generator_traits::value_to_yaml(msg.argument_b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticArgument & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: argument_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "argument_a: ";
    rosidl_generator_traits::value_to_yaml(msg.argument_a, out);
    out << "\n";
  }

  // member: argument_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "argument_b: ";
    rosidl_generator_traits::value_to_yaml(msg.argument_b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticArgument & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interface_example

namespace rosidl_generator_traits
{

[[deprecated("use interface_example::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_example::msg::ArithmeticArgument & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_example::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_example::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_example::msg::ArithmeticArgument & msg)
{
  return interface_example::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_example::msg::ArithmeticArgument>()
{
  return "interface_example::msg::ArithmeticArgument";
}

template<>
inline const char * name<interface_example::msg::ArithmeticArgument>()
{
  return "interface_example/msg/ArithmeticArgument";
}

template<>
struct has_fixed_size<interface_example::msg::ArithmeticArgument>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_example::msg::ArithmeticArgument>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_example::msg::ArithmeticArgument>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__TRAITS_HPP_
