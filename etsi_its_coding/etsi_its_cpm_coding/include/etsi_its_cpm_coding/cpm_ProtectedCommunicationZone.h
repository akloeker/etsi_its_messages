/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ProtectedCommunicationZone_H_
#define	_cpm_ProtectedCommunicationZone_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cpm_coding/cpm_ProtectedZoneType.h"
#include "etsi_its_cpm_coding/cpm_TimestampIts.h"
#include "etsi_its_cpm_coding/cpm_Latitude.h"
#include "etsi_its_cpm_coding/cpm_Longitude.h"
#include "etsi_its_cpm_coding/cpm_ProtectedZoneRadius.h"
#include "etsi_its_cpm_coding/cpm_ProtectedZoneId.h"
#include <etsi_its_cpm_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cpm_ProtectedCommunicationZone */
typedef struct cpm_ProtectedCommunicationZone {
	cpm_ProtectedZoneType_t	 protectedZoneType;
	cpm_TimestampIts_t	*expiryTime;	/* OPTIONAL */
	cpm_Latitude_t	 protectedZoneLatitude;
	cpm_Longitude_t	 protectedZoneLongitude;
	cpm_ProtectedZoneRadius_t	*protectedZoneRadius;	/* OPTIONAL */
	cpm_ProtectedZoneId_t	*protectedZoneId;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_ProtectedCommunicationZone_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_ProtectedCommunicationZone;
extern asn_SEQUENCE_specifics_t asn_SPC_cpm_ProtectedCommunicationZone_specs_1;
extern asn_TYPE_member_t asn_MBR_cpm_ProtectedCommunicationZone_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ProtectedCommunicationZone_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>