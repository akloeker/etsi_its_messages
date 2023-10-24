#pragma once

#include <etsi_its_denm_coding/ImpactReductionContainer.h>
#include <etsi_its_denm_conversion/convertHeightLonCarr.h>
#include <etsi_its_denm_conversion/convertHeightLonCarr.h>
#include <etsi_its_denm_conversion/convertPosLonCarr.h>
#include <etsi_its_denm_conversion/convertPosLonCarr.h>
#include <etsi_its_denm_conversion/convertPositionOfPillars.h>
#include <etsi_its_denm_conversion/convertPosCentMass.h>
#include <etsi_its_denm_conversion/convertWheelBaseVehicle.h>
#include <etsi_its_denm_conversion/convertTurningRadius.h>
#include <etsi_its_denm_conversion/convertPosFrontAx.h>
#include <etsi_its_denm_conversion/convertPositionOfOccupants.h>
#include <etsi_its_denm_conversion/convertVehicleMass.h>
#include <etsi_its_denm_conversion/convertRequestResponseIndication.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/ImpactReductionContainer.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/impact_reduction_container.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_ImpactReductionContainer(const ImpactReductionContainer_t& in, denm_msgs::ImpactReductionContainer& out) {

  toRos_HeightLonCarr(in.heightLonCarrLeft, out.height_lon_carr_left);
  toRos_HeightLonCarr(in.heightLonCarrRight, out.height_lon_carr_right);
  toRos_PosLonCarr(in.posLonCarrLeft, out.pos_lon_carr_left);
  toRos_PosLonCarr(in.posLonCarrRight, out.pos_lon_carr_right);
  toRos_PositionOfPillars(in.positionOfPillars, out.position_of_pillars);
  toRos_PosCentMass(in.posCentMass, out.pos_cent_mass);
  toRos_WheelBaseVehicle(in.wheelBaseVehicle, out.wheel_base_vehicle);
  toRos_TurningRadius(in.turningRadius, out.turning_radius);
  toRos_PosFrontAx(in.posFrontAx, out.pos_front_ax);
  toRos_PositionOfOccupants(in.positionOfOccupants, out.position_of_occupants);
  toRos_VehicleMass(in.vehicleMass, out.vehicle_mass);
  toRos_RequestResponseIndication(in.requestResponseIndication, out.request_response_indication);
}

void toStruct_ImpactReductionContainer(const denm_msgs::ImpactReductionContainer& in, ImpactReductionContainer_t& out) {

  memset(&out, 0, sizeof(ImpactReductionContainer_t));

  toStruct_HeightLonCarr(in.height_lon_carr_left, out.heightLonCarrLeft);
  toStruct_HeightLonCarr(in.height_lon_carr_right, out.heightLonCarrRight);
  toStruct_PosLonCarr(in.pos_lon_carr_left, out.posLonCarrLeft);
  toStruct_PosLonCarr(in.pos_lon_carr_right, out.posLonCarrRight);
  toStruct_PositionOfPillars(in.position_of_pillars, out.positionOfPillars);
  toStruct_PosCentMass(in.pos_cent_mass, out.posCentMass);
  toStruct_WheelBaseVehicle(in.wheel_base_vehicle, out.wheelBaseVehicle);
  toStruct_TurningRadius(in.turning_radius, out.turningRadius);
  toStruct_PosFrontAx(in.pos_front_ax, out.posFrontAx);
  toStruct_PositionOfOccupants(in.position_of_occupants, out.positionOfOccupants);
  toStruct_VehicleMass(in.vehicle_mass, out.vehicleMass);
  toStruct_RequestResponseIndication(in.request_response_indication, out.requestResponseIndication);
}

}