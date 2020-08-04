#include <all.h>

// hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api

B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api__eq(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->trusted_ids_Id, other->trusted_ids_Id)) return F;
  if (Z__ne(this->AutomationRequest_in_Id, other->AutomationRequest_in_Id)) return F;
  if (Z__ne(this->AutomationRequest_out_Id, other->AutomationRequest_out_Id)) return F;
  if (Z__ne(this->OperatingRegion_in_Id, other->OperatingRegion_in_Id)) return F;
  if (Z__ne(this->OperatingRegion_out_Id, other->OperatingRegion_out_Id)) return F;
  if (Z__ne(this->LineSearchTask_in_Id, other->LineSearchTask_in_Id)) return F;
  if (Z__ne(this->LineSearchTask_out_Id, other->LineSearchTask_out_Id)) return F;
  return T;
}

B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api__ne(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api other);

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->trusted_ids_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_out_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_out_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_out_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_cprint(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->trusted_ids_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_out_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_out_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, Z id, Z trusted_ids_Id, Z AutomationRequest_in_Id, Z AutomationRequest_out_Id, Z OperatingRegion_in_Id, Z OperatingRegion_out_Id, Z LineSearchTask_in_Id, Z LineSearchTask_out_Id) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->trusted_ids_Id = trusted_ids_Id;
  this->AutomationRequest_in_Id = AutomationRequest_in_Id;
  this->AutomationRequest_out_Id = AutomationRequest_out_Id;
  this->OperatingRegion_in_Id = OperatingRegion_in_Id;
  this->OperatingRegion_out_Id = OperatingRegion_out_Id;
  this->LineSearchTask_in_Id = LineSearchTask_in_Id;
  this->LineSearchTask_out_Id = LineSearchTask_out_Id;
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(147);
  {
    art_Art_logInfo(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(151);
  {
    art_Art_logDebug(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(155);
  {
    art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_137_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 *_v_137_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_137_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_138_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, art_DataContent *_v_138_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_138_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_141_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "gettrusted_ids", 0);

  sfUpdateLoc(136);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_trusted_ids_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_136_49 = F;
  if (!match_136_49) {
    IS_C4F575 v_137_43;
    match_136_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_137_14_8E9F45(SF t_0, this, &v_137_43);
    if (match_136_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_137_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_136_49) {
    art_DataContent v_138_19;
    match_136_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_138_14_8E9F45(SF t_0, this, &v_138_19);
    if (match_136_49) {

      sfUpdateLoc(139);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port trusted_ids.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_138_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_136_49) {
    match_136_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_141_14_8E9F45(SF t_0, this);
    if (match_136_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_136_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_92_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 *_v_92_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_92_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_93_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, art_DataContent *_v_93_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_93_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_96_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "getAutomationRequest_in", 0);

  sfUpdateLoc(91);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_AutomationRequest_in_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_91_49 = F;
  if (!match_91_49) {
    IS_C4F575 v_92_43;
    match_91_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_92_14_8E9F45(SF t_0, this, &v_92_43);
    if (match_91_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_92_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_91_49) {
    art_DataContent v_93_19;
    match_91_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_93_14_8E9F45(SF t_0, this, &v_93_19);
    if (match_91_49) {

      sfUpdateLoc(94);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AutomationRequest_in.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_93_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_91_49) {
    match_91_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_96_14_8E9F45(SF t_0, this);
    if (match_91_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_91_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_sendAutomationRequest_out_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "sendAutomationRequest_out", 0);

  sfUpdateLoc(102);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_AutomationRequest_out_Id_(this), (art_DataContent) (&t_0));
  }
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_107_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 *_v_107_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_107_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_108_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, art_DataContent *_v_108_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_108_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_111_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "getOperatingRegion_in", 0);

  sfUpdateLoc(106);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_OperatingRegion_in_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_106_49 = F;
  if (!match_106_49) {
    IS_C4F575 v_107_43;
    match_106_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_107_14_8E9F45(SF t_0, this, &v_107_43);
    if (match_106_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_107_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_106_49) {
    art_DataContent v_108_19;
    match_106_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_108_14_8E9F45(SF t_0, this, &v_108_19);
    if (match_106_49) {

      sfUpdateLoc(109);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port OperatingRegion_in.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_108_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_106_49) {
    match_106_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_111_14_8E9F45(SF t_0, this);
    if (match_106_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_106_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_sendOperatingRegion_out_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "sendOperatingRegion_out", 0);

  sfUpdateLoc(117);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_OperatingRegion_out_Id_(this), (art_DataContent) (&t_0));
  }
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_122_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 *_v_122_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_122_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_123_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, art_DataContent *_v_123_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_123_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_126_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "getLineSearchTask_in", 0);

  sfUpdateLoc(121);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_LineSearchTask_in_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_121_49 = F;
  if (!match_121_49) {
    IS_C4F575 v_122_43;
    match_121_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_122_14_8E9F45(SF t_0, this, &v_122_43);
    if (match_121_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_122_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_121_49) {
    art_DataContent v_123_19;
    match_121_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_123_14_8E9F45(SF t_0, this, &v_123_19);
    if (match_121_49) {

      sfUpdateLoc(124);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port LineSearchTask_in.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_123_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_121_49) {
    match_121_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_126_14_8E9F45(SF t_0, this);
    if (match_121_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_121_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_sendLineSearchTask_out_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "sendLineSearchTask_out", 0);

  sfUpdateLoc(132);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_LineSearchTask_out_Id_(this), (art_DataContent) (&t_0));
  }
}