#include <all.h>

// hamr.SW_OR.CASE_AttestationGate_thr_Impl_Bridge.Api

B hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api__eq(hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api this, hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->OperatingRegion_out_Id, other->OperatingRegion_out_Id)) return F;
  return T;
}

B hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api__ne(hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api this, hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api other);

void hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW_OR.CASE_AttestationGate_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_out_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_cprint(hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api this, Z id, Z OperatingRegion_out_Id) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW_OR.CASE_AttestationGate_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->OperatingRegion_out_Id = OperatingRegion_out_Id;
}

Unit hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW_OR.CASE_AttestationGate_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(62);
  {
    art_Art_logInfo(SF hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW_OR.CASE_AttestationGate_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(66);
  {
    art_Art_logDebug(SF hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW_OR.CASE_AttestationGate_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(70);
  {
    art_Art_logError(SF hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_sendOperatingRegion_out_(STACK_FRAME hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW_OR.CASE_AttestationGate_thr_Impl_Bridge.Api", "sendOperatingRegion_out", 0);

  sfUpdateLoc(57);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_Api_OperatingRegion_out_Id_(this), (art_DataContent) (&t_0));
  }
}