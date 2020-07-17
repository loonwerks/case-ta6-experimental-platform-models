#include <all.h>

// hamr.SW_OR.UxAS_thr_Impl_Bridge.Api

B hamr_SW_OR_UxAS_thr_Impl_Bridge_Api__eq(hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this, hamr_SW_OR_UxAS_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  return T;
}

B hamr_SW_OR_UxAS_thr_Impl_Bridge_Api__ne(hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this, hamr_SW_OR_UxAS_thr_Impl_Bridge_Api other);

void hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_OR.UxAS_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_cprint(hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_OR_UxAS_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_OR_UxAS_thr_Impl_Bridge_Api hamr_SW_OR_UxAS_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this, Z id, Z OperatingRegion_Id) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_OR.UxAS_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->OperatingRegion_Id = OperatingRegion_Id;
}

Unit hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_OR.UxAS_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(69);
  {
    art_Art_logInfo(SF hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_OR.UxAS_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(73);
  {
    art_Art_logDebug(SF hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_OR.UxAS_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(77);
  {
    art_Art_logError(SF hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

static inline B hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_58_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 *_v_58_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_58_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_59_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this, art_DataContent *_v_59_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_59_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_62_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_(STACK_FRAME Option_30119F result, hamr_SW_OR_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW_OR.UxAS_thr_Impl_Bridge.Api", "getOperatingRegion", 0);

  sfUpdateLoc(57);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_OperatingRegion_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_57_49 = F;
  if (!match_57_49) {
    IS_C4F575 v_58_43;
    match_57_49 = hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_58_14_8E9F45(SF t_0, this, &v_58_43);
    if (match_57_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_58_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_57_49) {
    art_DataContent v_59_19;
    match_57_49 = hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_59_14_8E9F45(SF t_0, this, &v_59_19);
    if (match_57_49) {

      sfUpdateLoc(60);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port OperatingRegion.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_59_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_57_49) {
    match_57_49 = hamr_SW_OR_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_62_14_8E9F45(SF t_0, this);
    if (match_57_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_57_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}