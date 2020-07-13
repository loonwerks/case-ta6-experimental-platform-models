#include <all.h>

// hamr.SW.UxAS_thr_Impl_Bridge

B hamr_SW_UxAS_thr_Impl_Bridge__eq(hamr_SW_UxAS_thr_Impl_Bridge this, hamr_SW_UxAS_thr_Impl_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AutomationRequest, (art_Port_45E54D) &other->AutomationRequest)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AirVehicleState, (art_Port_45E54D) &other->AirVehicleState)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->OperatingRegion, (art_Port_45E54D) &other->OperatingRegion)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->LineSearchTask, (art_Port_45E54D) &other->LineSearchTask)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AutomationResponse, (art_Port_45E54D) &other->AutomationResponse)) return F;
  return T;
}

B hamr_SW_UxAS_thr_Impl_Bridge__ne(hamr_SW_UxAS_thr_Impl_Bridge this, hamr_SW_UxAS_thr_Impl_Bridge other);

void hamr_SW_UxAS_thr_Impl_Bridge_string_(STACK_FRAME String result, hamr_SW_UxAS_thr_Impl_Bridge this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge", "string", 0);
  String_string_(SF result, string("UxAS_thr_Impl_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AutomationRequest);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AirVehicleState);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->OperatingRegion);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->LineSearchTask);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AutomationResponse);
  String_string_(SF result, string(")"));
}

void hamr_SW_UxAS_thr_Impl_Bridge_cprint(hamr_SW_UxAS_thr_Impl_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("UxAS_thr_Impl_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AutomationRequest, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AirVehicleState, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->OperatingRegion, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->LineSearchTask, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AutomationResponse, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_UxAS_thr_Impl_Bridge__is(STACK_FRAME void* this);
hamr_SW_UxAS_thr_Impl_Bridge hamr_SW_UxAS_thr_Impl_Bridge__as(STACK_FRAME void *this);

void hamr_SW_UxAS_thr_Impl_Bridge_apply(STACK_FRAME hamr_SW_UxAS_thr_Impl_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D AutomationRequest, art_Port_45E54D AirVehicleState, art_Port_45E54D OperatingRegion, art_Port_45E54D LineSearchTask, art_Port_45E54D AutomationResponse) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->AutomationRequest, AutomationRequest, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AirVehicleState, AirVehicleState, sizeof(struct art_Port_45E54D));
  Type_assign(&this->OperatingRegion, OperatingRegion, sizeof(struct art_Port_45E54D));
  Type_assign(&this->LineSearchTask, LineSearchTask, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AutomationResponse, AutomationResponse, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(24);
    STATIC_ASSERT(5 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 5;
    IS_820232_up(&t_1, 0, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AutomationRequest_(this));
    IS_820232_up(&t_1, 1, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AirVehicleState_(this));
    IS_820232_up(&t_1, 2, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_OperatingRegion_(this));
    IS_820232_up(&t_1, 3, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_LineSearchTask_(this));
    IS_820232_up(&t_1, 4, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AutomationResponse_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(4 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 4;
    IS_820232_up(&t_4, 0, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AutomationRequest_(this));
    IS_820232_up(&t_4, 1, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AirVehicleState_(this));
    IS_820232_up(&t_4, 2, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_OperatingRegion_(this));
    IS_820232_up(&t_4, 3, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_LineSearchTask_(this));
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 1;
    IS_820232_up(&t_5, 0, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AutomationResponse_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(44);
    DeclNewhamr_SW_UxAS_thr_Impl_Bridge_Api(t_6);
    hamr_SW_UxAS_thr_Impl_Bridge_Api_apply(SF &t_6, hamr_SW_UxAS_thr_Impl_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AutomationRequest_(this)), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AirVehicleState_(this)), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_OperatingRegion_(this)), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_LineSearchTask_(this)), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AutomationResponse_(this)));
    Type_assign(&this->api, (&t_6), sizeof(struct hamr_SW_UxAS_thr_Impl_Bridge_Api));
  }
  {
    sfUpdateLoc(54);
    DeclNewhamr_SW_UxAS_thr_Impl_Impl(t_8);
    hamr_SW_UxAS_thr_Impl_Impl_apply(SF &t_8, (hamr_SW_UxAS_thr_Impl_Bridge_Api) hamr_SW_UxAS_thr_Impl_Bridge_api_(this));
    DeclNewhamr_SW_UxAS_thr_Impl_Bridge_EntryPoints(t_7);
    hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_apply(SF &t_7, hamr_SW_UxAS_thr_Impl_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AutomationRequest_(this)), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AirVehicleState_(this)), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_OperatingRegion_(this)), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_LineSearchTask_(this)), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AutomationResponse_(this)), (Option_9AF35E) hamr_SW_UxAS_thr_Impl_Bridge_dispatchTriggers_(this), (hamr_SW_UxAS_thr_Impl_Impl) (&t_8));
    Type_assign(&this->entryPoints, (&t_7), sizeof(struct hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints));
  }
}