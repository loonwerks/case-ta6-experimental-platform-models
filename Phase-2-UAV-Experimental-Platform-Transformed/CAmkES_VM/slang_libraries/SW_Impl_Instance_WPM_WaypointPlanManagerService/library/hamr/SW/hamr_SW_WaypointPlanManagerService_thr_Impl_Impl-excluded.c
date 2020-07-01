#include <all.h>

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_initialise_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Impl.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Impl", "initialise", 0);

  sfUpdateLoc(14);
  {
    hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_logInfo_(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_api_(this), (String) string("Example info logging"));
  }

  sfUpdateLoc(15);
  {
    hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_logDebug_(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_api_(this), (String) string("Example debug logging"));
  }

  sfUpdateLoc(16);
  {
    hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_logError_(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_api_(this), (String) string("Example error logging"));
  }

  sfUpdateLoc(18);
  Option_30119F apiUsage_AutomationResponse;
  DeclNewOption_30119F(t_0);
  hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAutomationResponse_(SF (Option_30119F) &t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_api_(this));
  apiUsage_AutomationResponse = (Option_30119F) ((Option_30119F) &t_0);

  sfUpdateLoc(19);
  Option_30119F apiUsage_AirVehicleState;
  DeclNewOption_30119F(t_1);
  hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAirVehicleState_(SF (Option_30119F) &t_1, hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_api_(this));
  apiUsage_AirVehicleState = (Option_30119F) ((Option_30119F) &t_1);

  sfUpdateLoc(20);
  {
    DeclNewIS_C4F575(t_2);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_2);
    hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_sendMissionCommand_(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_2));
  }

  sfUpdateLoc(21);
  Option_C622DB apiUsage_ReturnHome;
  DeclNewOption_C622DB(t_3);
  hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getReturnHome_(SF (Option_C622DB) &t_3, hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_api_(this));
  apiUsage_ReturnHome = (Option_C622DB) ((Option_C622DB) &t_3);
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_timeTriggered_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Impl.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Impl", "timeTriggered", 0);
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_finalise_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Impl.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Impl", "finalise", 0);
}