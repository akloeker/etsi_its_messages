#pragma once

#include <etsi_its_cam_coding/HardShoulderStatus.h>
#ifdef ROS2
#include <etsi_its_cam_msgs/msg/hard_shoulder_status.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#else
#include <etsi_its_cam_msgs/HardShoulderStatus.h>
namespace cam_msgs = etsi_its_cam_msgs;
#endif


namespace etsi_its_cam_conversion {

void toRos_HardShoulderStatus(const HardShoulderStatus_t& in, cam_msgs::HardShoulderStatus& out) {

  out.value = in;
}

void toStruct_HardShoulderStatus(const cam_msgs::HardShoulderStatus& in, HardShoulderStatus_t& out) {
    
  memset(&out, 0, sizeof(HardShoulderStatus_t));
  out = in.value;
}

}