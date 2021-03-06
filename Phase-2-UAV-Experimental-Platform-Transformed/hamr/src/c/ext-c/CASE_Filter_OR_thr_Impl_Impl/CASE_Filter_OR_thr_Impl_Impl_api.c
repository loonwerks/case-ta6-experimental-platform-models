#include <CASE_Filter_OR_thr_Impl_Impl_api.h>

// This file was auto-generated.  Do not edit

bool api_get_filter_in__hamr_SW_CASE_Filter_OR_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_Filter_OR_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_Filter_OR_thr_Impl_Impl_api.c", "", "api_get_filter_in__hamr_SW_CASE_Filter_OR_thr_Impl_Impl", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api_getfilter_in_(
    SF
    (Option_30119F) &t_0,
    hamr_SW_CASE_Filter_OR_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return true;
  } else {
    return false;
  }
}

void api_send_filter_out__hamr_SW_CASE_Filter_OR_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_Filter_OR_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_Filter_OR_thr_Impl_Impl_api.c", "", "api_send_filter_out__hamr_SW_CASE_Filter_OR_thr_Impl_Impl", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api_sendfilter_out_(
    SF
    hamr_SW_CASE_Filter_OR_thr_Impl_Impl_api_(this),
    &t_0);
}

void api_logInfo__hamr_SW_CASE_Filter_OR_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_Filter_OR_thr_Impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "CASE_Filter_OR_thr_Impl_Impl_api.c", "", "api_logInfo__hamr_SW_CASE_Filter_OR_thr_Impl_Impl", 0);

  hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api_logInfo_(
    SF
    hamr_SW_CASE_Filter_OR_thr_Impl_Impl_api_(this),
    str);
}

void api_logDebug__hamr_SW_CASE_Filter_OR_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_Filter_OR_thr_Impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "CASE_Filter_OR_thr_Impl_Impl_api.c", "", "api_logDebug__hamr_SW_CASE_Filter_OR_thr_Impl_Impl", 0);

  hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api_logDebug_(
    SF
    hamr_SW_CASE_Filter_OR_thr_Impl_Impl_api_(this),
    str);
}

void api_logError__hamr_SW_CASE_Filter_OR_thr_Impl_Impl(
  STACK_FRAME
  hamr_SW_CASE_Filter_OR_thr_Impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "CASE_Filter_OR_thr_Impl_Impl_api.c", "", "api_logError__hamr_SW_CASE_Filter_OR_thr_Impl_Impl", 0);

  hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api_logError_(
    SF
    hamr_SW_CASE_Filter_OR_thr_Impl_Impl_api_(this),
    str);
}
