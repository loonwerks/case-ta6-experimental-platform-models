#include <all.h>

// hamr.Drivers.UARTDriver_Impl_Bridge.Api

B hamr_Drivers_UARTDriver_Impl_Bridge_Api__eq(hamr_Drivers_UARTDriver_Impl_Bridge_Api this, hamr_Drivers_UARTDriver_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->recv_data_Id, other->recv_data_Id)) return F;
  if (Z__ne(this->MissionCommand_Id, other->MissionCommand_Id)) return F;
  if (Z__ne(this->send_data_Id, other->send_data_Id)) return F;
  if (Z__ne(this->AirVehicleState_WPM_Id, other->AirVehicleState_WPM_Id)) return F;
  if (Z__ne(this->AirVehicleState_UXAS_Id, other->AirVehicleState_UXAS_Id)) return F;
  return T;
}

B hamr_Drivers_UARTDriver_Impl_Bridge_Api__ne(hamr_Drivers_UARTDriver_Impl_Bridge_Api this, hamr_Drivers_UARTDriver_Impl_Bridge_Api other);

void hamr_Drivers_UARTDriver_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_Drivers_UARTDriver_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->recv_data_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->send_data_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_WPM_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_UXAS_Id);
  String_string_(SF result, string(")"));
}

void hamr_Drivers_UARTDriver_Impl_Bridge_Api_cprint(hamr_Drivers_UARTDriver_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_data_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->send_data_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_WPM_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_UXAS_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_Drivers_UARTDriver_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_Drivers_UARTDriver_Impl_Bridge_Api hamr_Drivers_UARTDriver_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_Drivers_UARTDriver_Impl_Bridge_Api_apply(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, Z id, Z recv_data_Id, Z MissionCommand_Id, Z send_data_Id, Z AirVehicleState_WPM_Id, Z AirVehicleState_UXAS_Id) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->recv_data_Id = recv_data_Id;
  this->MissionCommand_Id = MissionCommand_Id;
  this->send_data_Id = send_data_Id;
  this->AirVehicleState_WPM_Id = AirVehicleState_WPM_Id;
  this->AirVehicleState_UXAS_Id = AirVehicleState_UXAS_Id;
}

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(115);
  {
    art_Art_logInfo(SF hamr_Drivers_UARTDriver_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(119);
  {
    art_Art_logDebug(SF hamr_Drivers_UARTDriver_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_logError_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(123);
  {
    art_Art_logError(SF hamr_Drivers_UARTDriver_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

static inline B hamr_Drivers_UARTDriver_Impl_Bridge_Api_getrecv_data_extract_81_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_Drivers_UARTDriver_Impl_Bridge_Api this, IS_C4F575 *_v_81_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_81_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_Drivers_UARTDriver_Impl_Bridge_Api_getrecv_data_extract_82_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_Drivers_UARTDriver_Impl_Bridge_Api this, art_DataContent *_v_82_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_82_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_Drivers_UARTDriver_Impl_Bridge_Api_getrecv_data_extract_85_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_Drivers_UARTDriver_Impl_Bridge_Api this) {
  return T;
}

void hamr_Drivers_UARTDriver_Impl_Bridge_Api_getrecv_data_(STACK_FRAME Option_30119F result, hamr_Drivers_UARTDriver_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_Bridge.Api", "getrecv_data", 0);

  sfUpdateLoc(80);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_Drivers_UARTDriver_Impl_Bridge_Api_recv_data_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_80_49 = F;
  if (!match_80_49) {
    IS_C4F575 v_81_43;
    match_80_49 = hamr_Drivers_UARTDriver_Impl_Bridge_Api_getrecv_data_extract_81_14_8E9F45(SF t_0, this, &v_81_43);
    if (match_80_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_81_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_80_49) {
    art_DataContent v_82_19;
    match_80_49 = hamr_Drivers_UARTDriver_Impl_Bridge_Api_getrecv_data_extract_82_14_8E9F45(SF t_0, this, &v_82_19);
    if (match_80_49) {

      sfUpdateLoc(83);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port recv_data.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_82_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_Drivers_UARTDriver_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_80_49) {
    match_80_49 = hamr_Drivers_UARTDriver_Impl_Bridge_Api_getrecv_data_extract_85_14_8E9F45(SF t_0, this);
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

static inline B hamr_Drivers_UARTDriver_Impl_Bridge_Api_getMissionCommand_extract_92_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_Drivers_UARTDriver_Impl_Bridge_Api this, IS_C4F575 *_v_92_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_92_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_Drivers_UARTDriver_Impl_Bridge_Api_getMissionCommand_extract_93_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_Drivers_UARTDriver_Impl_Bridge_Api this, art_DataContent *_v_93_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_93_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_Drivers_UARTDriver_Impl_Bridge_Api_getMissionCommand_extract_96_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_Drivers_UARTDriver_Impl_Bridge_Api this) {
  return T;
}

void hamr_Drivers_UARTDriver_Impl_Bridge_Api_getMissionCommand_(STACK_FRAME Option_30119F result, hamr_Drivers_UARTDriver_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_Bridge.Api", "getMissionCommand", 0);

  sfUpdateLoc(91);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_Drivers_UARTDriver_Impl_Bridge_Api_MissionCommand_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_91_49 = F;
  if (!match_91_49) {
    IS_C4F575 v_92_43;
    match_91_49 = hamr_Drivers_UARTDriver_Impl_Bridge_Api_getMissionCommand_extract_92_14_8E9F45(SF t_0, this, &v_92_43);
    if (match_91_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_92_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_91_49) {
    art_DataContent v_93_19;
    match_91_49 = hamr_Drivers_UARTDriver_Impl_Bridge_Api_getMissionCommand_extract_93_14_8E9F45(SF t_0, this, &v_93_19);
    if (match_91_49) {

      sfUpdateLoc(94);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port MissionCommand.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_93_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_Drivers_UARTDriver_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_91_49) {
    match_91_49 = hamr_Drivers_UARTDriver_Impl_Bridge_Api_getMissionCommand_extract_96_14_8E9F45(SF t_0, this);
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

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_sendsend_data_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_Bridge.Api", "sendsend_data", 0);

  sfUpdateLoc(102);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_Drivers_UARTDriver_Impl_Bridge_Api_send_data_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_sendAirVehicleState_WPM_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_Bridge.Api", "sendAirVehicleState_WPM", 0);

  sfUpdateLoc(106);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_Drivers_UARTDriver_Impl_Bridge_Api_AirVehicleState_WPM_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_sendAirVehicleState_UXAS_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_Bridge.Api", "sendAirVehicleState_UXAS", 0);

  sfUpdateLoc(110);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_Drivers_UARTDriver_Impl_Bridge_Api_AirVehicleState_UXAS_Id_(this), (art_DataContent) (&t_0));
  }
}