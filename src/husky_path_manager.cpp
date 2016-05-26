#include "husky_path_manager.h"



namespace husky_path_manager {


huskyPathManager::huskyPathManager()
{
}

} //end namespace

int main (int argc, char** argv)
{
  ros::init(argc, argv, "husky_path_manager");
  ros::NodeHandle nh;
  husky_path_manager::huskyPathManager object;


  ros::spin();

  return 0;

}
