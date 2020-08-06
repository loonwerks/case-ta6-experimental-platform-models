#include <all.h>

// hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints

B hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints__eq(hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints other) {
  if (Z__ne(this->RadioDriver_Attestation_thr_Impl_BridgeId, other->RadioDriver_Attestation_thr_Impl_BridgeId)) return F;
  if (Z__ne(this->trusted_ids_Id, other->trusted_ids_Id)) return F;
  if (Z__ne(this->recv_data_Id, other->recv_data_Id)) return F;
  if (Z__ne(this->send_data_Id, other->send_data_Id)) return F;
  if (Z__ne(this->AutomationRequest_Id, other->AutomationRequest_Id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  if (Z__ne(this->LineSearchTask_Id, other->LineSearchTask_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl__ne((hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl) &this->component, (hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl) &other->component)) return F;
  return T;
}

B hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints__ne(hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints other);

void hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_string_(STACK_FRAME String result, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->RadioDriver_Attestation_thr_Impl_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->trusted_ids_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->recv_data_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->send_data_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_string_(SF result, (hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl) &this->component);
  String_string_(SF result, string(")"));
}

void hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_cprint(hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->RadioDriver_Attestation_thr_Impl_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->trusted_ids_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_data_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->send_data_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_cprint((hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints__is(STACK_FRAME void* this);
hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints__as(STACK_FRAME void *this);

void hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_apply(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this, Z RadioDriver_Attestation_thr_Impl_BridgeId, Z trusted_ids_Id, Z recv_data_Id, Z send_data_Id, Z AutomationRequest_Id, Z OperatingRegion_Id, Z LineSearchTask_Id, Option_9AF35E dispatchTriggers, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl component) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints", "apply", 0);
  this->RadioDriver_Attestation_thr_Impl_BridgeId = RadioDriver_Attestation_thr_Impl_BridgeId;
  this->trusted_ids_Id = trusted_ids_Id;
  this->recv_data_Id = recv_data_Id;
  this->send_data_Id = send_data_Id;
  this->AutomationRequest_Id = AutomationRequest_Id;
  this->OperatingRegion_Id = OperatingRegion_Id;
  this->LineSearchTask_Id = LineSearchTask_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->component, component, sizeof(struct hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl));
  {
    sfUpdateLoc(142);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(144);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int8_t) 1;
    IS_82ABD8_up(&t_1, 0, (Z) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_recv_data_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(146);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int8_t) 1;
    IS_82ABD8_up(&t_2, 0, (Z) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_trusted_ids_Id_(this));
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(148);
    STATIC_ASSERT(4 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int8_t) 4;
    IS_82ABD8_up(&t_3, 0, (Z) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_send_data_Id_(this));
    IS_82ABD8_up(&t_3, 1, (Z) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_AutomationRequest_Id_(this));
    IS_82ABD8_up(&t_3, 2, (Z) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_OperatingRegion_Id_(this));
    IS_82ABD8_up(&t_3, 3, (Z) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_LineSearchTask_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(179);
  {
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_initialise_(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_component_(this));
  }

  sfUpdateLoc(180);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_compute_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(154);
  {
    art_Art_receiveInput(SF (IS_82ABD8) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(155);
  {
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_timeTriggered_(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_component_(this));
  }

  sfUpdateLoc(156);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(175);
  {
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_finalise_(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_component_(this));
  }
}