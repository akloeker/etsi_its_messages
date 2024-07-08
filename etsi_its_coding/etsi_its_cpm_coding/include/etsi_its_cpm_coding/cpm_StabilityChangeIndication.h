/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_StabilityChangeIndication_H_
#define	_cpm_StabilityChangeIndication_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cpm_coding/cpm_StabilityLossProbability.h"
#include "etsi_its_cpm_coding/cpm_DeltaTimeTenthOfSecond.h"
#include <etsi_its_cpm_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cpm_StabilityChangeIndication */
typedef struct cpm_StabilityChangeIndication {
	cpm_StabilityLossProbability_t	 lossProbability;
	cpm_DeltaTimeTenthOfSecond_t	 actionDeltaTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_StabilityChangeIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_StabilityChangeIndication;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_StabilityChangeIndication_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>