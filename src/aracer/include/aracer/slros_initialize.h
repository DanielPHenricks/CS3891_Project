#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "aracer_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block aracer/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_aracer_std_msgs_Float64> Sub_aracer_7;

// For Block aracer/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_aracer_std_msgs_Float64> Sub_aracer_8;

// For Block aracer/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_aracer_std_msgs_Float64> Pub_aracer_6;

void slros_node_init(int argc, char** argv);

#endif
