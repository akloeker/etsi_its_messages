/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ClusterLeaveReason_H_
#define	_cpm_ClusterLeaveReason_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ClusterLeaveReason {
	cpm_ClusterLeaveReason_notProvided	= 0,
	cpm_ClusterLeaveReason_clusterLeaderLost	= 1,
	cpm_ClusterLeaveReason_clusterDisbandedByLeader	= 2,
	cpm_ClusterLeaveReason_outOfClusterBoundingBox	= 3,
	cpm_ClusterLeaveReason_outOfClusterSpeedRange	= 4,
	cpm_ClusterLeaveReason_joiningAnotherCluster	= 5,
	cpm_ClusterLeaveReason_cancelledJoin	= 6,
	cpm_ClusterLeaveReason_failedJoin	= 7,
	cpm_ClusterLeaveReason_safetyCondition	= 8,
	cpm_ClusterLeaveReason_max	= 15
} e_cpm_ClusterLeaveReason;

/* cpm_ClusterLeaveReason */
typedef long	 cpm_ClusterLeaveReason_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_ClusterLeaveReason_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_ClusterLeaveReason;
extern const asn_INTEGER_specifics_t asn_SPC_cpm_ClusterLeaveReason_specs_1;
asn_struct_free_f cpm_ClusterLeaveReason_free;
asn_struct_print_f cpm_ClusterLeaveReason_print;
asn_constr_check_f cpm_ClusterLeaveReason_constraint;
per_type_decoder_f cpm_ClusterLeaveReason_decode_uper;
per_type_encoder_f cpm_ClusterLeaveReason_encode_uper;
per_type_decoder_f cpm_ClusterLeaveReason_decode_aper;
per_type_encoder_f cpm_ClusterLeaveReason_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ClusterLeaveReason_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>