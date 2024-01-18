/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER`
 */

#ifndef	_DangerousGoodsExtended_H_
#define	_DangerousGoodsExtended_H_


#include <etsi_its_cam_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cam_coding/DangerousGoodsBasic.h"
#include <etsi_its_cam_coding/NativeInteger.h>
#include <etsi_its_cam_coding/BOOLEAN.h>
#include <etsi_its_cam_coding/IA5String.h>
#include "etsi_its_cam_coding/PhoneNumber.h"
#include <etsi_its_cam_coding/UTF8String.h>
#include <etsi_its_cam_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DangerousGoodsExtended */
typedef struct DangerousGoodsExtended {
	DangerousGoodsBasic_t	 dangerousGoodsType;
	long	 unNumber;
	BOOLEAN_t	 elevatedTemperature;
	BOOLEAN_t	 tunnelsRestricted;
	BOOLEAN_t	 limitedQuantity;
	IA5String_t	*emergencyActionCode	/* OPTIONAL */;
	PhoneNumber_t	*phoneNumber	/* OPTIONAL */;
	UTF8String_t	*companyName	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DangerousGoodsExtended_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DangerousGoodsExtended;

#ifdef __cplusplus
}
#endif

#endif	/* _DangerousGoodsExtended_H_ */
#include <etsi_its_cam_coding/asn_internal.h>
