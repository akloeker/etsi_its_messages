/** ============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University
Copyright (c) 2024 Instituto de Telecomunicações, Universidade de Aveiro

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
============================================================================= */

// --- Auto-generated by asn1ToConversionHeader.py -----------------------------

#pragma once

#include <etsi_its_cam_coding/PublicTransportContainer.h>
#include <etsi_its_cam_conversion/convertPtActivation.h>
#include <etsi_its_cam_conversion/convertEmbarkationStatus.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/PublicTransportContainer.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/public_transport_container.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_PublicTransportContainer(const PublicTransportContainer_t& in, cam_msgs::PublicTransportContainer& out) {
  toRos_EmbarkationStatus(in.embarkationStatus, out.embarkation_status);
  if (in.ptActivation) {
    toRos_PtActivation(*in.ptActivation, out.pt_activation);
    out.pt_activation_is_present = true;
  }
}

void toStruct_PublicTransportContainer(const cam_msgs::PublicTransportContainer& in, PublicTransportContainer_t& out) {
  memset(&out, 0, sizeof(PublicTransportContainer_t));

  toStruct_EmbarkationStatus(in.embarkation_status, out.embarkationStatus);
  if (in.pt_activation_is_present) {
    out.ptActivation = (PtActivation_t*) calloc(1, sizeof(PtActivation_t));
    toStruct_PtActivation(in.pt_activation, *out.ptActivation);
  }
}

}
