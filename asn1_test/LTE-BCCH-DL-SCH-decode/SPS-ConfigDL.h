/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SPS_ConfigDL_H_
#define	_SPS_ConfigDL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "N1PUCCH-AN-PersistentList.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SPS_ConfigDL_PR {
	SPS_ConfigDL_PR_NOTHING,	/* No components present */
	SPS_ConfigDL_PR_release,
	SPS_ConfigDL_PR_setup
} SPS_ConfigDL_PR;
typedef enum SPS_ConfigDL__setup__semiPersistSchedIntervalDL {
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_sf10	= 0,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_sf20	= 1,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_sf32	= 2,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_sf40	= 3,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_sf64	= 4,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_sf80	= 5,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_sf128	= 6,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_sf160	= 7,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_sf320	= 8,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_sf640	= 9,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_spare6	= 10,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_spare5	= 11,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_spare4	= 12,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_spare3	= 13,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_spare2	= 14,
	SPS_ConfigDL__setup__semiPersistSchedIntervalDL_spare1	= 15
} e_SPS_ConfigDL__setup__semiPersistSchedIntervalDL;
typedef enum SPS_ConfigDL__setup__twoAntennaPortActivated_r10_PR {
	SPS_ConfigDL__setup__twoAntennaPortActivated_r10_PR_NOTHING,	/* No components present */
	SPS_ConfigDL__setup__twoAntennaPortActivated_r10_PR_release,
	SPS_ConfigDL__setup__twoAntennaPortActivated_r10_PR_setup
} SPS_ConfigDL__setup__twoAntennaPortActivated_r10_PR;

/* SPS-ConfigDL */
typedef struct SPS_ConfigDL {
	SPS_ConfigDL_PR present;
	union SPS_ConfigDL_u {
		NULL_t	 release;
		struct SPS_ConfigDL__setup {
			long	 semiPersistSchedIntervalDL;
			long	 numberOfConfSPS_Processes;
			N1PUCCH_AN_PersistentList_t	 n1PUCCH_AN_PersistentList;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct SPS_ConfigDL__setup__twoAntennaPortActivated_r10 {
				SPS_ConfigDL__setup__twoAntennaPortActivated_r10_PR present;
				union SPS_ConfigDL__setup__twoAntennaPortActivated_r10_u {
					NULL_t	 release;
					struct SPS_ConfigDL__setup__twoAntennaPortActivated_r10__setup {
						N1PUCCH_AN_PersistentList_t	 n1PUCCH_AN_PersistentListP1_r10;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} setup;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *twoAntennaPortActivated_r10;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPS_ConfigDL_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_semiPersistSchedIntervalDL_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SPS_ConfigDL;

#ifdef __cplusplus
}
#endif

#endif	/* _SPS_ConfigDL_H_ */
#include <asn_internal.h>
