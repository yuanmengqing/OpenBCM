/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#include <sal/core/libc.h>
#include <shared/swstate/sw_state.h>
#include <shared/error.h>
#include <shared/swstate/sw_state_defs.h>
#include <shared/bsl.h>
#include <shared/swstate/access/sw_state_access.h>
#include <shared/swstate/access/sw_state_dpp_soc_arad_pp_llp_vid_assign_access.h>

#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_set(int unit, CONST ARAD_LLP_VID_ASSIGN_t *llp_vid_assign){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.verify( unit));
    SHR_SW_STATE_MEMSET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign[0],
        llp_vid_assign,
        ARAD_LLP_VID_ASSIGN_t,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_llp_vid_assign_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_get(int unit, ARAD_LLP_VID_ASSIGN_t *llp_vid_assign){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.verify( unit));
    *llp_vid_assign = sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign[0];
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_alloc(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign,
        sizeof(ARAD_LLP_VID_ASSIGN_t),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_llp_vid_assign_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_llp_vid_assign_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_llp_vid_assign_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_set(int unit, int _bit_num){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, _bit_num/SHR_BITWID);
   _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_SET(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         _bit_num);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_clear(int unit, int _bit_num){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, _bit_num/SHR_BITWID);
   _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_CLEAR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         _bit_num);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_get(int unit, int _bit_num, uint8* result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, _bit_num/SHR_BITWID);
   _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_GET(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         _bit_num,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_read(int unit, int sw_state_bmp_first, int result_first, int _range, SHR_BITDCL *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (sw_state_bmp_first + _range - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_READ(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         sw_state_bmp_first,
         result_first,
         _range,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_write(int unit, int sw_state_bmp_first, int input_bmp_first, int _range, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (sw_state_bmp_first + _range - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_WRITE(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         sw_state_bmp_first,
         input_bmp_first,
          _range,
         input_bmp);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_and(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_AND(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_or(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_OR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_xor(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_XOR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_remove(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_REMOVE(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_negate(int unit, int _first, int _count){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_NEGATE(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_clear(int unit, int _first, int _count){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_CLEAR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_set(int unit, int _first, int _count){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_SET(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_null(int unit, int _first, int _count, uint8 *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_NULL(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         _first,
         _count,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_test(int unit, int _first, int _count, uint8 *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_TEST(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         _first,
         _count,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_eq(int unit, SHR_BITDCL *input_bmp, int _first, int _count, uint8 *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_EQ(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         _first,
         _count,
         input_bmp,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_count(int unit, int _first, int _range, int *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify(unit, (_first + _range - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_COUNT(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->llp_vid_assign->vid_sa_based_enable,
         _first,
         _range,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_verify(int unit, int vid_sa_based_enable_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_OUT_OF_BOUND_CHECK( vid_sa_based_enable_idx_0, ARAD_PP_SW_DB_PP_PORTS_NOF_U32, "vid_sa_based_enable");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 


int
sw_state_dpp_soc_arad_pp_llp_vid_assign_access_cb_init(int unit){
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.set = sw_state_dpp_soc_arad_pp_llp_vid_assign_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.get = sw_state_dpp_soc_arad_pp_llp_vid_assign_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.alloc = sw_state_dpp_soc_arad_pp_llp_vid_assign_alloc;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.is_allocated = sw_state_dpp_soc_arad_pp_llp_vid_assign_is_allocated;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.free = sw_state_dpp_soc_arad_pp_llp_vid_assign_free;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.verify = sw_state_dpp_soc_arad_pp_llp_vid_assign_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_set = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_clear = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_clear;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_get = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_read = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_read;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_write = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_write;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_and = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_and;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_or = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_or;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_xor = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_xor;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_remove = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_remove;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_negate = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_negate;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_clear = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_clear;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_set = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_null = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_null;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_test = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_test;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_eq = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_eq;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.bit_range_count = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_bit_range_count;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.llp_vid_assign.vid_sa_based_enable.verify = sw_state_dpp_soc_arad_pp_llp_vid_assign_vid_sa_based_enable_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME