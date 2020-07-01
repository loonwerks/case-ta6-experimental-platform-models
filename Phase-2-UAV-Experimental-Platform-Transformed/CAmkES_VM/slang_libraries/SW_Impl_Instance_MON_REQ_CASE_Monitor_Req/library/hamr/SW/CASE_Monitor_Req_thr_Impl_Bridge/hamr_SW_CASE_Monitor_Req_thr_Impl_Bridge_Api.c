#include <all.h>

// hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api

B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api__eq(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->observed_Id, other->observed_Id)) return F;
  if (Z__ne(this->reference_1_Id, other->reference_1_Id)) return F;
  if (Z__ne(this->alert_Id, other->alert_Id)) return F;
  return T;
}

B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api__ne(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api other);

void hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->observed_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->reference_1_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->alert_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_cprint(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->observed_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->reference_1_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->alert_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, Z id, Z observed_Id, Z reference_1_Id, Z alert_Id) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->observed_Id = observed_Id;
  this->reference_1_Id = reference_1_Id;
  this->alert_Id = alert_Id;
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(95);
  {
    art_Art_logInfo(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(99);
  {
    art_Art_logDebug(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(103);
  {
    art_Art_logError(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_extract_69_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, IS_C4F575 *_v_69_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_69_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_extract_70_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, art_DataContent *_v_70_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_70_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_extract_73_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api", "getobserved", 0);

  sfUpdateLoc(68);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_observed_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_68_49 = F;
  if (!match_68_49) {
    IS_C4F575 v_69_43;
    match_68_49 = hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_extract_69_14_8E9F45(SF t_0, this, &v_69_43);
    if (match_68_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_69_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_68_49) {
    art_DataContent v_70_19;
    match_68_49 = hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_extract_70_14_8E9F45(SF t_0, this, &v_70_19);
    if (match_68_49) {

      sfUpdateLoc(71);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port observed.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_70_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_68_49) {
    match_68_49 = hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_extract_73_14_8E9F45(SF t_0, this);
    if (match_68_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_68_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_extract_80_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, IS_C4F575 *_v_80_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_80_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_extract_81_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, art_DataContent *_v_81_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_81_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_extract_84_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api", "getreference_1", 0);

  sfUpdateLoc(79);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_reference_1_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_79_49 = F;
  if (!match_79_49) {
    IS_C4F575 v_80_43;
    match_79_49 = hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_extract_80_14_8E9F45(SF t_0, this, &v_80_43);
    if (match_79_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_80_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_79_49) {
    art_DataContent v_81_19;
    match_79_49 = hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_extract_81_14_8E9F45(SF t_0, this, &v_81_19);
    if (match_79_49) {

      sfUpdateLoc(82);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port reference_1.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_81_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_79_49) {
    match_79_49 = hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_extract_84_14_8E9F45(SF t_0, this);
    if (match_79_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_79_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_sendalert_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api", "sendalert", 0);

  sfUpdateLoc(90);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_alert_Id_(this), (art_DataContent) (&t_0));
  }
}