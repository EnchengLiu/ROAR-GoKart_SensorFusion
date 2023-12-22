// path_publisher_node.hpp
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "nav_msgs/msg/path.hpp"

class PathPublisherNode : public rclcpp::Node
{
public:
    PathPublisherNode();

private:
    void pose_callback(const geometry_msgs::msg::Pose::SharedPtr msg);
    rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr pose_subscriber_;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr path_publisher_;
    nav_msgs::msg::Path path_;
};