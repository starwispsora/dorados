// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_example:srv/AddTwoInt.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_EXAMPLE__SRV__DETAIL__ADD_TWO_INT__BUILDER_HPP_
#define INTERFACE_EXAMPLE__SRV__DETAIL__ADD_TWO_INT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_example/srv/detail/add_two_int__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_example
{

namespace srv
{

namespace builder
{

class Init_AddTwoInt_Request_b
{
public:
  explicit Init_AddTwoInt_Request_b(::interface_example::srv::AddTwoInt_Request & msg)
  : msg_(msg)
  {}
  ::interface_example::srv::AddTwoInt_Request b(::interface_example::srv::AddTwoInt_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_example::srv::AddTwoInt_Request msg_;
};

class Init_AddTwoInt_Request_a
{
public:
  Init_AddTwoInt_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInt_Request_b a(::interface_example::srv::AddTwoInt_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInt_Request_b(msg_);
  }

private:
  ::interface_example::srv::AddTwoInt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_example::srv::AddTwoInt_Request>()
{
  return interface_example::srv::builder::Init_AddTwoInt_Request_a();
}

}  // namespace interface_example


namespace interface_example
{

namespace srv
{

namespace builder
{

class Init_AddTwoInt_Response_sum
{
public:
  Init_AddTwoInt_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_example::srv::AddTwoInt_Response sum(::interface_example::srv::AddTwoInt_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_example::srv::AddTwoInt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_example::srv::AddTwoInt_Response>()
{
  return interface_example::srv::builder::Init_AddTwoInt_Response_sum();
}

}  // namespace interface_example

#endif  // INTERFACE_EXAMPLE__SRV__DETAIL__ADD_TWO_INT__BUILDER_HPP_
