// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/int32_multi_array.hpp"


using std::placeholders::_1;

class EncoderSubscriber : public rclcpp::Node {
public:
    EncoderSubscriber()
    : Node("encoder_subscriber")
    {
        subscription_ = this->create_subscription<std_msgs::msg::Int32MultiArray>(
            "encoder_data", 10, std::bind(&EncoderSubscriber::topic_callback, this, std::placeholders::_1));
    }

private:
    void topic_callback(const std_msgs::msg::Int32MultiArray::SharedPtr msg) const
    {
        RCLCPP_INFO(this->get_logger(), "Received encoder data: [%d, %d, %d, %d]",
                    msg->data[0], msg->data[1], msg->data[2], msg->data[3]);
    }
    rclcpp::Subscription<std_msgs::msg::Int32MultiArray>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EncoderSubscriber>());
    rclcpp::shutdown();
    return 0;
}
