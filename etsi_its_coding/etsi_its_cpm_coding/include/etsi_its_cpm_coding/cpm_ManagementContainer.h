/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/input/CPM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ManagementContainer_H_
#define	_cpm_ManagementContainer_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cpm_coding/cpm_TimestampIts.h"
#include "etsi_its_cpm_coding/cpm_ReferencePosition.h"
#include <etsi_its_cpm_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct cpm_MessageSegmentationInfo;
struct cpm_MessageRateRange;

/* cpm_ManagementContainer */
typedef struct cpm_ManagementContainer {
	cpm_TimestampIts_t	 referenceTime;
	cpm_ReferencePosition_t	 referencePosition;
	struct cpm_MessageSegmentationInfo	*segmentationInfo;	/* OPTIONAL */
	struct cpm_MessageRateRange	*messageRateRange;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_ManagementContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_ManagementContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_cpm_ManagementContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_cpm_ManagementContainer_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_cpm_coding/cpm_MessageSegmentationInfo.h"
#include "etsi_its_cpm_coding/cpm_MessageRateRange.h"

#endif	/* _cpm_ManagementContainer_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>