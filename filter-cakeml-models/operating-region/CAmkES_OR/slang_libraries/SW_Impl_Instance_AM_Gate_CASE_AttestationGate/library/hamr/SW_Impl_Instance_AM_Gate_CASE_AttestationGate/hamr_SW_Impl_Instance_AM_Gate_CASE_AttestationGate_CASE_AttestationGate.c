#include <all.h>

B hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_initialized_ = F;

struct hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge _hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_CASE_AttestationGateBridge;
union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_entryPoints;
union Option_8E9F45 _hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_noData;
Z _hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_port;

void hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_initialized_) return;
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_initialized_ = T;
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "<init>", 0);
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init_CASE_AttestationGateBridge(SF_LAST);
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init_noData(SF_LAST);
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init_OperatingRegion_out_id(SF_LAST);
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init_OperatingRegion_out_port(SF_LAST);
}

hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_CASE_AttestationGateBridge(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init(CALLER_LAST);
  return (hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge) &_hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_CASE_AttestationGateBridge;
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_entryPoints;
}

Option_8E9F45 hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_noData(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_noData;
}

Z hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_port;
}

void hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_port_a(STACK_FRAME Option_8E9F45 p_OperatingRegion_out_port) {
  hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_port, p_OperatingRegion_out_port, sizeof(union Option_8E9F45));
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(88);
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

Z hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "main", 0);

  sfUpdateLoc(82);
  {
    hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(83);
  {
    hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(84);
  {
    hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(85);
  {
    hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(90);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) ((IS_C4F575) &t_1));
    hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(91);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "initialiseArchitecture", 0);

  sfUpdateLoc(66);
  DeclNewart_ArchitectureDescription(_ad);
  art_ArchitectureDescription ad = (art_ArchitectureDescription) &_ad;
  {
    STATIC_ASSERT(1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
    DeclNewMS_852149(t_1);
    t_1.size = (int8_t) 1;
    MS_852149_up(&t_1, 0, (art_Bridge) hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_CASE_AttestationGateBridge(SF_LAST));
    STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_2);
    t_2.size = (int8_t) 0;
    DeclNewart_ArchitectureDescription(t_0);
    art_ArchitectureDescription_apply(SF &t_0, (MS_852149) (&t_1), (IS_08117A) (&t_2));
    Type_assign(ad, (&t_0), sizeof(struct art_ArchitectureDescription));
  }

  sfUpdateLoc(70);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "initialiseEntryPoint", 0);

  sfUpdateLoc(73);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "computeEntryPoint", 0);

  sfUpdateLoc(75);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "finaliseEntryPoint", 0);

  sfUpdateLoc(77);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "run", 0);
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(97);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(98);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(99);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "sendOutput", 0);

  sfUpdateLoc(59);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(60);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_port(SF_LAST));
      hamr_SW_OR_CASE_AttestationGate_thr_Impl_seL4Nix_OperatingRegion_out_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(61);
    {
      hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_noData(SF_LAST));
    }
  }
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "receiveInput", 0);
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(109);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(110);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(111);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(103);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(104);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(105);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "CASE_AttestationGate.scala", "hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate.CASE_AttestationGate", "putValue", 0);

  sfUpdateLoc(49);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(50);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(52);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: CASE_AttestationGate.putValue called with: "));
      Z_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
}

void hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init_CASE_AttestationGateBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  {

    sfUpdateLoc(15);
    art_Port_45E54D OperatingRegion_out;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_OperatingRegion_out"), art_PortMode_Type_EventOut);
    OperatingRegion_out = (art_Port_45E54D) (&t_0);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_2);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_2, Z_C(500));
    DeclNewNone_5C1355(t_3);
    None_5C1355_apply(SF &t_3);
    DeclNewhamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge(t_1);
    hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_apply(SF &t_1, Z_C(0), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate"), (art_DispatchPropertyProtocol) (&t_2), (Option_9AF35E) (&t_3), (art_Port_45E54D) OperatingRegion_out);
    Type_assign(&_hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_CASE_AttestationGateBridge, (&t_1), sizeof(struct hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge));
  }
};

void hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(27);
  Type_assign(&_hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_entryPoints, hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_entryPoints_(hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_CASE_AttestationGateBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(28);
  DeclNewNone_964667(t_4);
  None_964667_apply(SF &t_4);
  Type_assign(&_hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_noData, (&t_4), sizeof(struct None_964667));
};

void hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init_OperatingRegion_out_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(31);
  _hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_id = art_Port_45E54D_id_(hamr_SW_OR_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_out_(hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_CASE_AttestationGateBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_init_OperatingRegion_out_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(32);
  Type_assign(&_hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_OperatingRegion_out_port, hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_CASE_AttestationGate_noData(SF_LAST), sizeof(union Option_8E9F45));
};