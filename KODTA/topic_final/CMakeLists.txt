cmake_minimum_required(VERSION 3.8)
project(simplepkg_cpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)


# include directories
include_directories(include)

#add excutable
add executable(msub src/msub.cpp)
ament_target_dependencies(msub rclcpp std_msgs)

add executable(mpub src/mpub.cpp) 
ament_target_dependencies(mpub rclcpp std_msgs)

add_
#install
install(TARGETS
  helloword
  helloOpenCV
  hello_publisher
  hello_publisher2
  hello_publisher_class
  hello_publisher_class2
  hello_subscriber_class
  time_publisher_class
  m_publisher
  m_subscriber
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
