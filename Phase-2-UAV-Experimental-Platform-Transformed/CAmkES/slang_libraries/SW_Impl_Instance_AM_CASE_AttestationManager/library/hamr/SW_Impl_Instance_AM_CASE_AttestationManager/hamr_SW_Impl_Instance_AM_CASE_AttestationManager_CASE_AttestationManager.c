#include <all.h>

B hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_initialized_ = F;

struct hamr_SW_CASE_AttestationManager_thr_Impl_Bridge _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_CASE_AttestationManagerBridge;
union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_entryPoints;
union Option_8E9F45 _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_noData;
Z _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_port;
Z _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_port;
Z _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_port;

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_initialized_) return;
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_initialized_ = T;
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "<init>", 0);
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_CASE_AttestationManagerBridge(SF_LAST);
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_noData(SF_LAST);
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_trusted_ids_id(SF_LAST);
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_trusted_ids_port(SF_LAST);
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_attestation_request_id(SF_LAST);
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_attestation_request_port(SF_LAST);
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_attestation_response_id(SF_LAST);
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_attestation_response_port(SF_LAST);
}

hamr_SW_CASE_AttestationManager_thr_Impl_Bridge hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_CASE_AttestationManagerBridge(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  return (hamr_SW_CASE_AttestationManager_thr_Impl_Bridge) &_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_CASE_AttestationManagerBridge;
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_entryPoints;
}

Option_8E9F45 hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_noData(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_noData;
}

Z hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_port;
}

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_port_a(STACK_FRAME Option_8E9F45 p_trusted_ids_port) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_port, p_trusted_ids_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_port;
}

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_port_a(STACK_FRAME Option_8E9F45 p_attestation_request_port) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_port, p_attestation_request_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_port;
}

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_port_a(STACK_FRAME Option_8E9F45 p_attestation_response_port) {
  hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_port, p_attestation_response_port, sizeof(union Option_8E9F45));
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(111);
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

Z hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "main", 0);

  sfUpdateLoc(105);
  {
    hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(106);
  {
    hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(107);
  {
    hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(108);
  {
    hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(113);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) ((IS_C4F575) &t_1));
    hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(114);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "initialiseArchitecture", 0);

  sfUpdateLoc(89);
  DeclNewart_ArchitectureDescription(_ad);
  art_ArchitectureDescription ad = (art_ArchitectureDescription) &_ad;
  {
    STATIC_ASSERT(1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
    DeclNewMS_852149(t_1);
    t_1.size = (int8_t) 1;
    MS_852149_up(&t_1, 0, (art_Bridge) hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_CASE_AttestationManagerBridge(SF_LAST));
    STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_2);
    t_2.size = (int8_t) 0;
    DeclNewart_ArchitectureDescription(t_0);
    art_ArchitectureDescription_apply(SF &t_0, (MS_852149) (&t_1), (IS_08117A) (&t_2));
    Type_assign(ad, (&t_0), sizeof(struct art_ArchitectureDescription));
  }

  sfUpdateLoc(93);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "initialiseEntryPoint", 0);

  sfUpdateLoc(96);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "computeEntryPoint", 0);

  sfUpdateLoc(98);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "finaliseEntryPoint", 0);

  sfUpdateLoc(100);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "run", 0);
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(120);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(121);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(122);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "sendOutput", 0);

  sfUpdateLoc(77);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(78);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_port(SF_LAST));
      hamr_SW_CASE_AttestationManager_thr_Impl_seL4Nix_trusted_ids_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(79);
    {
      hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_noData(SF_LAST));
    }
  }

  sfUpdateLoc(82);
  B t_3;
  {
    B t_4 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_port(SF_LAST));
    t_3 = t_4;
  }
  if (t_3) {

    sfUpdateLoc(83);
    {
      DeclNewart_DataContent(t_5);
      Option_8E9F45_get_(SF (art_DataContent) &t_5, hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_port(SF_LAST));
      hamr_SW_CASE_AttestationManager_thr_Impl_seL4Nix_attestation_request_Send(SF (art_DataContent) ((art_DataContent) &t_5));
    }

    sfUpdateLoc(84);
    {
      hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_noData(SF_LAST));
    }
  }
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "receiveInput", 0);

  sfUpdateLoc(61);
  {
    DeclNewOption_8E9F45(t_0);
    hamr_SW_CASE_AttestationManager_thr_Impl_seL4Nix_attestation_response_Receive(SF (Option_8E9F45) &t_0);
    hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(132);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(133);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(134);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(126);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(127);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(128);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "putValue", 0);

  sfUpdateLoc(65);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(66);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(67);
    B t_2;
    {
      t_2 = Z__eq(portId, hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_id(SF_LAST));
    }
    if (t_2) {

      sfUpdateLoc(68);
      {
        DeclNewSome_D29615(t_3);
        Some_D29615_apply(SF &t_3, (art_DataContent) data);
        hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_port_a(SF (Option_8E9F45) (&t_3));
      }
    } else {

      sfUpdateLoc(70);
      {
        DeclNewString(t_4);
        String t_5 = (String) &t_4;
        DeclNewString(t_6);
        String_string_(SF (String) &t_6, string("Unexpected: CASE_AttestationManager.putValue called with: "));
        Z_string_(SF (String) &t_6, portId);
        String_string_(SF (String) &t_6, string(""));
        String_string_(SF t_5, ((String) &t_6));
        sfAbort(t_5->value);
        abort();
      }
    }
  }
}

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "CASE_AttestationManager.scala", "hamr.SW_Impl_Instance_AM_CASE_AttestationManager.CASE_AttestationManager", "getValue", 0);

  sfUpdateLoc(51);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(54);
    {
      DeclNewString(t_1);
      String t_2 = (String) &t_1;
      DeclNewString(t_3);
      String_string_(SF (String) &t_3, string("Unexpected: CASE_AttestationManager.getValue called with: "));
      Z_string_(SF (String) &t_3, portId);
      String_string_(SF (String) &t_3, string(""));
      String_string_(SF t_2, ((String) &t_3));
      sfAbort(t_2->value);
      abort();
    }
  }
}

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_CASE_AttestationManagerBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  {

    sfUpdateLoc(15);
    art_Port_45E54D trusted_ids;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_AM_CASE_AttestationManager_trusted_ids"), art_PortMode_Type_DataOut);
    trusted_ids = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(16);
    art_Port_45E54D attestation_request;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("SW_Impl_Instance_AM_CASE_AttestationManager_attestation_request"), art_PortMode_Type_EventOut);
    attestation_request = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(17);
    art_Port_45E54D attestation_response;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("SW_Impl_Instance_AM_CASE_AttestationManager_attestation_response"), art_PortMode_Type_EventIn);
    attestation_response = (art_Port_45E54D) (&t_2);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_4);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_4, Z_C(500));
    DeclNewNone_5C1355(t_5);
    None_5C1355_apply(SF &t_5);
    DeclNewhamr_SW_CASE_AttestationManager_thr_Impl_Bridge(t_3);
    hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_apply(SF &t_3, Z_C(0), (String) string("SW_Impl_Instance_AM_CASE_AttestationManager"), (art_DispatchPropertyProtocol) (&t_4), (Option_9AF35E) (&t_5), (art_Port_45E54D) trusted_ids, (art_Port_45E54D) attestation_request, (art_Port_45E54D) attestation_response);
    Type_assign(&_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_CASE_AttestationManagerBridge, (&t_3), sizeof(struct hamr_SW_CASE_AttestationManager_thr_Impl_Bridge));
  }
};

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(31);
  Type_assign(&_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_entryPoints, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_entryPoints_(hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_CASE_AttestationManagerBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(32);
  DeclNewNone_964667(t_6);
  None_964667_apply(SF &t_6);
  Type_assign(&_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_noData, (&t_6), sizeof(struct None_964667));
};

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_trusted_ids_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_id = art_Port_45E54D_id_(hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_trusted_ids_(hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_CASE_AttestationManagerBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_trusted_ids_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  Type_assign(&_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_trusted_ids_port, hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_attestation_request_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_id = art_Port_45E54D_id_(hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_attestation_request_(hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_CASE_AttestationManagerBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_attestation_request_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  Type_assign(&_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_request_port, hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_attestation_response_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(43);
  _hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_id = art_Port_45E54D_id_(hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_attestation_response_(hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_CASE_AttestationManagerBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_init_attestation_response_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(44);
  Type_assign(&_hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_attestation_response_port, hamr_SW_Impl_Instance_AM_CASE_AttestationManager_CASE_AttestationManager_noData(SF_LAST), sizeof(union Option_8E9F45));
};