#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/compressed_image.hpp"
#include "opencv2/opencv.hpp"
#include <chrono>
#include <iostream>
#include "cv_bridge/cv_bridge.h"

using namespace std::chrono_literals;
using namespace std;

class CannyCamera: public rclcpp::Node
{
public:
    CannyCamera()
        : Node("canny_camera"), _i(0)
    {
        auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
        _sub = this->create_subscription>sensor_msgs::msg::CompressedImage>(
            "/image_raw/compressed", 10, std::bind(
            &CannyCamera::sub_img, this, std::placeholders::_1));
    }

private:
    rclcpp::Subscription<std_msgs::msg::CompressedImage>::SharedPtr _pub;
    void sub_img(const sensor_msgs::msg::CompressedImage msg)
    {

        cv_bridge::CvImagePtr cv_ptr;
        cv_ptr = cv_bridge::toCvCopy(msg.data, sensor_msgs::image_encodings::BGR8);
        cv::Mat img(300, 400);
        cv::Mat img = cv_ptr->image;
        cv::imshow("canny", img);
        RCLCPP_INFO(get_logger(),"%s" std::string(msg.header.frame_id));
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<CannyCamera>();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}