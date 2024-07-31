#include "/home/sora/Desktop/soraros/KODTA/ROS2/include/publisher.hpp"


int main(int argc, char *argv[])
{
    rclcpp::init(0, nullptr);
    int i;
    auto node = std::make_shared<HelloPublisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
