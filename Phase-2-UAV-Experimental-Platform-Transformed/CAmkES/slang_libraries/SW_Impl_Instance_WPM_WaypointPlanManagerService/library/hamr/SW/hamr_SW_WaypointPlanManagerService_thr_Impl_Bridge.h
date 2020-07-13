#ifndef SIREUM_H_hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge
#define SIREUM_H_hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge

#define hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_id_(this) ((this)->id)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_name_(this) ((String) &(this)->name)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_dispatchTriggers_(this) ((Option_9AF35E) &(this)->dispatchTriggers)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AutomationResponse_(this) ((art_Port_45E54D) &(this)->AutomationResponse)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AirVehicleState_(this) ((art_Port_45E54D) &(this)->AirVehicleState)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_MissionCommand_(this) ((art_Port_45E54D) &(this)->MissionCommand)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_ReturnHome_(this) ((art_Port_9CBF18) &(this)->ReturnHome)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_api_(this) ((hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api) &(this)->api)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge__eq(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge this, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge other);
inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge__ne(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge this, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge other) {
  return !hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge__eq(this, other);
};
void hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_string_(STACK_FRAME String result, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge this);
void hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_cprint(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge this, B isOut);

inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge__is(STACK_FRAME void* this) {
  return ((hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge) this)->type == Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge;
}

inline hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge__as(STACK_FRAME void *this) {
  if (hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge__is(CALLER this)) return (hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge) this;
  fprintf(stderr, "Invalid case from %s to hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_apply(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D AutomationResponse, art_Port_45E54D AirVehicleState, art_Port_45E54D MissionCommand, art_Port_9CBF18 ReturnHome);

#ifdef __cplusplus
}
#endif

#endif