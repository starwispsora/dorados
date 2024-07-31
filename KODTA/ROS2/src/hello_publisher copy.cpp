#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono_literals;

class HelloPublisher : public rclcpp::Node
{
public:
    HelloPublisher()
        : Node("hello_world"), _i(0)
    {
        auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
        _pub = this->create_publisher<std_msgs::msg::String>("hello", 10);
        _timer = this->create_wall_timer(1s, std::bind(&HelloPublisher::publish_helloworld_msg, this));
    }
private:
    int _i;
    //std::shared_ptr<rclcpp::Publisher<std_msgs::msg::String, std::allocator<void>>> _pub; A
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr _pub; //A
    rclcpp::TimerBase::SharedPtr _timer;
    void publish_helloworld_msg()
    {
        auto msg = std_msgs::msg::String();
        msg.data = "Hello, World! " + std::to_string(_i);
        _pub->publish(msg);
        _i++;
    }
};

int main()
{
    rclcpp::init(0, nullptr);
    int i;
    auto node = std::make_shared<HelloPublisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

void printHello()
{
    cout << "Hello, World!" << endl;
}
