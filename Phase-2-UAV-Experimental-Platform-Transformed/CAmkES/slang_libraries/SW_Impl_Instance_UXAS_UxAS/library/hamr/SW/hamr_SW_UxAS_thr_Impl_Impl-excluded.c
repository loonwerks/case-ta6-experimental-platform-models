#include <all.h>

Unit hamr_SW_UxAS_thr_Impl_Impl_initialise_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Impl.scala", "hamr.SW.UxAS_thr_Impl_Impl", "initialise", 0);

  sfUpdateLoc(14);
  {
    hamr_SW_UxAS_thr_Impl_Bridge_Api_logInfo_(SF hamr_SW_UxAS_thr_Impl_Impl_api_(this), (String) string("Example info logging"));
  }

  sfUpdateLoc(15);
  {
    hamr_SW_UxAS_thr_Impl_Bridge_Api_logDebug_(SF hamr_SW_UxAS_thr_Impl_Impl_api_(this), (String) string("Example debug logging"));
  }

  sfUpdateLoc(16);
  {
    hamr_SW_UxAS_thr_Impl_Bridge_Api_logError_(SF hamr_SW_UxAS_thr_Impl_Impl_api_(this), (String) string("Example error logging"));
  }

  sfUpdateLoc(18);
  Option_30119F apiUsage_AutomationRequest;
  DeclNewOption_30119F(t_0);
  hamr_SW_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_(SF (Option_30119F) &t_0, hamr_SW_UxAS_thr_Impl_Impl_api_(this));
  apiUsage_AutomationRequest = (Option_30119F) ((Option_30119F) &t_0);

  sfUpdateLoc(19);
  Option_30119F apiUsage_AirVehicleState;
  DeclNewOption_30119F(t_1);
  hamr_SW_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_(SF (Option_30119F) &t_1, hamr_SW_UxAS_thr_Impl_Impl_api_(this));
  apiUsage_AirVehicleState = (Option_30119F) ((Option_30119F) &t_1);

  sfUpdateLoc(20);
  Option_30119F apiUsage_OperatingRegion;
  DeclNewOption_30119F(t_2);
  hamr_SW_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_(SF (Option_30119F) &t_2, hamr_SW_UxAS_thr_Impl_Impl_api_(this));
  apiUsage_OperatingRegion = (Option_30119F) ((Option_30119F) &t_2);

  sfUpdateLoc(21);
  Option_30119F apiUsage_LineSearchTask;
  DeclNewOption_30119F(t_3);
  hamr_SW_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_(SF (Option_30119F) &t_3, hamr_SW_UxAS_thr_Impl_Impl_api_(this));
  apiUsage_LineSearchTask = (Option_30119F) ((Option_30119F) &t_3);

  sfUpdateLoc(22);
  {
    DeclNewIS_C4F575(t_4);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_4);
    hamr_SW_UxAS_thr_Impl_Bridge_Api_sendAutomationResponse_(SF hamr_SW_UxAS_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_4));
  }
}

Unit hamr_SW_UxAS_thr_Impl_Impl_timeTriggered_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Impl.scala", "hamr.SW.UxAS_thr_Impl_Impl", "timeTriggered", 0);
}

Unit hamr_SW_UxAS_thr_Impl_Impl_finalise_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Impl.scala", "hamr.SW.UxAS_thr_Impl_Impl", "finalise", 0);
}