#pragma once

#include <etsi_its_cam_coding/RSUContainerHighFrequency.h>
#include <etsi_its_cam_msgs/RSUContainerHighFrequency.h>
#include <etsi_its_cam_conversion/convertProtectedCommunicationZonesRSU.h>

namespace etsi_its_cam_conversion
{
	etsi_its_cam_msgs::RSUContainerHighFrequency convert_RSUContainerHighFrequencytoRos(const RSUContainerHighFrequency_t& _RSUContainerHighFrequency_in)
	{
		etsi_its_cam_msgs::RSUContainerHighFrequency RSUContainerHighFrequency_out;
		if(_RSUContainerHighFrequency_in.protectedCommunicationZonesRSU)
		{
			RSUContainerHighFrequency_out.protectedCommunicationZonesRSU = convert_ProtectedCommunicationZonesRSUtoRos(*_RSUContainerHighFrequency_in.protectedCommunicationZonesRSU);
			RSUContainerHighFrequency_out.protectedCommunicationZonesRSU_isPresent = true;
		}
		return RSUContainerHighFrequency_out;
	}
	RSUContainerHighFrequency_t convert_RSUContainerHighFrequencytoC(const etsi_its_cam_msgs::RSUContainerHighFrequency& _RSUContainerHighFrequency_in)
	{
		RSUContainerHighFrequency_t RSUContainerHighFrequency_out;
		memset(&RSUContainerHighFrequency_out, 0, sizeof(RSUContainerHighFrequency_t));
		if(_RSUContainerHighFrequency_in.protectedCommunicationZonesRSU_isPresent)
		{
			auto protectedCommunicationZonesRSU = convert_ProtectedCommunicationZonesRSUtoC(_RSUContainerHighFrequency_in.protectedCommunicationZonesRSU);
			RSUContainerHighFrequency_out.protectedCommunicationZonesRSU = new ProtectedCommunicationZonesRSU_t(protectedCommunicationZonesRSU);
		}
		return RSUContainerHighFrequency_out;
	}
}