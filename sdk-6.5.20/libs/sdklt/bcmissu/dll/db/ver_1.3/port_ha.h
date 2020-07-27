/**************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/ha_yml_parser.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef PORT_HA_H
#define PORT_HA_H

#include <shr/shr_ha.h>

#define BCMCTH_PORT_MIRROR_CONTAINER_MAX 4

/*!
 * Mirror container information.
 */
typedef struct {
   /*! Reference counter. */
   uint8_t ref_cnt;
   /*! Mirror session. */
   uint8_t sess;
   /*! Mirror instance. */
   uint8_t inst;
} bcmcth_port_mirr_state_t;

#define BCMCTH_PORT_MIRR_STATE_T_ID 0x91c4219e89be3d31

/*!
 * Ingress/egress mirror enable state of a port.
 */
typedef struct {
   /*! Instance bitmap of ingress mirror enabled on a port. */
   uint8_t im;
   /*! Instance bitmap of egress mirror for UC enabled on a port. */
   uint8_t uc_em;
   /*! Mirror information for UC container. */
   bcmcth_port_mirr_state_t uc_em_state[BCMCTH_PORT_MIRROR_CONTAINER_MAX];
   /*! Instance bitmap of egress mirror for non-UC enabled on a port. */
   uint8_t nuc_em;
   /*! Mirror information for non-UC container. */
   bcmcth_port_mirr_state_t nuc_em_state[BCMCTH_PORT_MIRROR_CONTAINER_MAX];
} bcmcth_port_mirror_state_t;

#define BCMCTH_PORT_MIRROR_STATE_T_ID 0x528da515cde2b7f7

typedef struct {
   /*! Block validation. */
   uint32_t signature;
   /*! Indicate the array size of state_array. */
   uint32_t array_size;
   /*! Ingress/egress port mirror state array. */
   bcmcth_port_mirror_state_t state_array[];
} bcmcth_port_mirror_ha_blk_t;

#define BCMCTH_PORT_MIRROR_HA_BLK_T_ID 0x1654cfc88022f456

#endif /* PORT_HA_H */