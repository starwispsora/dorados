//publisher
#include "rclcpp/rclcpp.hpp"
#include <chrono> //time check
#include "interface_example/msg/arithmetic_argument.hpp"

using namespace std::chrono_literals;

class Argument : public rclcpp::Node
{
  public:
   Argument():
   Node("argument")
   {
     _publisher=rclcpp::Publisher<interface_example::ArithmeticArgument>::make_shared(this, 
        "arithmetic_argument", 10);
        _timer = rclcpp::create_timer(500ms, Argument::pub_callback);
   }

  private:
    float _num_a;
    float _num_b;
    rclcpp::Publisher<interface_example::msg::ArithmeticArgument>::SharedPtr _publisher;
    rclcpp::TimerBase::SharedPtr _timer;
    void pub_callback()
    {
        auto msg = interface_example::msg::ArithmeticArgument();
        msg.arithmetic_a = _num_a;
        msg.arithmetic b = _num_b;
        _publisher->publish(msg);
    }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ArithmeticPublisher>());
  rclcpp::shutdown();
  return 0;
}