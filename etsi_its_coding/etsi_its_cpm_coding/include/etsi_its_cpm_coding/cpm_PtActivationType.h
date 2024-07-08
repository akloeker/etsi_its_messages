/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_PtActivationType_H_
#define	_cpm_PtActivationType_H_


#include <etsi_its_cpm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_PtActivationType {
	cpm_PtActivationType_undefinedCodingType	= 0,
	cpm_PtActivationType_r09_16CodingType	= 1,
	cpm_PtActivationType_vdv_50149CodingType	= 2
} e_cpm_PtActivationType;

/* cpm_PtActivationType */
typedef long	 cpm_PtActivationType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_PtActivationType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_PtActivationType;
asn_struct_free_f cpm_PtActivationType_free;
asn_struct_print_f cpm_PtActivationType_print;
asn_constr_check_f cpm_PtActivationType_constraint;
per_type_decoder_f cpm_PtActivationType_decode_uper;
per_type_encoder_f cpm_PtActivationType_encode_uper;
per_type_decoder_f cpm_PtActivationType_decode_aper;
per_type_encoder_f cpm_PtActivationType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_PtActivationType_H_ */
#include <etsi_its_cpm_coding/asn_internal.h>