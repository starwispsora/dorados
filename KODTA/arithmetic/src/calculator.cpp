//subscription
#include "interface_example/msg/arithmetic_argument.hpp"
#include "interface_example/msg/"
#include "rclcpp/rclcpp.hpp"
#include <chrono> //time check


using namespace std::chrono_literals;
using namespace std::placeholders;

class Calculator : public rclcpp::Node
{
public:
   Calculator(): Node("calculator")
   {
        _publisher=rclcpp::create_subscription<interface_example::msg::ArithmeticArgument> 
            ("arithmetic_argument", qos_profile, std::bind(&Calculator::sub_callback, this, 1));
       
   }
  
  private:
    float _sub_a;
    float _sub_b;
    rclcpp::Subscription<interface_example::msg::ArithmeticArgument>::SharedPtr _subscription;
    
    void pub_callback(const interface_example::msg::ArithmeticArgument::SharedPtr msg)
    {
        _sub_a= msg->argument_a;
        _sub_b= msg->argument_b;
    }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Calculator>());
  rclcpp::shutdown();
  return 0;
}