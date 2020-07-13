#include <all.h>

// hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.EntryPoints

B hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints__eq(hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints this, hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints other) {
  if (Z__ne(this->CASE_Monitor_Geo_thr_Impl_BridgeId, other->CASE_Monitor_Geo_thr_Impl_BridgeId)) return F;
  if (Z__ne(this->keep_in_zones_Id, other->keep_in_zones_Id)) return F;
  if (Z__ne(this->keep_out_zones_Id, other->keep_out_zones_Id)) return F;
  if (Z__ne(this->observed_Id, other->observed_Id)) return F;
  if (Z__ne(this->output_Id, other->output_Id)) return F;
  if (Z__ne(this->alert_Id, other->alert_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl__ne((hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl) &this->component, (hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl) &other->component)) return F;
  return T;
}

B hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints__ne(hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints this, hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints other);

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_string_(STACK_FRAME String result, hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->CASE_Monitor_Geo_thr_Impl_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->keep_in_zones_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->keep_out_zones_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->observed_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->output_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->alert_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl_string_(SF result, (hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl) &this->component);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_cprint(hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->CASE_Monitor_Geo_thr_Impl_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->keep_in_zones_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->keep_out_zones_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->observed_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->output_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->alert_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl_cprint((hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints__is(STACK_FRAME void* this);
hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints__as(STACK_FRAME void *this);

void hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_apply(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints this, Z CASE_Monitor_Geo_thr_Impl_BridgeId, Z keep_in_zones_Id, Z keep_out_zones_Id, Z observed_Id, Z output_Id, Z alert_Id, Option_9AF35E dispatchTriggers, hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl component) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.EntryPoints", "apply", 0);
  this->CASE_Monitor_Geo_thr_Impl_BridgeId = CASE_Monitor_Geo_thr_Impl_BridgeId;
  this->keep_in_zones_Id = keep_in_zones_Id;
  this->keep_out_zones_Id = keep_out_zones_Id;
  this->observed_Id = observed_Id;
  this->output_Id = output_Id;
  this->alert_Id = alert_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->component, component, sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl));
  {
    sfUpdateLoc(145);
    STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int16_t) 2;
    IS_82ABD8_up(&t_0, 0, (Z) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_keep_in_zones_Id_(this));
    IS_82ABD8_up(&t_0, 1, (Z) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_keep_out_zones_Id_(this));
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(148);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int16_t) 1;
    IS_82ABD8_up(&t_1, 0, (Z) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_observed_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(150);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int16_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(152);
    STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int16_t) 2;
    IS_82ABD8_up(&t_3, 0, (Z) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_output_Id_(this));
    IS_82ABD8_up(&t_3, 1, (Z) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_alert_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(181);
  {
    hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl_initialise_(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_component_(this));
  }

  sfUpdateLoc(182);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_compute_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(156);
  {
    art_Art_receiveInput(SF (IS_82ABD8) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(157);
  {
    hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl_timeTriggered_(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_component_(this));
  }

  sfUpdateLoc(158);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(177);
  {
    hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl_finalise_(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints_component_(this));
  }
}