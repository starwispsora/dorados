// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_HPP_
#define INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_example__msg__ArithmeticArgument __attribute__((deprecated))
#else
# define DEPRECATED__interface_example__msg__ArithmeticArgument __declspec(deprecated)
#endif

namespace interface_example
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArithmeticArgument_
{
  using Type = ArithmeticArgument_<ContainerAllocator>;

  explicit ArithmeticArgument_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->argument_a = 0.0f;
      this->argument_b = 0.0f;
    }
  }

  explicit ArithmeticArgument_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->argument_a = 0.0f;
      this->argument_b = 0.0f;
    }
  }

  // field types and members
  using _argument_a_type =
    float;
  _argument_a_type argument_a;
  using _argument_b_type =
    float;
  _argument_b_type argument_b;

  // setters for named parameter idiom
  Type & set__argument_a(
    const float & _arg)
  {
    this->argument_a = _arg;
    return *this;
  }
  Type & set__argument_b(
    const float & _arg)
  {
    this->argument_b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_example::msg::ArithmeticArgument_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_example::msg::ArithmeticArgument_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_example::msg::ArithmeticArgument_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_example::msg::ArithmeticArgument_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_example::msg::ArithmeticArgument_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_example::msg::ArithmeticArgument_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_example::msg::ArithmeticArgument_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_example::msg::ArithmeticArgument_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_example::msg::ArithmeticArgument_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_example::msg::ArithmeticArgument_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_example__msg__ArithmeticArgument
    std::shared_ptr<interface_example::msg::ArithmeticArgument_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_example__msg__ArithmeticArgument
    std::shared_ptr<interface_example::msg::ArithmeticArgument_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArithmeticArgument_ & other) const
  {
    if (this->argument_a != other.argument_a) {
      return false;
    }
    if (this->argument_b != other.argument_b) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArithmeticArgument_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArithmeticArgument_

// alias to use template instance with default allocator
using ArithmeticArgument =
  interface_example::msg::ArithmeticArgument_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_example

#endif  // INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_HPP_
