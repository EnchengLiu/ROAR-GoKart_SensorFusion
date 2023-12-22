// main.cpp
#include "rclcpp/rclcpp.hpp"
#include "path_publisher_node.hpp"

PathPublisherNode::PathPublisherNode() : Node("path_publisher_node")
{
    rclcpp::QoS qos(rclcpp::KeepLast(10));
    qos.best_effort();
    pose_subscriber_ = this->create_subscription<geometry_msgs::msg::Pose>(
        "/zed2i/zed_node/pose", qos, std::bind(&PathPublisherNode::pose_callback, this, std::placeholders::_1));
    
    path_publisher_ = this->create_publisher<nav_msgs::msg::Path>("path", 10);
}

void PathPublisherNode::pose_callback(const geometry_msgs::msg::Pose::SharedPtr msg)
{
    geometry_msgs::msg::PoseStamped pose_stamped;
    pose_stamped.pose = *msg;
    path_.poses.push_back(pose_stamped);
    path_publisher_->publish(path_);
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PathPublisherNode>());
    rclcpp::shutdown();
    return 0;
}