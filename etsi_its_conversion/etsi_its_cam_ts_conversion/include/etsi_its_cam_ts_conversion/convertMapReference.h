/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University
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

#include <etsi_its_cam_ts_coding/cam_ts_MapReference.h>
#include <etsi_its_cam_ts_conversion/convertIntersectionReferenceId.h>
#include <etsi_its_cam_ts_conversion/convertRoadSegmentReferenceId.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/MapReference.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/map_reference.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_MapReference(const cam_ts_MapReference_t& in, cam_ts_msgs::MapReference& out) {
  switch (in.present) {
  case cam_ts_MapReference_PR_roadsegment:
    toRos_RoadSegmentReferenceId(in.choice.roadsegment, out.roadsegment);
    out.choice = cam_ts_msgs::MapReference::CHOICE_ROADSEGMENT;
    break;
  case cam_ts_MapReference_PR_intersection:
    toRos_IntersectionReferenceId(in.choice.intersection, out.intersection);
    out.choice = cam_ts_msgs::MapReference::CHOICE_INTERSECTION;
    break;
  default: break;
  }
}

void toStruct_MapReference(const cam_ts_msgs::MapReference& in, cam_ts_MapReference_t& out) {
  memset(&out, 0, sizeof(cam_ts_MapReference_t));

  switch (in.choice) {
  case cam_ts_msgs::MapReference::CHOICE_ROADSEGMENT:
    toStruct_RoadSegmentReferenceId(in.roadsegment, out.choice.roadsegment);
    out.present = cam_ts_MapReference_PR::cam_ts_MapReference_PR_roadsegment;
    break;
  case cam_ts_msgs::MapReference::CHOICE_INTERSECTION:
    toStruct_IntersectionReferenceId(in.intersection, out.choice.intersection);
    out.present = cam_ts_MapReference_PR::cam_ts_MapReference_PR_intersection;
    break;
  default: break;
  }
}

}