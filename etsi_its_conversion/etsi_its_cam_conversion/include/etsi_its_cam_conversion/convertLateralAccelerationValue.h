#pragma once

#include <etsi_its_cam_coding/LateralAccelerationValue.h>
#include <etsi_its_cam_msgs/LateralAccelerationValue.h>
#include <etsi_its_cam_conversion/primitives/convertINTEGER.h>

namespace etsi_its_cam_conversion
{
	etsi_its_cam_msgs::LateralAccelerationValue convert_LateralAccelerationValuetoRos(const LateralAccelerationValue_t& _LateralAccelerationValue_in)
	{
		etsi_its_cam_msgs::LateralAccelerationValue LateralAccelerationValue_out;
		convert_toRos(_LateralAccelerationValue_in, LateralAccelerationValue_out.value);
		return LateralAccelerationValue_out;
	}
	LateralAccelerationValue_t convert_LateralAccelerationValuetoC(const etsi_its_cam_msgs::LateralAccelerationValue& _LateralAccelerationValue_in)
	{
		LateralAccelerationValue_t LateralAccelerationValue_out;
		memset(&LateralAccelerationValue_out, 0, sizeof(LateralAccelerationValue_t));
		convert_toC(_LateralAccelerationValue_in.value, LateralAccelerationValue_out);
		return LateralAccelerationValue_out;
	}
}