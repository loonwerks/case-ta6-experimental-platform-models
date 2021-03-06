#ifndef CASE_FILTER_ARES_THR_IMPL_IMPL_API_H
#define CASE_FILTER_ARES_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_filter_in__hamr_SW_AUGUST_CASE_Filter_ARes_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_Filter_ARes_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray);

void api_send_filter_out__hamr_SW_AUGUST_CASE_Filter_ARes_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_Filter_ARes_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__hamr_SW_AUGUST_CASE_Filter_ARes_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_Filter_ARes_thr_Impl_Impl this,
  String str);

void api_logDebug__hamr_SW_AUGUST_CASE_Filter_ARes_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_Filter_ARes_thr_Impl_Impl this,
  String str);

void api_logError__hamr_SW_AUGUST_CASE_Filter_ARes_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_Filter_ARes_thr_Impl_Impl this,
  String str);

#endif
