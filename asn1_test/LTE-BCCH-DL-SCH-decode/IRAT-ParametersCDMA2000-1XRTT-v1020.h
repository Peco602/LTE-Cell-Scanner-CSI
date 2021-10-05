/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_IRAT_ParametersCDMA2000_1XRTT_v1020_H_
#define	_IRAT_ParametersCDMA2000_1XRTT_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersCDMA2000_1XRTT_v1020__e_CSFB_dual_1XRTT_r10 {
	IRAT_ParametersCDMA2000_1XRTT_v1020__e_CSFB_dual_1XRTT_r10_supported	= 0
} e_IRAT_ParametersCDMA2000_1XRTT_v1020__e_CSFB_dual_1XRTT_r10;

/* IRAT-ParametersCDMA2000-1XRTT-v1020 */
typedef struct IRAT_ParametersCDMA2000_1XRTT_v1020 {
	long	 e_CSFB_dual_1XRTT_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersCDMA2000_1XRTT_v1020_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_e_CSFB_dual_1XRTT_r10_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersCDMA2000_1XRTT_v1020;

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersCDMA2000_1XRTT_v1020_H_ */
#include <asn_internal.h>
