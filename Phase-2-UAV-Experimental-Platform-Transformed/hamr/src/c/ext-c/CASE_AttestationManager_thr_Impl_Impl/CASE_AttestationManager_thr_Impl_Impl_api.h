#ifndef CASE_ATTESTATIONMANAGER_THR_IMPL_IMPL_API_H
#define CASE_ATTESTATIONMANAGER_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

void api_send_trusted_ids__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray);

void api_send_attestation_request__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray);

bool api_get_attestation_response__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray);

void api_logInfo__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  String str);

void api_logDebug__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  String str);

void api_logError__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this,
  String str);

#endif
