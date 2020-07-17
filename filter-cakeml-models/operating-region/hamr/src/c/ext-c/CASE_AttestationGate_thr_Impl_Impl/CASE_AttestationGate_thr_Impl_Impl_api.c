#include <CASE_AttestationGate_thr_Impl_Impl_api.h>

// This file was auto-generated.  Do not edit

void api_send_OperatingRegion_out__hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_send_OperatingRegion_out__hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_sendOperatingRegion_out_(
    SF
    hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl_api_(this),
    &t_0);
}

void api_logInfo__hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_logInfo__hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl", 0);

  hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_logInfo_(
    SF
    hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl_api_(this),
    str);
}

void api_logDebug__hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_logDebug__hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl", 0);

  hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_logDebug_(
    SF
    hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl_api_(this),
    str);
}

void api_logError__hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_logError__hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl", 0);

  hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_logError_(
    SF
    hamr_SW_OR_CASE_AttestationGate_thr_Impl_Impl_api_(this),
    str);
}
