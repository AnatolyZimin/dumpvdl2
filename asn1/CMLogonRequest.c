/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CMMessageSetVersion1"
 * 	found in "atn-cm.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "CMLogonRequest.h"

static int
memb_groundInitiatedApplications_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 256)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_airOnlyInitiatedApplications_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 256)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_groundInitiatedApplications_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_airOnlyInitiatedApplications_constr_6 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_groundInitiatedApplications_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_airOnlyInitiatedApplications_constr_6 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_groundInitiatedApplications_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AEQualifierVersionAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_groundInitiatedApplications_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_groundInitiatedApplications_specs_4 = {
	sizeof(struct CMLogonRequest__groundInitiatedApplications),
	offsetof(struct CMLogonRequest__groundInitiatedApplications, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_groundInitiatedApplications_4 = {
	"groundInitiatedApplications",
	"groundInitiatedApplications",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_groundInitiatedApplications_tags_4,
	sizeof(asn_DEF_groundInitiatedApplications_tags_4)
		/sizeof(asn_DEF_groundInitiatedApplications_tags_4[0]) - 1, /* 1 */
	asn_DEF_groundInitiatedApplications_tags_4,	/* Same as above */
	sizeof(asn_DEF_groundInitiatedApplications_tags_4)
		/sizeof(asn_DEF_groundInitiatedApplications_tags_4[0]), /* 2 */
	&asn_PER_type_groundInitiatedApplications_constr_4,
	asn_MBR_groundInitiatedApplications_4,
	1,	/* Single element */
	&asn_SPC_groundInitiatedApplications_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_airOnlyInitiatedApplications_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AEQualifierVersion,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_airOnlyInitiatedApplications_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_airOnlyInitiatedApplications_specs_6 = {
	sizeof(struct CMLogonRequest__airOnlyInitiatedApplications),
	offsetof(struct CMLogonRequest__airOnlyInitiatedApplications, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_airOnlyInitiatedApplications_6 = {
	"airOnlyInitiatedApplications",
	"airOnlyInitiatedApplications",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_airOnlyInitiatedApplications_tags_6,
	sizeof(asn_DEF_airOnlyInitiatedApplications_tags_6)
		/sizeof(asn_DEF_airOnlyInitiatedApplications_tags_6[0]) - 1, /* 1 */
	asn_DEF_airOnlyInitiatedApplications_tags_6,	/* Same as above */
	sizeof(asn_DEF_airOnlyInitiatedApplications_tags_6)
		/sizeof(asn_DEF_airOnlyInitiatedApplications_tags_6[0]), /* 2 */
	&asn_PER_type_airOnlyInitiatedApplications_constr_6,
	asn_MBR_airOnlyInitiatedApplications_6,
	1,	/* Single element */
	&asn_SPC_airOnlyInitiatedApplications_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CMLogonRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CMLogonRequest, aircraftFlightIdentification),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AircraftFlightIdentification,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aircraftFlightIdentification"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CMLogonRequest, cMLongTSAP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LongTsap,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cMLongTSAP"
		},
	{ ATF_POINTER, 6, offsetof(struct CMLogonRequest, groundInitiatedApplications),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_groundInitiatedApplications_4,
		memb_groundInitiatedApplications_constraint_1,
		&asn_PER_memb_groundInitiatedApplications_constr_4,
		0,
		"groundInitiatedApplications"
		},
	{ ATF_POINTER, 5, offsetof(struct CMLogonRequest, airOnlyInitiatedApplications),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_airOnlyInitiatedApplications_6,
		memb_airOnlyInitiatedApplications_constraint_1,
		&asn_PER_memb_airOnlyInitiatedApplications_constr_6,
		0,
		"airOnlyInitiatedApplications"
		},
	{ ATF_POINTER, 4, offsetof(struct CMLogonRequest, facilityDesignation),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FacilityDesignation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"facilityDesignation"
		},
	{ ATF_POINTER, 3, offsetof(struct CMLogonRequest, airportDeparture),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Airport,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"airportDeparture"
		},
	{ ATF_POINTER, 2, offsetof(struct CMLogonRequest, airportDestination),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Airport,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"airportDestination"
		},
	{ ATF_POINTER, 1, offsetof(struct CMLogonRequest, dateTimeDepartureETD),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DateTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dateTimeDepartureETD"
		},
};
static const int asn_MAP_CMLogonRequest_oms_1[] = { 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_CMLogonRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CMLogonRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aircraftFlightIdentification */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cMLongTSAP */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* groundInitiatedApplications */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* airOnlyInitiatedApplications */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* facilityDesignation */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* airportDeparture */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* airportDestination */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* dateTimeDepartureETD */
};
static asn_SEQUENCE_specifics_t asn_SPC_CMLogonRequest_specs_1 = {
	sizeof(struct CMLogonRequest),
	offsetof(struct CMLogonRequest, _asn_ctx),
	asn_MAP_CMLogonRequest_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_CMLogonRequest_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CMLogonRequest = {
	"CMLogonRequest",
	"CMLogonRequest",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CMLogonRequest_tags_1,
	sizeof(asn_DEF_CMLogonRequest_tags_1)
		/sizeof(asn_DEF_CMLogonRequest_tags_1[0]), /* 1 */
	asn_DEF_CMLogonRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_CMLogonRequest_tags_1)
		/sizeof(asn_DEF_CMLogonRequest_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CMLogonRequest_1,
	8,	/* Elements count */
	&asn_SPC_CMLogonRequest_specs_1	/* Additional specs */
};
