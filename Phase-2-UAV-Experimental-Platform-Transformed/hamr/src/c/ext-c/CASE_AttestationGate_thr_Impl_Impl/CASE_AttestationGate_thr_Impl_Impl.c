#include <CASE_AttestationGate_thr_Impl_Impl_api.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit
U8 AGOperatingRegion[2048/8];
U8 AGLineSearchTask[65536/8];
U8 AGAutomationRequest[2048];

DeclNewString(_AGMsgOR);
String AGMsgOR = (String)&_AGMsgOR;

DeclNewString(_AGMsgLST);
String AGMsgLST = (String)&_AGMsgLST;

DeclNewString(_AGMsgAR);
String AGMsgAR = (String)&_AGMsgAR;

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Impl_initialise_(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this) {
 DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_Impl_initialise_", 0);

  String__append(SF AGMsgOR, string("\n\tsend OperatingRegion ("));
  Z_string_(SF AGMsgOR, sizeof(AGOperatingRegion));
  String__append(SF AGMsgOR, string(" bytes)"));

  String__append(SF AGMsgLST, string("\n\tsend LineSearchTask ("));
  Z_string_(SF AGMsgLST, sizeof(AGLineSearchTask));
  String__append(SF AGMsgLST, string(" bytes)"));

  String__append(SF AGMsgAR, string("\n\tsend AutomationRequest ("));
  Z_string_(SF AGMsgAR, sizeof(AGAutomationRequest));
  String__append(SF AGMsgAR, string(" bytes)"));
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Impl_finalise_(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_Impl_finalise_", 0);

  // example finalise method
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Impl_api.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_Impl_timeTriggered_", 0);
  
  size_t numBitsOR = 0;
  size_t numBitsLST = 0;
  size_t numBitsAR = 0;

  bool OR = api_get_OperatingRegion_in__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(SF this, &numBitsOR, AGOperatingRegion);
  bool LST = api_get_LineSearchTask_in__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(SF this, &numBitsLST, AGLineSearchTask);
  bool AR = api_get_AutomationRequest_in__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(SF this, &numBitsAR, AGAutomationRequest);

  if (OR) {
    api_send_OperatingRegion_out__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(SF this, numBitsOR, AGOperatingRegion);
    api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(SF this, AGMsgOR);
  }

  if (LST) {
    api_send_LineSearchTask_out__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(SF this, numBitsLST, AGLineSearchTask);
    api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(SF this, AGMsgLST);
  }

  if (AR) {
    api_send_AutomationRequest_out__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(SF this, numBitsAR, AGAutomationRequest);
    api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(SF this, AGMsgAR);
  }
}
