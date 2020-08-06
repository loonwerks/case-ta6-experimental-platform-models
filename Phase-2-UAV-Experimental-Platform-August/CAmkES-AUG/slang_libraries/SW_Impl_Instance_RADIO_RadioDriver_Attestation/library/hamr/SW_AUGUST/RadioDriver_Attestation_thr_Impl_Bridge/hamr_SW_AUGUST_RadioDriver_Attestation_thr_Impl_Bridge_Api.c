#include <all.h>

// hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api

B hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api__eq(hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->trusted_ids_Id, other->trusted_ids_Id)) return F;
  if (Z__ne(this->recv_data_Id, other->recv_data_Id)) return F;
  if (Z__ne(this->send_data_Id, other->send_data_Id)) return F;
  if (Z__ne(this->AutomationRequest_Id, other->AutomationRequest_Id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  if (Z__ne(this->LineSearchTask_Id, other->LineSearchTask_Id)) return F;
  return T;
}

B hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api__ne(hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api other);

void hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
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
  String_string_(SF result, string(")"));
}

void hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_cprint(hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
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
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, Z id, Z trusted_ids_Id, Z recv_data_Id, Z send_data_Id, Z AutomationRequest_Id, Z OperatingRegion_Id, Z LineSearchTask_Id) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->trusted_ids_Id = trusted_ids_Id;
  this->recv_data_Id = recv_data_Id;
  this->send_data_Id = send_data_Id;
  this->AutomationRequest_Id = AutomationRequest_Id;
  this->OperatingRegion_Id = OperatingRegion_Id;
  this->LineSearchTask_Id = LineSearchTask_Id;
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(116);
  {
    art_Art_logInfo(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(120);
  {
    art_Art_logDebug(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(124);
  {
    art_Art_logError(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_settrusted_ids_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api", "settrusted_ids", 0);

  sfUpdateLoc(112);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_trusted_ids_Id_(this), (art_DataContent) (&t_0));
  }
}

static inline B hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_getrecv_data_extract_86_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, IS_C4F575 *_v_86_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_86_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_getrecv_data_extract_87_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, art_DataContent *_v_87_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_87_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_getrecv_data_extract_90_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_getrecv_data_(STACK_FRAME Option_30119F result, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api", "getrecv_data", 0);

  sfUpdateLoc(85);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_recv_data_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_85_49 = F;
  if (!match_85_49) {
    IS_C4F575 v_86_43;
    match_85_49 = hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_getrecv_data_extract_86_14_8E9F45(SF t_0, this, &v_86_43);
    if (match_85_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_86_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_85_49) {
    art_DataContent v_87_19;
    match_85_49 = hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_getrecv_data_extract_87_14_8E9F45(SF t_0, this, &v_87_19);
    if (match_85_49) {

      sfUpdateLoc(88);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port recv_data.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_87_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_85_49) {
    match_85_49 = hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_getrecv_data_extract_90_14_8E9F45(SF t_0, this);
    if (match_85_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_85_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendsend_data_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api", "sendsend_data", 0);

  sfUpdateLoc(96);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_send_data_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendAutomationRequest_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api", "sendAutomationRequest", 0);

  sfUpdateLoc(100);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_AutomationRequest_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendOperatingRegion_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api", "sendOperatingRegion", 0);

  sfUpdateLoc(104);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_OperatingRegion_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendLineSearchTask_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Bridge.Api", "sendLineSearchTask", 0);

  sfUpdateLoc(108);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_LineSearchTask_Id_(this), (art_DataContent) (&t_0));
  }
}