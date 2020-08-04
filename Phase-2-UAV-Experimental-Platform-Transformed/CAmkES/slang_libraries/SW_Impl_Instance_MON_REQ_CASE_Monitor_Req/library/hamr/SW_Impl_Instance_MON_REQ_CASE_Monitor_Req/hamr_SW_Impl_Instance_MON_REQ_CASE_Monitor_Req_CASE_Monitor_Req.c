#include <all.h>

B hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_initialized_ = F;

struct hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_CASE_Monitor_ReqBridge;
union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_entryPoints;
union Option_8E9F45 _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_noData;
Z _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_port;
Z _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_port;
Z _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_port;

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_initialized_) return;
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_initialized_ = T;
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "<init>", 0);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_CASE_Monitor_ReqBridge(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_noData(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_observed_id(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_observed_port(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_reference_1_id(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_reference_1_port(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_alert_id(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_alert_port(SF_LAST);
}

hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_CASE_Monitor_ReqBridge(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  return (hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge) &_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_CASE_Monitor_ReqBridge;
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_entryPoints;
}

Option_8E9F45 hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_noData(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_noData;
}

Z hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_port;
}

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_port_a(STACK_FRAME Option_8E9F45 p_observed_port) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_port, p_observed_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_port;
}

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_port_a(STACK_FRAME Option_8E9F45 p_reference_1_port) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_port, p_reference_1_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_port;
}

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_port_a(STACK_FRAME Option_8E9F45 p_alert_port) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_port, p_alert_port, sizeof(union Option_8E9F45));
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(108);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Z hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "main", 0);

  sfUpdateLoc(102);
  {
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(103);
  {
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(104);
  {
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(105);
  {
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(110);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) ((IS_C4F575) &t_1));
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(111);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "initialiseArchitecture", 0);

  sfUpdateLoc(86);
  DeclNewart_ArchitectureDescription(_ad);
  art_ArchitectureDescription ad = (art_ArchitectureDescription) &_ad;
  {
    STATIC_ASSERT(1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
    DeclNewMS_852149(t_1);
    t_1.size = (int8_t) 1;
    MS_852149_up(&t_1, 0, (art_Bridge) hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_CASE_Monitor_ReqBridge(SF_LAST));
    STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_2);
    t_2.size = (int8_t) 0;
    DeclNewart_ArchitectureDescription(t_0);
    art_ArchitectureDescription_apply(SF &t_0, (MS_852149) (&t_1), (IS_08117A) (&t_2));
    Type_assign(ad, (&t_0), sizeof(struct art_ArchitectureDescription));
  }

  sfUpdateLoc(90);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "initialiseEntryPoint", 0);

  sfUpdateLoc(93);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "computeEntryPoint", 0);

  sfUpdateLoc(95);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "finaliseEntryPoint", 0);

  sfUpdateLoc(97);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "run", 0);
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(117);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(118);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(119);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "sendOutput", 0);

  sfUpdateLoc(79);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(80);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_port(SF_LAST));
      hamr_SW_CASE_Monitor_Req_thr_Impl_seL4Nix_alert_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(81);
    {
      hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_noData(SF_LAST));
    }
  }
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "receiveInput", 0);

  sfUpdateLoc(63);
  {
    DeclNewOption_8E9F45(t_0);
    hamr_SW_CASE_Monitor_Req_thr_Impl_seL4Nix_observed_Receive(SF (Option_8E9F45) &t_0);
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(65);
  {
    DeclNewOption_8E9F45(t_1);
    hamr_SW_CASE_Monitor_Req_thr_Impl_seL4Nix_reference_1_Receive(SF (Option_8E9F45) &t_1);
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(129);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(130);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(131);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(123);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(124);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(125);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "getValue", 0);

  sfUpdateLoc(51);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(53);
    B t_1;
    {
      t_1 = Z__eq(portId, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(56);
      {
        DeclNewString(t_2);
        String t_3 = (String) &t_2;
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected: CASE_Monitor_Req.getValue called with: "));
        Z_string_(SF (String) &t_4, portId);
        String_string_(SF (String) &t_4, string(""));
        String_string_(SF t_3, ((String) &t_4));
        sfAbort(t_3->value);
        abort();
      }
    }
  }
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req", "putValue", 0);

  sfUpdateLoc(69);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(70);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(72);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: CASE_Monitor_Req.putValue called with: "));
      Z_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
}

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_CASE_Monitor_ReqBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  {

    sfUpdateLoc(15);
    art_Port_45E54D observed;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_observed"), art_PortMode_Type_EventIn);
    observed = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(16);
    art_Port_45E54D reference_1;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_reference_1"), art_PortMode_Type_EventIn);
    reference_1 = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(17);
    art_Port_45E54D alert;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_alert"), art_PortMode_Type_EventOut);
    alert = (art_Port_45E54D) (&t_2);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_4);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_4, Z_C(500));
    DeclNewNone_5C1355(t_5);
    None_5C1355_apply(SF &t_5);
    DeclNewhamr_SW_CASE_Monitor_Req_thr_Impl_Bridge(t_3);
    hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_apply(SF &t_3, Z_C(0), (String) string("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req"), (art_DispatchPropertyProtocol) (&t_4), (Option_9AF35E) (&t_5), (art_Port_45E54D) observed, (art_Port_45E54D) reference_1, (art_Port_45E54D) alert);
    Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_CASE_Monitor_ReqBridge, (&t_3), sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge));
  }
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(31);
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_entryPoints, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_entryPoints_(hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_CASE_Monitor_ReqBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(32);
  DeclNewNone_964667(t_6);
  None_964667_apply(SF &t_6);
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_noData, (&t_6), sizeof(struct None_964667));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_observed_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_id = art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_observed_(hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_CASE_Monitor_ReqBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_observed_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_observed_port, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_reference_1_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_id = art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_reference_1_(hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_CASE_Monitor_ReqBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_reference_1_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_reference_1_port, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_alert_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(43);
  _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_id = art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_alert_(hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_CASE_Monitor_ReqBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_init_alert_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(44);
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_alert_port, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_CASE_Monitor_Req_noData(SF_LAST), sizeof(union Option_8E9F45));
};