#pragma once

#include <etsi_its_cam_coding/PtActivation.h>
#include <etsi_its_cam_conversion/convertPtActivationType.h>
#include <etsi_its_cam_conversion/convertPtActivationData.h>
#ifdef ROS2
#include <etsi_its_cam_msgs/msg/pt_activation.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#else
#include <etsi_its_cam_msgs/PtActivation.h>
namespace cam_msgs = etsi_its_cam_msgs;
#endif


namespace etsi_its_cam_conversion {

void toRos_PtActivation(const PtActivation_t& in, cam_msgs::PtActivation& out) {

  toRos_PtActivationType(in.ptActivationType, out.pt_activation_type);
  toRos_PtActivationData(in.ptActivationData, out.pt_activation_data);
}

void toStruct_PtActivation(const cam_msgs::PtActivation& in, PtActivation_t& out) {
    
  memset(&out, 0, sizeof(PtActivation_t));

  toStruct_PtActivationType(in.pt_activation_type, out.ptActivationType);
  toStruct_PtActivationData(in.pt_activation_data, out.ptActivationData);
}

}