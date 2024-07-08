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

#include <etsi_its_cpm_coding/cpm_SensorInformation.h>
#include <etsi_its_cpm_coding/BOOLEAN.h>
#include <etsi_its_primitives_conversion/convertBOOLEAN.h>
#include <etsi_its_cpm_conversion/convertConfidenceLevel.h>
#include <etsi_its_cpm_conversion/convertIdentifier1B.h>
#include <etsi_its_cpm_conversion/convertSensorType.h>
#include <etsi_its_cpm_conversion/convertShape.h>
#ifdef ROS1
#include <etsi_its_cpm_msgs/SensorInformation.h>
namespace cpm_msgs = etsi_its_cpm_msgs;
#else
#include <etsi_its_cpm_msgs/msg/sensor_information.hpp>
namespace cpm_msgs = etsi_its_cpm_msgs::msg;
#endif


namespace etsi_its_cpm_conversion {

void toRos_SensorInformation(const cpm_SensorInformation_t& in, cpm_msgs::SensorInformation& out) {
  toRos_Identifier1B(in.sensorId, out.sensor_id);
  toRos_SensorType(in.sensorType, out.sensor_type);
  if (in.perceptionRegionShape) {
    toRos_Shape(*in.perceptionRegionShape, out.perception_region_shape);
    out.perception_region_shape_is_present = true;
  }
  if (in.perceptionRegionConfidence) {
    toRos_ConfidenceLevel(*in.perceptionRegionConfidence, out.perception_region_confidence);
    out.perception_region_confidence_is_present = true;
  }
  etsi_its_primitives_conversion::toRos_BOOLEAN(in.shadowingApplies, out.shadowing_applies);
}

void toStruct_SensorInformation(const cpm_msgs::SensorInformation& in, cpm_SensorInformation_t& out) {
  memset(&out, 0, sizeof(cpm_SensorInformation_t));

  toStruct_Identifier1B(in.sensor_id, out.sensorId);
  toStruct_SensorType(in.sensor_type, out.sensorType);
  if (in.perception_region_shape_is_present) {
    out.perceptionRegionShape = (cpm_Shape_t*) calloc(1, sizeof(cpm_Shape_t));
    toStruct_Shape(in.perception_region_shape, *out.perceptionRegionShape);
  }
  if (in.perception_region_confidence_is_present) {
    out.perceptionRegionConfidence = (cpm_ConfidenceLevel_t*) calloc(1, sizeof(cpm_ConfidenceLevel_t));
    toStruct_ConfidenceLevel(in.perception_region_confidence, *out.perceptionRegionConfidence);
  }
  etsi_its_primitives_conversion::toStruct_BOOLEAN(in.shadowing_applies, out.shadowingApplies);
}

}