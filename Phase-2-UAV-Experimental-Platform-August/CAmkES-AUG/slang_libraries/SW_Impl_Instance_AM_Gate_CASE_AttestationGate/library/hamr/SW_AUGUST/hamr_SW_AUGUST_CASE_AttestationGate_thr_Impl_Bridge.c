#include <all.h>

// hamr.SW_AUGUST.CASE_AttestationGate_thr_Impl_Bridge

B hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge__eq(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge this, hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->trusted_ids, (art_Port_45E54D) &other->trusted_ids)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AutomationRequest_in, (art_Port_45E54D) &other->AutomationRequest_in)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AutomationRequest_out, (art_Port_45E54D) &other->AutomationRequest_out)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->OperatingRegion_in, (art_Port_45E54D) &other->OperatingRegion_in)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->OperatingRegion_out, (art_Port_45E54D) &other->OperatingRegion_out)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->LineSearchTask_in, (art_Port_45E54D) &other->LineSearchTask_in)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->LineSearchTask_out, (art_Port_45E54D) &other->LineSearchTask_out)) return F;
  return T;
}

B hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge__ne(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge this, hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge other);

void hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_string_(STACK_FRAME String result, hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.CASE_AttestationGate_thr_Impl_Bridge", "string", 0);
  String_string_(SF result, string("CASE_AttestationGate_thr_Impl_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->trusted_ids);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AutomationRequest_in);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AutomationRequest_out);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->OperatingRegion_in);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->OperatingRegion_out);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->LineSearchTask_in);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->LineSearchTask_out);
  String_string_(SF result, string(")"));
}

void hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_cprint(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("CASE_AttestationGate_thr_Impl_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->trusted_ids, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AutomationRequest_in, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AutomationRequest_out, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->OperatingRegion_in, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->OperatingRegion_out, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->LineSearchTask_in, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->LineSearchTask_out, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge__is(STACK_FRAME void* this);
hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge__as(STACK_FRAME void *this);

void hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_apply(STACK_FRAME hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D trusted_ids, art_Port_45E54D AutomationRequest_in, art_Port_45E54D AutomationRequest_out, art_Port_45E54D OperatingRegion_in, art_Port_45E54D OperatingRegion_out, art_Port_45E54D LineSearchTask_in, art_Port_45E54D LineSearchTask_out) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.CASE_AttestationGate_thr_Impl_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->trusted_ids, trusted_ids, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AutomationRequest_in, AutomationRequest_in, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AutomationRequest_out, AutomationRequest_out, sizeof(struct art_Port_45E54D));
  Type_assign(&this->OperatingRegion_in, OperatingRegion_in, sizeof(struct art_Port_45E54D));
  Type_assign(&this->OperatingRegion_out, OperatingRegion_out, sizeof(struct art_Port_45E54D));
  Type_assign(&this->LineSearchTask_in, LineSearchTask_in, sizeof(struct art_Port_45E54D));
  Type_assign(&this->LineSearchTask_out, LineSearchTask_out, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(26);
    STATIC_ASSERT(7 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 7;
    IS_820232_up(&t_1, 0, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_trusted_ids_(this));
    IS_820232_up(&t_1, 1, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_in_(this));
    IS_820232_up(&t_1, 2, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_out_(this));
    IS_820232_up(&t_1, 3, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_in_(this));
    IS_820232_up(&t_1, 4, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_out_(this));
    IS_820232_up(&t_1, 5, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_in_(this));
    IS_820232_up(&t_1, 6, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_out_(this));
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 1;
    IS_820232_up(&t_2, 0, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_trusted_ids_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(3 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 3;
    IS_820232_up(&t_4, 0, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_in_(this));
    IS_820232_up(&t_4, 1, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_in_(this));
    IS_820232_up(&t_4, 2, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_in_(this));
    STATIC_ASSERT(3 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 3;
    IS_820232_up(&t_5, 0, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_out_(this));
    IS_820232_up(&t_5, 1, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_out_(this));
    IS_820232_up(&t_5, 2, (art_UPort) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_out_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(49);
    DeclNewhamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api(t_6);
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api_apply(SF &t_6, hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_trusted_ids_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_in_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_out_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_in_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_out_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_in_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_out_(this)));
    Type_assign(&this->api, (&t_6), sizeof(struct hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api));
  }
  {
    sfUpdateLoc(61);
    DeclNewhamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl(t_8);
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl_apply(SF &t_8, (hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_api_(this));
    DeclNewhamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints(t_7);
    hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_apply(SF &t_7, hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_trusted_ids_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_in_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_out_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_in_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_out_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_in_(this)), art_Port_45E54D_id_(hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_out_(this)), (Option_9AF35E) hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_dispatchTriggers_(this), (hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Impl) (&t_8));
    Type_assign(&this->entryPoints, (&t_7), sizeof(struct hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints));
  }
}