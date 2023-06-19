#pragma once

#include <etsi_its_cam_coding/VerticalAccelerationValue.h>
#include <etsi_its_cam_msgs/VerticalAccelerationValue.h>
#include <etsi_its_cam_conversion/primitives/convertINTEGER.h>

namespace etsi_its_cam_conversion
{
	etsi_its_cam_msgs::VerticalAccelerationValue convert_VerticalAccelerationValuetoRos(const VerticalAccelerationValue_t& _VerticalAccelerationValue_in)
	{
		etsi_its_cam_msgs::VerticalAccelerationValue VerticalAccelerationValue_out;
		convert_toRos(_VerticalAccelerationValue_in, VerticalAccelerationValue_out.value);
		return VerticalAccelerationValue_out;
	}
	VerticalAccelerationValue_t convert_VerticalAccelerationValuetoC(const etsi_its_cam_msgs::VerticalAccelerationValue& _VerticalAccelerationValue_in)
	{
		VerticalAccelerationValue_t VerticalAccelerationValue_out;
		memset(&VerticalAccelerationValue_out, 0, sizeof(VerticalAccelerationValue_t));
		convert_toC(_VerticalAccelerationValue_in.value, VerticalAccelerationValue_out);
		return VerticalAccelerationValue_out;
	}
}