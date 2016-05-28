#include "husky_path_manager.h"



namespace husky_path_manager {


huskyPathManager::huskyPathManager()
{

//  tf::TransformListener tf_listener;
//  cmd_vel_pub = nh.advertise<geometry_msgs::Twist>("cmd_vel",1);

//  base_cmd.linear.x = 0.7;
//  base_cmd.linear.y = 0;
//  base_cmd.linear.z = 0;
//  base_cmd.angular.x = 0;
//  base_cmd.angular.y = 0;
//  base_cmd.angular.z = 0.15;

//  cmd_vel_pub.publish(base_cmd);





}

} //end namespace

int main (int argc, char** argv)
{
  ros::init(argc, argv, "husky_path_manager");
  ros::NodeHandle nh;
//  husky_path_manager::huskyPathManager* cont = new husky_path_manager::huskyPathManager;
  husky_path_manager::huskyPathManager thing;

  ros::spin();

  return 0;

}
