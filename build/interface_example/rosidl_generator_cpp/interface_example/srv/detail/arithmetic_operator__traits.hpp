// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_example:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__TRAITS_HPP_
#define INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_example/srv/detail/arithmetic_operator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_example
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArithmeticOperator_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: arithmetic_operator
  {
    out << "arithmetic_operator: ";
    rosidl_generator_traits::value_to_yaml(msg.arithmetic_operator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticOperator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arithmetic_operator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arithmetic_operator: ";
    rosidl_generator_traits::value_to_yaml(msg.arithmetic_operator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticOperator_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_example

namespace rosidl_generator_traits
{

[[deprecated("use interface_example::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_example::srv::ArithmeticOperator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_example::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_example::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_example::srv::ArithmeticOperator_Request & msg)
{
  return interface_example::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_example::srv::ArithmeticOperator_Request>()
{
  return "interface_example::srv::ArithmeticOperator_Request";
}

template<>
inline const char * name<interface_example::srv::ArithmeticOperator_Request>()
{
  return "interface_example/srv/ArithmeticOperator_Request";
}

template<>
struct has_fixed_size<interface_example::srv::ArithmeticOperator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_example::srv::ArithmeticOperator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_example::srv::ArithmeticOperator_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_example
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArithmeticOperator_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: arithmetic_result
  {
    out << "arithmetic_result: ";
    rosidl_generator_traits::value_to_yaml(msg.arithmetic_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticOperator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arithmetic_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arithmetic_result: ";
    rosidl_generator_traits::value_to_yaml(msg.arithmetic_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticOperator_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_example

namespace rosidl_generator_traits
{

[[deprecated("use interface_example::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_example::srv::ArithmeticOperator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_example::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_example::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_example::srv::ArithmeticOperator_Response & msg)
{
  return interface_example::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_example::srv::ArithmeticOperator_Response>()
{
  return "interface_example::srv::ArithmeticOperator_Response";
}

template<>
inline const char * name<interface_example::srv::ArithmeticOperator_Response>()
{
  return "interface_example/srv/ArithmeticOperator_Response";
}

template<>
struct has_fixed_size<interface_example::srv::ArithmeticOperator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_example::srv::ArithmeticOperator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_example::srv::ArithmeticOperator_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_example::srv::ArithmeticOperator>()
{
  return "interface_example::srv::ArithmeticOperator";
}

template<>
inline const char * name<interface_example::srv::ArithmeticOperator>()
{
  return "interface_example/srv/ArithmeticOperator";
}

template<>
struct has_fixed_size<interface_example::srv::ArithmeticOperator>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_example::srv::ArithmeticOperator_Request>::value &&
    has_fixed_size<interface_example::srv::ArithmeticOperator_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_example::srv::ArithmeticOperator>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_example::srv::ArithmeticOperator_Request>::value &&
    has_bounded_size<interface_example::srv::ArithmeticOperator_Response>::value
  >
{
};

template<>
struct is_service<interface_example::srv::ArithmeticOperator>
  : std::true_type
{
};

template<>
struct is_service_request<interface_example::srv::ArithmeticOperator_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_example::srv::ArithmeticOperator_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__TRAITS_HPP_
