#ifndef PUBLISHER_HPP
#define PUBLISHER_HPP

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono_literals;

class HelloPublisher : public rclcpp::Node
{
public:
    HelloPublisher();
    
private:
    int _i;
    //std::shared_ptr<rclcpp::Publisher<std_msgs::msg::String, std::allocator<void>>> _pub; //A
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr _pub; //A
    rclcpp::TimerBase::SharedPtr _timer;
    void publish_helloworld_msg();
};

#endif // PUBLISHER_HPP