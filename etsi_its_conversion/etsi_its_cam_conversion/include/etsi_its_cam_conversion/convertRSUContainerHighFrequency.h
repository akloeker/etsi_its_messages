#pragma once

#include <etsi_its_cam_coding/RSUContainerHighFrequency.h>
#include <etsi_its_cam_conversion/convertProtectedCommunicationZonesRSU.h>
#ifdef ROS2
#include <etsi_its_cam_msgs/msg/rsu_container_high_frequency.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#else
#include <etsi_its_cam_msgs/RSUContainerHighFrequency.h>
namespace cam_msgs = etsi_its_cam_msgs;
#endif


namespace etsi_its_cam_conversion {

void toRos_RSUContainerHighFrequency(const RSUContainerHighFrequency_t& in, cam_msgs::RSUContainerHighFrequency& out) {

  if (in.protectedCommunicationZonesRSU) {
    toRos_ProtectedCommunicationZonesRSU(*in.protectedCommunicationZonesRSU, out.protected_communication_zones_rsu);
    out.protected_communication_zones_rsu_is_present = true;
  }

}

void toStruct_RSUContainerHighFrequency(const cam_msgs::RSUContainerHighFrequency& in, RSUContainerHighFrequency_t& out) {
    
  memset(&out, 0, sizeof(RSUContainerHighFrequency_t));

  if (in.protected_communication_zones_rsu_is_present) {
    ProtectedCommunicationZonesRSU_t protected_communication_zones_rsu;
    toStruct_ProtectedCommunicationZonesRSU(in.protected_communication_zones_rsu, protected_communication_zones_rsu);
    out.protectedCommunicationZonesRSU = new ProtectedCommunicationZonesRSU_t(protected_communication_zones_rsu);
  }

}

}