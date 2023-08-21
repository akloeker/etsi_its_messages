#pragma once

#include <etsi_its_cam_coding/SafetyCarContainer.h>
#include <etsi_its_cam_conversion/convertLightBarSirenInUse.h>
#include <etsi_its_cam_conversion/convertCauseCode.h>
#include <etsi_its_cam_conversion/convertTrafficRule.h>
#include <etsi_its_cam_conversion/convertSpeedLimit.h>
#ifdef ROS2
#include <etsi_its_cam_msgs/msg/safety_car_container.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#else
#include <etsi_its_cam_msgs/SafetyCarContainer.h>
namespace cam_msgs = etsi_its_cam_msgs;
#endif


namespace etsi_its_cam_conversion {

void toRos_SafetyCarContainer(const SafetyCarContainer_t& in, cam_msgs::SafetyCarContainer& out) {

  toRos_LightBarSirenInUse(in.lightBarSirenInUse, out.light_bar_siren_in_use);
  if (in.incidentIndication) {
    toRos_CauseCode(*in.incidentIndication, out.incident_indication);
    out.incident_indication_is_present = true;
  }

  if (in.trafficRule) {
    toRos_TrafficRule(*in.trafficRule, out.traffic_rule);
    out.traffic_rule_is_present = true;
  }

  if (in.speedLimit) {
    toRos_SpeedLimit(*in.speedLimit, out.speed_limit);
    out.speed_limit_is_present = true;
  }

}

void toStruct_SafetyCarContainer(const cam_msgs::SafetyCarContainer& in, SafetyCarContainer_t& out) {
    
  memset(&out, 0, sizeof(SafetyCarContainer_t));

  toStruct_LightBarSirenInUse(in.light_bar_siren_in_use, out.lightBarSirenInUse);
  if (in.incident_indication_is_present) {
    CauseCode_t incident_indication;
    toStruct_CauseCode(in.incident_indication, incident_indication);
    out.incidentIndication = new CauseCode_t(incident_indication);
  }

  if (in.traffic_rule_is_present) {
    TrafficRule_t traffic_rule;
    toStruct_TrafficRule(in.traffic_rule, traffic_rule);
    out.trafficRule = new TrafficRule_t(traffic_rule);
  }

  if (in.speed_limit_is_present) {
    SpeedLimit_t speed_limit;
    toStruct_SpeedLimit(in.speed_limit, speed_limit);
    out.speedLimit = new SpeedLimit_t(speed_limit);
  }

}

}