#include <all.h>

// hamr.SW.WaypointPlanManagerService_thr_Impl_Impl

B hamr_SW_WaypointPlanManagerService_thr_Impl_Impl__eq(hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this, hamr_SW_WaypointPlanManagerService_thr_Impl_Impl other) {
  if (hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api__ne((hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api) &this->api, (hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api) &other->api)) return F;
  return T;
}

B hamr_SW_WaypointPlanManagerService_thr_Impl_Impl__ne(hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this, hamr_SW_WaypointPlanManagerService_thr_Impl_Impl other);

void hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_string_(STACK_FRAME String result, hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Impl.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Impl", "string", 0);
  String_string_(SF result, string("WaypointPlanManagerService_thr_Impl_Impl("));
  hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_string_(SF result, (hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api) &this->api);
  String_string_(SF result, string(")"));
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_cprint(hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("WaypointPlanManagerService_thr_Impl_Impl("), isOut);
  hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_cprint((hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_WaypointPlanManagerService_thr_Impl_Impl__is(STACK_FRAME void* this);
hamr_SW_WaypointPlanManagerService_thr_Impl_Impl hamr_SW_WaypointPlanManagerService_thr_Impl_Impl__as(STACK_FRAME void *this);

void hamr_SW_WaypointPlanManagerService_thr_Impl_Impl_apply(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Impl this, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api api) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Impl.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api));
}