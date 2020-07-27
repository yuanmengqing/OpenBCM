/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_FLEX_DIGEST_LKUP_PRESEL.map.ltl for
 *      bcm56880_a0 variant dna_4_6_6
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56880_a0_lrd_enumpool.h"
#include "bcm56880_a0_dna_4_6_6_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* FLEX_DIGEST_LKUP_PRESEL field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_6_6_lrd_flex_digest_lkup_presel_map_field_data_mmd[] = {
    { /* 0 ING_CMD_BUS_L2_IIF_OPAQUE_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 1 ING_CMD_BUS_L3_IIF_OPAQUE_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 ING_CMD_BUS_VFI_OPAQUE_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 ING_CMD_BUS_SVP_OPAQUE_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 4 ING_CMD_BUS_PROTOCOL_PKT_OPAQUE_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 5 ING_CMD_BUS_L2_IIF_FLEX_DIGEST_CTRL_ID_A */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 6 ING_CMD_BUS_L2_IIF_FLEX_DIGEST_CTRL_ID_B */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 7 ING_CMD_BUS_FIXED_HVE1_RESULT_SET_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 8 ING_CMD_BUS_FLEX_HVE1_RESULT_SET_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 9 ING_CMD_BUS_FIXED_HVE2_RESULT_SET_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 10 ING_CMD_BUS_FLEX_HVE2_RESULT_SET_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 11 ING_CMD_BUS_TUNNEL_PROCESSING_RESULTS_RAW */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 12 ING_CMD_BUS_TUNNEL_PROCESSING_RESULTS_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 13 ING_CMD_BUS_MY_STATION_1_HIT */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 14 ING_CMD_BUS_L4_VALID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_6_6_lrd_flex_digest_lkup_presel_map_field_data = {
    .fields = 15,
    .field = bcm56880_a0_dna_4_6_6_lrd_flex_digest_lkup_presel_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_6_6_lrd_flex_digest_lkup_preselt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 1,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 0,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_6_6_lrd_flex_digest_lkup_preselt_attr_group = {
    .attributes = 4,
    .attr = bcm56880_a0_dna_4_6_6_lrd_flex_digest_lkup_preselt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_dna_4_6_6_lrd_bcmimm_flex_digest_lkup_presel_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56880_a0_dna_4_6_6_lta_bcmimm_flex_digest_lkup_presel_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56880_A0_DNA_4_6_6_LTA_BCMIMM_FLEX_DIGEST_LKUP_PRESEL_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_6_6_lrd_flex_digest_lkup_presel_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_dna_4_6_6_lrd_bcmimm_flex_digest_lkup_presel_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_6_6_lrd_flex_digest_lkup_presel_map = {
    .src_id = BCM56880_A0_DNA_4_6_6_FLEX_DIGEST_LKUP_PRESELt,
    .field_data = &bcm56880_a0_dna_4_6_6_lrd_flex_digest_lkup_presel_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_6_6_lrd_flex_digest_lkup_presel_map_group,
    .table_attr = &bcm56880_a0_dna_4_6_6_lrd_flex_digest_lkup_preselt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};