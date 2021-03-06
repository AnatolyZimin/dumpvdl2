/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_LatitudeReportingPoints_H_
#define	_LatitudeReportingPoints_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LatitudeDirection.h"
#include "LatitudeDegrees.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LatitudeReportingPoints */
typedef struct LatitudeReportingPoints {
	LatitudeDirection_t	 latitudeDirection;
	LatitudeDegrees_t	 latitudeDegrees;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LatitudeReportingPoints_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LatitudeReportingPoints;

#ifdef __cplusplus
}
#endif

#endif	/* _LatitudeReportingPoints_H_ */
#include <asn_internal.h>
