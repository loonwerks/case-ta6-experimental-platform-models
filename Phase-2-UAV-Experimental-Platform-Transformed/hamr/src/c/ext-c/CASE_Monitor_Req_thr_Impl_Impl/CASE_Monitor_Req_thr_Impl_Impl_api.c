#include <CASE_Monitor_Req_thr_Impl_Impl_api.h>

// This file was auto-generated.  Do not edit

bool api_get_observed__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return true;
  } else {
    return false;
  }
}

bool api_get_reference_1__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return true;
  } else {
    return false;
  }
}

void api_send_alert__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_sendalert_(
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this),
    &t_0);
}

void api_logInfo__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  String str) {
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logInfo_(
    SF
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this),
    str);
}

void api_logDebug__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  String str) {
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logDebug_(
    SF
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this),
    str);
}

void api_logError__hamr_SW_CASE_Monitor_Req_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this,
  String str) {
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logError_(
    SF
    hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this),
    str);
}
