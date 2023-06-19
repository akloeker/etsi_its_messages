#pragma once

#include <etsi_its_cam_coding/SpeedLimit.h>
#include <etsi_its_cam_msgs/SpeedLimit.h>
#include <etsi_its_cam_conversion/primitives/convertINTEGER.h>

namespace etsi_its_cam_conversion
{
	etsi_its_cam_msgs::SpeedLimit convert_SpeedLimittoRos(const SpeedLimit_t& _SpeedLimit_in)
	{
		etsi_its_cam_msgs::SpeedLimit SpeedLimit_out;
		convert_toRos(_SpeedLimit_in, SpeedLimit_out.value);
		return SpeedLimit_out;
	}
	SpeedLimit_t convert_SpeedLimittoC(const etsi_its_cam_msgs::SpeedLimit& _SpeedLimit_in)
	{
		SpeedLimit_t SpeedLimit_out;
		memset(&SpeedLimit_out, 0, sizeof(SpeedLimit_t));
		convert_toC(_SpeedLimit_in.value, SpeedLimit_out);
		return SpeedLimit_out;
	}
}