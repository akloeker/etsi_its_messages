#pragma once

#include <etsi_its_cam_coding/SubCauseCodeType.h>
#include <etsi_its_cam_conversion/primitives/convertINTEGER.h>
#ifdef ROS2
#include <etsi_its_cam_msgs/msg/sub_cause_code_type.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#else
#include <etsi_its_cam_msgs/SubCauseCodeType.h>
namespace cam_msgs = etsi_its_cam_msgs;
#endif


namespace etsi_its_cam_conversion {

void toRos_SubCauseCodeType(const SubCauseCodeType_t& in, cam_msgs::SubCauseCodeType& out) {

  toRos_INTEGER(in, out.value);
}

void toStruct_SubCauseCodeType(const cam_msgs::SubCauseCodeType& in, SubCauseCodeType_t& out) {
    
  memset(&out, 0, sizeof(SubCauseCodeType_t));
  toStruct_INTEGER(in.value, out);
}

}