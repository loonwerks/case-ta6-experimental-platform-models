#include <all.h>

// hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api

B hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api__eq(hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->filter_in_Id, other->filter_in_Id)) return F;
  if (Z__ne(this->filter_out_Id, other->filter_out_Id)) return F;
  return T;
}

B hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api__ne(hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api other);

void hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Bridge.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->filter_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->filter_out_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_cprint(hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->filter_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->filter_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, Z id, Z filter_in_Id, Z filter_out_Id) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Bridge.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->filter_in_Id = filter_in_Id;
  this->filter_out_Id = filter_out_Id;
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Bridge.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(78);
  {
    art_Art_logInfo(SF hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Bridge.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(82);
  {
    art_Art_logDebug(SF hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Bridge.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(86);
  {
    art_Art_logError(SF hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

static inline B hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_getfilter_in_extract_63_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, IS_C4F575 *_v_63_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_63_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_getfilter_in_extract_64_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, art_DataContent *_v_64_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_64_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_getfilter_in_extract_67_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_getfilter_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Bridge.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api", "getfilter_in", 0);

  sfUpdateLoc(62);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_filter_in_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_62_49 = F;
  if (!match_62_49) {
    IS_C4F575 v_63_43;
    match_62_49 = hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_getfilter_in_extract_63_14_8E9F45(SF t_0, this, &v_63_43);
    if (match_62_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_63_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_62_49) {
    art_DataContent v_64_19;
    match_62_49 = hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_getfilter_in_extract_64_14_8E9F45(SF t_0, this, &v_64_19);
    if (match_62_49) {

      sfUpdateLoc(65);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port filter_in.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_64_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_62_49) {
    match_62_49 = hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_getfilter_in_extract_67_14_8E9F45(SF t_0, this);
    if (match_62_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_62_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_sendfilter_out_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Bridge.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api", "sendfilter_out", 0);

  sfUpdateLoc(73);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_filter_out_Id_(this), (art_DataContent) (&t_0));
  }
}