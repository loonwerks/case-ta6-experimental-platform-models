#include <CASE_AttestationGate_thr_Impl_Impl_api.h>

// This file was auto-generated.  Do not edit

bool api_get_trusted_ids__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_get_trusted_ids__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return true;
  } else {
    return false;
  }
}

bool api_get_AutomationRequest_in__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_get_AutomationRequest_in__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return true;
  } else {
    return false;
  }
}

void api_send_AutomationRequest_out__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_send_AutomationRequest_out__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api_sendAutomationRequest_out_(
    SF
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl_api_(this),
    &t_0);
}

bool api_get_OperatingRegion_in__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_get_OperatingRegion_in__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return true;
  } else {
    return false;
  }
}

void api_send_OperatingRegion_out__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_send_OperatingRegion_out__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api_sendOperatingRegion_out_(
    SF
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl_api_(this),
    &t_0);
}

bool api_get_LineSearchTask_in__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_get_LineSearchTask_in__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return true;
  } else {
    return false;
  }
}

void api_send_LineSearchTask_out__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_send_LineSearchTask_out__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api_sendLineSearchTask_out_(
    SF
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl_api_(this),
    &t_0);
}

void api_logInfo__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_logInfo__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl", 0);

  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api_logInfo_(
    SF
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl_api_(this),
    str);
}

void api_logDebug__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_logDebug__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl", 0);

  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api_logDebug_(
    SF
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl_api_(this),
    str);
}

void api_logError__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "api_logError__hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl", 0);

  hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api_logError_(
    SF
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl_api_(this),
    str);
}
