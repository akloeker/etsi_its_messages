#pragma once

#include <stdexcept>

#include <etsi_its_cam_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_cam_coding/ProtectedCommunicationZonesRSU.h>
#include <etsi_its_cam_coding/ProtectedCommunicationZone.h>
#include <etsi_its_cam_conversion/convertProtectedCommunicationZone.h>
#ifdef ROS2
#include <etsi_its_cam_msgs/msg/ProtectedCommunicationZone.hpp>
#include <etsi_its_cam_msgs/msg/protected_communication_zones_rsu.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#else
#include <etsi_its_cam_msgs/ProtectedCommunicationZone.h>
#include <etsi_its_cam_msgs/ProtectedCommunicationZonesRSU.h>
namespace cam_msgs = etsi_its_cam_msgs;
#endif


namespace etsi_its_cam_conversion {

void toRos_ProtectedCommunicationZonesRSU(const ProtectedCommunicationZonesRSU_t& in, cam_msgs::ProtectedCommunicationZonesRSU& out) {

  for (int i = 0; i < in.list.count; i++) {
    cam_msgs::ProtectedCommunicationZone array;
    toRos_ProtectedCommunicationZone(*(in.list.array[i]), array);
    out.array.push_back(array);
  }

}

void toStruct_ProtectedCommunicationZonesRSU(const cam_msgs::ProtectedCommunicationZonesRSU& in, ProtectedCommunicationZonesRSU_t& out) {
    
  memset(&out, 0, sizeof(ProtectedCommunicationZonesRSU_t));

  for (int i = 0; i < in.array.size(); i++) {
    ProtectedCommunicationZone_t array;
    toStruct_ProtectedCommunicationZone(in.array[i], array);
    ProtectedCommunicationZone_t* array_ptr = new ProtectedCommunicationZone_t(array);
    int status = asn_sequence_add(&out, array_ptr);
    if (status != 0) throw std::invalid_argument("Failed to add to A_SEQUENCE_OF");
  }

}

}