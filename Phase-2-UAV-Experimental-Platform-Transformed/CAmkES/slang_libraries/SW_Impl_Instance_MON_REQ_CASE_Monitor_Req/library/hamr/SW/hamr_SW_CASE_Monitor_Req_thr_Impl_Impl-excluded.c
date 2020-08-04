#include <all.h>

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_initialise_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Impl.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Impl", "initialise", 0);

  sfUpdateLoc(14);
  {
    hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logInfo_(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this), (String) string("Example info logging"));
  }

  sfUpdateLoc(15);
  {
    hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logDebug_(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this), (String) string("Example debug logging"));
  }

  sfUpdateLoc(16);
  {
    hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logError_(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this), (String) string("Example error logging"));
  }

  sfUpdateLoc(18);
  Option_30119F apiUsage_observed;
  DeclNewOption_30119F(t_0);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_(SF (Option_30119F) &t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this));
  apiUsage_observed = (Option_30119F) ((Option_30119F) &t_0);

  sfUpdateLoc(19);
  Option_30119F apiUsage_reference_1;
  DeclNewOption_30119F(t_1);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_(SF (Option_30119F) &t_1, hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this));
  apiUsage_reference_1 = (Option_30119F) ((Option_30119F) &t_1);

  sfUpdateLoc(20);
  {
    DeclNewIS_C4F575(t_2);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_2);
    hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_sendalert_(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_2));
  }
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_timeTriggered_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Impl.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Impl", "timeTriggered", 0);
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_Impl_finalise_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Impl.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Impl", "finalise", 0);
}