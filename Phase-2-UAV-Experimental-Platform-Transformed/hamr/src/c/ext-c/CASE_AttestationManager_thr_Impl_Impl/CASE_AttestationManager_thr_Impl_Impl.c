#include <CASE_AttestationManager_thr_Impl_Impl_api.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit
U8 AMTrusted_ids[] = {0x35, 0x30, 0x30, 0x00, 0x34, 0x30, 0x30, 0x00, 0x36, 0x30, 0x30, 0x00};

DeclNewString(_AMMsg);
String AMMsg = (String)&_AMMsg;

Unit hamr_SW_CASE_AttestationManager_thr_Impl_Impl_initialise_(
  STACK_FRAME
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this) {
 DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Impl_api.c", "", "hamr_SW_CASE_AttestationManager_thr_Impl_Impl_initialise_", 0);
  
  String__append(SF AMMsg, string("\n\tsend trusted_ids ("));
  Z_string_(SF AMMsg, sizeof(AMTrusted_ids));
  String__append(SF AMMsg, string(" bytes)"));
  api_send_trusted_ids__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(SF this, sizeof(AMTrusted_ids) * 8, AMTrusted_ids);
  api_logInfo__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(SF this, AMMsg);
}

Unit hamr_SW_CASE_AttestationManager_thr_Impl_Impl_finalise_(
  STACK_FRAME
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Impl_api.c", "", "hamr_SW_CASE_AttestationManager_thr_Impl_Impl_finalise_", 0);

  // example finalise method
}

Unit hamr_SW_CASE_AttestationManager_thr_Impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_SW_CASE_AttestationManager_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Impl_api.c", "", "hamr_SW_CASE_AttestationManager_thr_Impl_Impl_timeTriggered_", 0);
  // api_send_trusted_ids__hamr_SW_CASE_AttestationManager_thr_Impl_Impl(SF this, sizeof(AMTrusted_ids) * 8, AMTrusted_ids);
}
