/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CountingRequestInfo_r10_H_
#define	_CountingRequestInfo_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TMGI-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CountingRequestInfo-r10 */
typedef struct CountingRequestInfo_r10 {
	TMGI_r9_t	 tmgi_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CountingRequestInfo_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CountingRequestInfo_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _CountingRequestInfo_r10_H_ */
#include <asn_internal.h>
