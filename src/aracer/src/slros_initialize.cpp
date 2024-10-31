#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "aracer";

// For Block aracer/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_aracer_std_msgs_Float64> Sub_aracer_7;

// For Block aracer/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_aracer_std_msgs_Float64> Sub_aracer_8;

// For Block aracer/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_aracer_std_msgs_Float64> Pub_aracer_6;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

