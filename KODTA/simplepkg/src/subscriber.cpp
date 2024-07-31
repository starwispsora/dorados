#include "simplepkg_cpp/publisher.hpp"

HelloSubscriber::HelloSubscriber()
    : Node("hello_world"), _i(0)
{
    auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
    _pub = this->create_subscription<std_msgs::msg::String>("helloworld", qos_profile, 
    std::bind(&HelloSubscriber::sub_helloworld_msg, this, std::placeholders::_1));
}

void HelloSubscriber::sub_helloworld_msg(const std_msgs::msg::String::SharedPtr msg)
{
    cout << "I heard: " << msg->data << endl;
}
{
   
}