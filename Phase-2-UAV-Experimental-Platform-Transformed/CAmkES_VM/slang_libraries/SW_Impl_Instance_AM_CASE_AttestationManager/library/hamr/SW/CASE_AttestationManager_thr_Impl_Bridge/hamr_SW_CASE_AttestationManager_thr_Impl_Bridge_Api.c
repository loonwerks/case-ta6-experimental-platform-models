#include <all.h>

// hamr.SW.CASE_AttestationManager_thr_Impl_Bridge.Api

B hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api__eq(hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->trusted_ids_Id, other->trusted_ids_Id)) return F;
  if (Z__ne(this->attestation_request_Id, other->attestation_request_Id)) return F;
  if (Z__ne(this->attestation_response_Id, other->attestation_response_Id)) return F;
  return T;
}

B hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api__ne(hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api other);

void hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationManager_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->trusted_ids_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->attestation_request_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->attestation_response_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_cprint(hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->trusted_ids_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->attestation_request_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->attestation_response_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this, Z id, Z trusted_ids_Id, Z attestation_request_Id, Z attestation_response_Id) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationManager_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->trusted_ids_Id = trusted_ids_Id;
  this->attestation_request_Id = attestation_request_Id;
  this->attestation_response_Id = attestation_response_Id;
}

Unit hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationManager_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(86);
  {
    art_Art_logInfo(SF hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationManager_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(90);
  {
    art_Art_logDebug(SF hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationManager_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(94);
  {
    art_Art_logError(SF hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_settrusted_ids_(STACK_FRAME hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationManager_thr_Impl_Bridge.Api", "settrusted_ids", 0);

  sfUpdateLoc(82);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_trusted_ids_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_sendattestation_request_(STACK_FRAME hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationManager_thr_Impl_Bridge.Api", "sendattestation_request", 0);

  sfUpdateLoc(67);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_attestation_request_Id_(this), (art_DataContent) (&t_0));
  }
}

static inline B hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_getattestation_response_extract_72_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this, IS_C4F575 *_v_72_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_72_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_getattestation_response_extract_73_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this, art_DataContent *_v_73_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_73_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_getattestation_response_extract_76_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_getattestation_response_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationManager_thr_Impl_Bridge.Api", "getattestation_response", 0);

  sfUpdateLoc(71);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_attestation_response_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_71_49 = F;
  if (!match_71_49) {
    IS_C4F575 v_72_43;
    match_71_49 = hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_getattestation_response_extract_72_14_8E9F45(SF t_0, this, &v_72_43);
    if (match_71_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_72_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_71_49) {
    art_DataContent v_73_19;
    match_71_49 = hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_getattestation_response_extract_73_14_8E9F45(SF t_0, this, &v_73_19);
    if (match_71_49) {

      sfUpdateLoc(74);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port attestation_response.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_73_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_71_49) {
    match_71_49 = hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_getattestation_response_extract_76_14_8E9F45(SF t_0, this);
    if (match_71_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_71_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}