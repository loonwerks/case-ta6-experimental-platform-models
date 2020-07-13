#include <all.h>

// hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.Api

B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api__eq(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->AutomationResponse_Id, other->AutomationResponse_Id)) return F;
  if (Z__ne(this->AirVehicleState_Id, other->AirVehicleState_Id)) return F;
  if (Z__ne(this->MissionCommand_Id, other->MissionCommand_Id)) return F;
  if (Z__ne(this->ReturnHome_Id, other->ReturnHome_Id)) return F;
  return T;
}

B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api__ne(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api other);

void hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Bridge.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->ReturnHome_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_cprint(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->ReturnHome_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, Z id, Z AutomationResponse_Id, Z AirVehicleState_Id, Z MissionCommand_Id, Z ReturnHome_Id) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Bridge.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->AutomationResponse_Id = AutomationResponse_Id;
  this->AirVehicleState_Id = AirVehicleState_Id;
  this->MissionCommand_Id = MissionCommand_Id;
  this->ReturnHome_Id = ReturnHome_Id;
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Bridge.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(112);
  {
    art_Art_logInfo(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Bridge.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(116);
  {
    art_Art_logDebug(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Bridge.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(120);
  {
    art_Art_logError(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAutomationResponse_extract_75_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, IS_C4F575 *_v_75_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_75_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAutomationResponse_extract_76_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, art_DataContent *_v_76_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_76_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAutomationResponse_extract_79_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAutomationResponse_(STACK_FRAME Option_30119F result, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Bridge.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.Api", "getAutomationResponse", 0);

  sfUpdateLoc(74);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_AutomationResponse_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_74_49 = F;
  if (!match_74_49) {
    IS_C4F575 v_75_43;
    match_74_49 = hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAutomationResponse_extract_75_14_8E9F45(SF t_0, this, &v_75_43);
    if (match_74_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_75_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_74_49) {
    art_DataContent v_76_19;
    match_74_49 = hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAutomationResponse_extract_76_14_8E9F45(SF t_0, this, &v_76_19);
    if (match_74_49) {

      sfUpdateLoc(77);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AutomationResponse.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_76_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_74_49) {
    match_74_49 = hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAutomationResponse_extract_79_14_8E9F45(SF t_0, this);
    if (match_74_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_74_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAirVehicleState_extract_86_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, IS_C4F575 *_v_86_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_86_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAirVehicleState_extract_87_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, art_DataContent *_v_87_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_87_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAirVehicleState_extract_90_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAirVehicleState_(STACK_FRAME Option_30119F result, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Bridge.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.Api", "getAirVehicleState", 0);

  sfUpdateLoc(85);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_AirVehicleState_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_85_49 = F;
  if (!match_85_49) {
    IS_C4F575 v_86_43;
    match_85_49 = hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAirVehicleState_extract_86_14_8E9F45(SF t_0, this, &v_86_43);
    if (match_85_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_86_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_85_49) {
    art_DataContent v_87_19;
    match_85_49 = hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAirVehicleState_extract_87_14_8E9F45(SF t_0, this, &v_87_19);
    if (match_85_49) {

      sfUpdateLoc(88);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AirVehicleState.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_87_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_85_49) {
    match_85_49 = hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getAirVehicleState_extract_90_14_8E9F45(SF t_0, this);
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

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_sendMissionCommand_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Bridge.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.Api", "sendMissionCommand", 0);

  sfUpdateLoc(96);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_MissionCommand_Id_(this), (art_DataContent) (&t_0));
  }
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getReturnHome_extract_101_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!art_Empty__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getReturnHome_extract_102_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this, art_DataContent *_v_102_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_102_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getReturnHome_extract_105_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getReturnHome_(STACK_FRAME Option_C622DB result, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Bridge.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.Api", "getReturnHome", 0);

  sfUpdateLoc(100);
  Option_C622DB value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_ReturnHome_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_100_43 = F;
  if (!match_100_43) {
    match_100_43 = hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getReturnHome_extract_101_14_8E9F45(SF t_0, this);
    if (match_100_43) {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      DeclNewSome_4782C6(t_2);
      Some_4782C6_apply(SF &t_2, (art_Empty) (&t_3));
      value = (Option_C622DB) (&t_2);
    }
  }
  if (!match_100_43) {
    art_DataContent v_102_19;
    match_100_43 = hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getReturnHome_extract_102_14_8E9F45(SF t_0, this, &v_102_19);
    if (match_100_43) {

      sfUpdateLoc(103);
      {
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected payload on port ReturnHome.  Expecting 'Empty' but received "));
        art_DataContent_string_(SF (String) &t_4, v_102_19);
        String_string_(SF (String) &t_4, string(""));
        art_Art_logError(SF hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_4));
      }
      DeclNewNone_ED72E1(t_5);
      None_ED72E1_apply(SF &t_5);
      value = (Option_C622DB) (&t_5);
    }
  }
  if (!match_100_43) {
    match_100_43 = hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api_getReturnHome_extract_105_14_8E9F45(SF t_0, this);
    if (match_100_43) {
      DeclNewNone_ED72E1(t_6);
      None_ED72E1_apply(SF &t_6);
      value = (Option_C622DB) (&t_6);
    }
  }
  sfAssert(match_100_43, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_C622DB));
  return;
}