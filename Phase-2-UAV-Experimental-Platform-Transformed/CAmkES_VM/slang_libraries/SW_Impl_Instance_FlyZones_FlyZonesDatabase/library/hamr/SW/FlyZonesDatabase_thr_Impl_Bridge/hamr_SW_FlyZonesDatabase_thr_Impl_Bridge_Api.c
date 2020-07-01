#include <all.h>

// hamr.SW.FlyZonesDatabase_thr_Impl_Bridge.Api

B hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api__eq(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api this, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->keep_in_zones_Id, other->keep_in_zones_Id)) return F;
  if (Z__ne(this->keep_out_zones_Id, other->keep_out_zones_Id)) return F;
  return T;
}

B hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api__ne(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api this, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api other);

void hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Bridge.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->keep_in_zones_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->keep_out_zones_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_cprint(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->keep_in_zones_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->keep_out_zones_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api this, Z id, Z keep_in_zones_Id, Z keep_out_zones_Id) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Bridge.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->keep_in_zones_Id = keep_in_zones_Id;
  this->keep_out_zones_Id = keep_out_zones_Id;
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Bridge.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(72);
  {
    art_Art_logInfo(SF hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Bridge.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(76);
  {
    art_Art_logDebug(SF hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Bridge.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(80);
  {
    art_Art_logError(SF hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_setkeep_in_zones_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Bridge.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Bridge.Api", "setkeep_in_zones", 0);

  sfUpdateLoc(64);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_keep_in_zones_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_setkeep_out_zones_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Bridge.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Bridge.Api", "setkeep_out_zones", 0);

  sfUpdateLoc(68);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_keep_out_zones_Id_(this), (art_DataContent) (&t_0));
  }
}