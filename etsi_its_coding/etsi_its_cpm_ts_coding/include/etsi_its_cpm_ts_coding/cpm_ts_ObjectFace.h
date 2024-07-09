/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_ObjectFace_H_
#define	_cpm_ts_ObjectFace_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ts_ObjectFace {
	cpm_ts_ObjectFace_front	= 0,
	cpm_ts_ObjectFace_sideLeftFront	= 1,
	cpm_ts_ObjectFace_sideLeftBack	= 2,
	cpm_ts_ObjectFace_sideRightFront	= 3,
	cpm_ts_ObjectFace_sideRightBack	= 4,
	cpm_ts_ObjectFace_back	= 5
} e_cpm_ts_ObjectFace;

/* cpm_ts_ObjectFace */
typedef long	 cpm_ts_ObjectFace_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_ObjectFace;
asn_struct_free_f cpm_ts_ObjectFace_free;
asn_struct_print_f cpm_ts_ObjectFace_print;
asn_constr_check_f cpm_ts_ObjectFace_constraint;
per_type_decoder_f cpm_ts_ObjectFace_decode_uper;
per_type_encoder_f cpm_ts_ObjectFace_encode_uper;
per_type_decoder_f cpm_ts_ObjectFace_decode_aper;
per_type_encoder_f cpm_ts_ObjectFace_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_ObjectFace_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>