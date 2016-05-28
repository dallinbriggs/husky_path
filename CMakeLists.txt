cmake_minimum_required(VERSION 2.8.3)
project(husky_path)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  tf
  geometry_msgs
)



catkin_package(
  INCLUDE_DIRS include
#  LIBRARIES husky_path
  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(include)
include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(husky_path_manager
        src/husky_path_manager.cpp
        include/husky_path_manager.h
)

#add_dependencies(husky_path_manager
#        husky_generate_messages_cpp
#)

target_link_libraries(husky_path_manager
        ${catkin_LIBRARIES}
)

add_executable(husky_publish_test
        src/publish_test.cpp
)

#add_dependencies(husky_path_manager
#        husky_generate_messages_cpp
#)

target_link_libraries(husky_publish_test
        ${catkin_LIBRARIES}
)
