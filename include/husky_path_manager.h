#ifndef HUSKY_PATH_MANAGER_H
#define HUSKY_PATH_MANAGER_H
#include <ros/ros.h>
#include <tf/transform_listener.h>
#include <geometry_msgs/Twist.h>

namespace husky_path_manager {


class huskyPathManager
{
public:
  huskyPathManager();

private:
  ros::NodeHandle nh;
  ros::Publisher cmd_vel_pub;
  geometry_msgs::Twist base_cmd;

};

} //end namespace
#endif // HUSKY_PATH_MANAGER_H
