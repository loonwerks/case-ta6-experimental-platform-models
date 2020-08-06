#include <WaypointPlanManagerService_thr_Impl_Impl_api.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit
U8 wpmAutomationResponse[262144/8];

Unit hamr_SW_AUGUST_WaypointPlanManagerService_thr_Impl_Impl_initialise_(
  STACK_FRAME
  hamr_SW_AUGUST_WaypointPlanManagerService_thr_Impl_Impl this) {
 DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Impl_api.c", "", "hamr_SW_AUGUST_WaypointPlanManagerService_thr_Impl_Impl_initialise_", 0);

 // example api usage
}

Unit hamr_SW_AUGUST_WaypointPlanManagerService_thr_Impl_Impl_finalise_(
  STACK_FRAME
  hamr_SW_AUGUST_WaypointPlanManagerService_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Impl_api.c", "", "hamr_SW_AUGUST_WaypointPlanManagerService_thr_Impl_Impl_finalise_", 0);

  // example finalise method
}

Unit hamr_SW_AUGUST_WaypointPlanManagerService_thr_Impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_SW_AUGUST_WaypointPlanManagerService_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Impl_api.c", "", "hamr_SW_AUGUST_WaypointPlanManagerService_thr_Impl_Impl_timeTriggered_", 0);

  size_t numBits = 0;
  bool aResp = api_get_AutomationResponse__hamr_SW_AUGUST_WaypointPlanManagerService_thr_Impl_Impl(SF this, &numBits, wpmAutomationResponse);
  if (aResp) {
    DeclNewString(_wpmMsg);
    String wpmMsg = (String)&_wpmMsg;
    String__append(SF wpmMsg, string("\n\treceive AutomationResponse ("));
    Z_string_(SF wpmMsg, numBits/8);
    String__append(SF wpmMsg, string(" bytes)"));
    api_logInfo__hamr_SW_AUGUST_WaypointPlanManagerService_thr_Impl_Impl(SF this, wpmMsg);
  }
}
