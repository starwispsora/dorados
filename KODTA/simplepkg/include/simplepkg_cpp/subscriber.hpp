#ifndef SUBSCRIBER_HPP
#define SUBSCRIBER_HPP

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono_literals;

class HelloSubscriber : public rclcpp::Node
{
public:
    HelloSubscriber();

private:
    //rclcpp::Publisher<std_msgs::msg::String>::SharedPtr _sub;
    rclcpp::Subscription<const std_msgs::msg::String>::SharedPtr msg;
    void sub_helloworld_msg();
};