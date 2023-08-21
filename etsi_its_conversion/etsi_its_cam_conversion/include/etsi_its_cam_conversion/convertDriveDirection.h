#pragma once

#include <etsi_its_cam_coding/DriveDirection.h>
#ifdef ROS2
#include <etsi_its_cam_msgs/msg/drive_direction.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#else
#include <etsi_its_cam_msgs/DriveDirection.h>
namespace cam_msgs = etsi_its_cam_msgs;
#endif


namespace etsi_its_cam_conversion {

void toRos_DriveDirection(const DriveDirection_t& in, cam_msgs::DriveDirection& out) {

  out.value = in;
}

void toStruct_DriveDirection(const cam_msgs::DriveDirection& in, DriveDirection_t& out) {
    
  memset(&out, 0, sizeof(DriveDirection_t));
  out = in.value;
}

}