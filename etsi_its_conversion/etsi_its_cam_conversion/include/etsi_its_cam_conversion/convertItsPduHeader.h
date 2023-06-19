#pragma once

#include <etsi_its_cam_coding/ItsPduHeader.h>
#include <etsi_its_cam_msgs/ItsPduHeader.h>
#include <etsi_its_cam_conversion/primitives/convertINTEGER.h>
#include <etsi_its_cam_conversion/convertStationID.h>

namespace etsi_its_cam_conversion
{
	etsi_its_cam_msgs::ItsPduHeader convert_ItsPduHeadertoRos(const ItsPduHeader_t& _ItsPduHeader_in)
	{
		etsi_its_cam_msgs::ItsPduHeader ItsPduHeader_out;
		convert_toRos(_ItsPduHeader_in.protocolVersion, ItsPduHeader_out.protocolVersion);
		convert_toRos(_ItsPduHeader_in.messageID, ItsPduHeader_out.messageID);
		ItsPduHeader_out.stationID = convert_StationIDtoRos(_ItsPduHeader_in.stationID);
		return ItsPduHeader_out;
	}
	ItsPduHeader_t convert_ItsPduHeadertoC(const etsi_its_cam_msgs::ItsPduHeader& _ItsPduHeader_in)
	{
		ItsPduHeader_t ItsPduHeader_out;
		memset(&ItsPduHeader_out, 0, sizeof(ItsPduHeader_t));
		convert_toC(_ItsPduHeader_in.protocolVersion, ItsPduHeader_out.protocolVersion);
		convert_toC(_ItsPduHeader_in.messageID, ItsPduHeader_out.messageID);
		ItsPduHeader_out.stationID = convert_StationIDtoC(_ItsPduHeader_in.stationID);
		return ItsPduHeader_out;
	}
}