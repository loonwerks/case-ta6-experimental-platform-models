#include <all.h>

// hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints

B hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints__eq(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this, hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints other) {
  if (Z__ne(this->RadioDriver_Attestation_thr_Impl_BridgeId, other->RadioDriver_Attestation_thr_Impl_BridgeId)) return F;
  if (Z__ne(this->recv_data_Id, other->recv_data_Id)) return F;
  if (Z__ne(this->send_data_Id, other->send_data_Id)) return F;
  if (Z__ne(this->AutomationRequest_Id, other->AutomationRequest_Id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  if (Z__ne(this->LineSearchTask_Id, other->LineSearchTask_Id)) return F;
  if (Z__ne(this->am_request_Id, other->am_request_Id)) return F;
  if (Z__ne(this->am_response_Id, other->am_response_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (hamr_SW_RadioDriver_Attestation_thr_Impl_Impl__ne((hamr_SW_RadioDriver_Attestation_thr_Impl_Impl) &this->component, (hamr_SW_RadioDriver_Attestation_thr_Impl_Impl) &other->component)) return F;
  return T;
}

B hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints__ne(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this, hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints other);

void hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_string_(STACK_FRAME String result, hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->RadioDriver_Attestation_thr_Impl_BridgeId);
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
  Z_string_(SF result, this->am_request_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->am_response_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_string_(SF result, (hamr_SW_RadioDriver_Attestation_thr_Impl_Impl) &this->component);
  String_string_(SF result, string(")"));
}

void hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_cprint(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->RadioDriver_Attestation_thr_Impl_BridgeId, isOut);
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
  Z_cprint(this->am_request_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->am_response_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_cprint((hamr_SW_RadioDriver_Attestation_thr_Impl_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints__is(STACK_FRAME void* this);
hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints__as(STACK_FRAME void *this);

void hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_apply(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this, Z RadioDriver_Attestation_thr_Impl_BridgeId, Z recv_data_Id, Z send_data_Id, Z AutomationRequest_Id, Z OperatingRegion_Id, Z LineSearchTask_Id, Z am_request_Id, Z am_response_Id, Option_9AF35E dispatchTriggers, hamr_SW_RadioDriver_Attestation_thr_Impl_Impl component) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints", "apply", 0);
  this->RadioDriver_Attestation_thr_Impl_BridgeId = RadioDriver_Attestation_thr_Impl_BridgeId;
  this->recv_data_Id = recv_data_Id;
  this->send_data_Id = send_data_Id;
  this->AutomationRequest_Id = AutomationRequest_Id;
  this->OperatingRegion_Id = OperatingRegion_Id;
  this->LineSearchTask_Id = LineSearchTask_Id;
  this->am_request_Id = am_request_Id;
  this->am_response_Id = am_response_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->component, component, sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_Impl));
  {
    sfUpdateLoc(162);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int16_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(164);
    STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int16_t) 2;
    IS_82ABD8_up(&t_1, 0, (Z) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_recv_data_Id_(this));
    IS_82ABD8_up(&t_1, 1, (Z) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_am_request_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(167);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int16_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(169);
    STATIC_ASSERT(5 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int16_t) 5;
    IS_82ABD8_up(&t_3, 0, (Z) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_send_data_Id_(this));
    IS_82ABD8_up(&t_3, 1, (Z) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_AutomationRequest_Id_(this));
    IS_82ABD8_up(&t_3, 2, (Z) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_OperatingRegion_Id_(this));
    IS_82ABD8_up(&t_3, 3, (Z) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_LineSearchTask_Id_(this));
    IS_82ABD8_up(&t_3, 4, (Z) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_am_response_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(201);
  {
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_initialise_(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_component_(this));
  }

  sfUpdateLoc(202);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_compute_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(176);
  {
    art_Art_receiveInput(SF (IS_82ABD8) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(177);
  {
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_timeTriggered_(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_component_(this));
  }

  sfUpdateLoc(178);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(197);
  {
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_finalise_(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints_component_(this));
  }
}