#include 



class 
{
public:
    MessagePub
        : Node("tpub"), _i(0)
    {
        auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
        _pub = this->create_publisher<std_msgs::msg::Header>("tpub", qos_profile);
    }
    
}