#include <CASE_Filter_AReq_thr_Impl_Impl_api.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit
U8 fltAutomationRequest[2048/8];

Unit hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl_initialise_(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl this) {
 DeclNewStackFrame(caller, "CASE_Filter_AReq_thr_Impl_Impl_api.c", "", "hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl_initialise_", 0);

 // example api usage
}

Unit hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl_finalise_(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_Filter_AReq_thr_Impl_Impl_api.c", "", "hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl_finalise_", 0);

  // example finalise method
}

Unit hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_Filter_AReq_thr_Impl_Impl_api.c", "", "hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl_timeTriggered_", 0);

  size_t numBits = 0;
  bool isAR = api_get_filter_in__hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl(SF this, &numBits, fltAutomationRequest);
  if (isAR) {
    api_send_filter_out_UXAS__hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl(SF this, numBits, fltAutomationRequest);
    api_send_filter_out_MON_REQ__hamr_SW_AUGUST_CASE_Filter_AReq_thr_Impl_Impl(SF this, numBits, fltAutomationRequest);
  }
}
