// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__BUILDER_HPP_
#define INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_example/msg/detail/arithmetic_argument__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_example
{

namespace msg
{

namespace builder
{

class Init_ArithmeticArgument_argument_b
{
public:
  explicit Init_ArithmeticArgument_argument_b(::interface_example::msg::ArithmeticArgument & msg)
  : msg_(msg)
  {}
  ::interface_example::msg::ArithmeticArgument argument_b(::interface_example::msg::ArithmeticArgument::_argument_b_type arg)
  {
    msg_.argument_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_example::msg::ArithmeticArgument msg_;
};

class Init_ArithmeticArgument_argument_a
{
public:
  Init_ArithmeticArgument_argument_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticArgument_argument_b argument_a(::interface_example::msg::ArithmeticArgument::_argument_a_type arg)
  {
    msg_.argument_a = std::move(arg);
    return Init_ArithmeticArgument_argument_b(msg_);
  }

private:
  ::interface_example::msg::ArithmeticArgument msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_example::msg::ArithmeticArgument>()
{
  return interface_example::msg::builder::Init_ArithmeticArgument_argument_a();
}

}  // namespace interface_example

#endif  // INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__BUILDER_HPP_
