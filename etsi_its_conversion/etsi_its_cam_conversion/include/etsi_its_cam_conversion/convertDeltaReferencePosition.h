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

#include <etsi_its_cam_coding/DeltaReferencePosition.h>
#include <etsi_its_cam_conversion/convertDeltaLongitude.h>
#include <etsi_its_cam_conversion/convertDeltaAltitude.h>
#include <etsi_its_cam_conversion/convertDeltaLatitude.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/DeltaReferencePosition.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/delta_reference_position.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_DeltaReferencePosition(const DeltaReferencePosition_t& in, cam_msgs::DeltaReferencePosition& out) {
  toRos_DeltaLatitude(in.deltaLatitude, out.delta_latitude);
  toRos_DeltaLongitude(in.deltaLongitude, out.delta_longitude);
  toRos_DeltaAltitude(in.deltaAltitude, out.delta_altitude);
}

void toStruct_DeltaReferencePosition(const cam_msgs::DeltaReferencePosition& in, DeltaReferencePosition_t& out) {
  memset(&out, 0, sizeof(DeltaReferencePosition_t));

  toStruct_DeltaLatitude(in.delta_latitude, out.deltaLatitude);
  toStruct_DeltaLongitude(in.delta_longitude, out.deltaLongitude);
  toStruct_DeltaAltitude(in.delta_altitude, out.deltaAltitude);
}

}
