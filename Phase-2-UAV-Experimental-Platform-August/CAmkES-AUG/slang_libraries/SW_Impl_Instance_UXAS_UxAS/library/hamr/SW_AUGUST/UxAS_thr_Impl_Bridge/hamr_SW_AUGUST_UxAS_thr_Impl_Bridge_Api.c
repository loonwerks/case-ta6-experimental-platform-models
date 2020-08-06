#include <all.h>

// hamr.SW_AUGUST.UxAS_thr_Impl_Bridge.Api

B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api__eq(hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->AutomationRequest_Id, other->AutomationRequest_Id)) return F;
  if (Z__ne(this->AirVehicleState_Id, other->AirVehicleState_Id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  if (Z__ne(this->LineSearchTask_Id, other->LineSearchTask_Id)) return F;
  if (Z__ne(this->AutomationResponse_Id, other->AutomationResponse_Id)) return F;
  return T;
}

B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api__ne(hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api other);

void hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.UxAS_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_cprint(hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, Z id, Z AutomationRequest_Id, Z AirVehicleState_Id, Z OperatingRegion_Id, Z LineSearchTask_Id, Z AutomationResponse_Id) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.UxAS_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->AutomationRequest_Id = AutomationRequest_Id;
  this->AirVehicleState_Id = AirVehicleState_Id;
  this->OperatingRegion_Id = OperatingRegion_Id;
  this->LineSearchTask_Id = LineSearchTask_Id;
  this->AutomationResponse_Id = AutomationResponse_Id;
}

Unit hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.UxAS_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(129);
  {
    art_Art_logInfo(SF hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.UxAS_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(133);
  {
    art_Art_logDebug(SF hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.UxAS_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(137);
  {
    art_Art_logError(SF hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_81_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 *_v_81_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_81_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_82_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, art_DataContent *_v_82_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_82_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_85_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_(STACK_FRAME Option_30119F result, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.UxAS_thr_Impl_Bridge.Api", "getAutomationRequest", 0);

  sfUpdateLoc(80);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_AutomationRequest_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_80_49 = F;
  if (!match_80_49) {
    IS_C4F575 v_81_43;
    match_80_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_81_14_8E9F45(SF t_0, this, &v_81_43);
    if (match_80_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_81_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_80_49) {
    art_DataContent v_82_19;
    match_80_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_82_14_8E9F45(SF t_0, this, &v_82_19);
    if (match_80_49) {

      sfUpdateLoc(83);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AutomationRequest.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_82_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_80_49) {
    match_80_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_85_14_8E9F45(SF t_0, this);
    if (match_80_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_80_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_92_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 *_v_92_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_92_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_93_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, art_DataContent *_v_93_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_93_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_96_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_(STACK_FRAME Option_30119F result, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.UxAS_thr_Impl_Bridge.Api", "getAirVehicleState", 0);

  sfUpdateLoc(91);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_AirVehicleState_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_91_49 = F;
  if (!match_91_49) {
    IS_C4F575 v_92_43;
    match_91_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_92_14_8E9F45(SF t_0, this, &v_92_43);
    if (match_91_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_92_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_91_49) {
    art_DataContent v_93_19;
    match_91_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_93_14_8E9F45(SF t_0, this, &v_93_19);
    if (match_91_49) {

      sfUpdateLoc(94);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AirVehicleState.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_93_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_91_49) {
    match_91_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_96_14_8E9F45(SF t_0, this);
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

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_103_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 *_v_103_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_103_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_104_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, art_DataContent *_v_104_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_104_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_107_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_(STACK_FRAME Option_30119F result, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.UxAS_thr_Impl_Bridge.Api", "getOperatingRegion", 0);

  sfUpdateLoc(102);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_OperatingRegion_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_102_49 = F;
  if (!match_102_49) {
    IS_C4F575 v_103_43;
    match_102_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_103_14_8E9F45(SF t_0, this, &v_103_43);
    if (match_102_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_103_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_102_49) {
    art_DataContent v_104_19;
    match_102_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_104_14_8E9F45(SF t_0, this, &v_104_19);
    if (match_102_49) {

      sfUpdateLoc(105);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port OperatingRegion.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_104_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_102_49) {
    match_102_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_107_14_8E9F45(SF t_0, this);
    if (match_102_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_102_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_114_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 *_v_114_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_114_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_115_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, art_DataContent *_v_115_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_115_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_118_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_(STACK_FRAME Option_30119F result, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.UxAS_thr_Impl_Bridge.Api", "getLineSearchTask", 0);

  sfUpdateLoc(113);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_LineSearchTask_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_113_49 = F;
  if (!match_113_49) {
    IS_C4F575 v_114_43;
    match_113_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_114_14_8E9F45(SF t_0, this, &v_114_43);
    if (match_113_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_114_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_113_49) {
    art_DataContent v_115_19;
    match_113_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_115_14_8E9F45(SF t_0, this, &v_115_19);
    if (match_113_49) {

      sfUpdateLoc(116);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port LineSearchTask.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_115_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_113_49) {
    match_113_49 = hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_118_14_8E9F45(SF t_0, this);
    if (match_113_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_113_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

Unit hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_sendAutomationResponse_(STACK_FRAME hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_AUGUST.UxAS_thr_Impl_Bridge.Api", "sendAutomationResponse", 0);

  sfUpdateLoc(124);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_AUGUST_UxAS_thr_Impl_Bridge_Api_AutomationResponse_Id_(this), (art_DataContent) (&t_0));
  }
}