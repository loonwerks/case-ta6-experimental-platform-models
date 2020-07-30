#ifndef CASE_ATTESTATIONGATE_THR_IMPL_IMPL_API_H
#define CASE_ATTESTATIONGATE_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_trusted_ids__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_AutomationRequest_in__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray);

void api_send_AutomationRequest_out__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray);

bool api_get_OperatingRegion_in__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray);

void api_send_OperatingRegion_out__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray);

bool api_get_LineSearchTask_in__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray);

void api_send_LineSearchTask_out__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  String str);

void api_logDebug__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  String str);

void api_logError__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  String str);

#endif
