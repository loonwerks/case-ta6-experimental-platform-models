#include <all.h>

B hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialized_ = F;

struct hamr_SW_OR_UxAS_thr_Impl_Bridge _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge;
union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints;
union Option_8E9F45 _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData;
Z _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port;

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialized_) return;
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialized_ = T;
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "<init>", 0);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_UxASBridge(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_noData(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_OperatingRegion_id(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_OperatingRegion_port(SF_LAST);
}

hamr_SW_OR_UxAS_thr_Impl_Bridge hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return (hamr_SW_OR_UxAS_thr_Impl_Bridge) &_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge;
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints;
}

Option_8E9F45 hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData;
}

Z hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port;
}

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port_a(STACK_FRAME Option_8E9F45 p_OperatingRegion_port) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port, p_OperatingRegion_port, sizeof(union Option_8E9F45));
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(85);
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

Z hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "main", 0);

  sfUpdateLoc(79);
  {
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(80);
  {
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(81);
  {
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(82);
  {
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(87);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) ((IS_C4F575) &t_1));
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(88);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "initialiseArchitecture", 0);

  sfUpdateLoc(63);
  DeclNewart_ArchitectureDescription(_ad);
  art_ArchitectureDescription ad = (art_ArchitectureDescription) &_ad;
  {
    STATIC_ASSERT(1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
    DeclNewMS_852149(t_1);
    t_1.size = (int8_t) 1;
    MS_852149_up(&t_1, 0, (art_Bridge) hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge(SF_LAST));
    STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_2);
    t_2.size = (int8_t) 0;
    DeclNewart_ArchitectureDescription(t_0);
    art_ArchitectureDescription_apply(SF &t_0, (MS_852149) (&t_1), (IS_08117A) (&t_2));
    Type_assign(ad, (&t_0), sizeof(struct art_ArchitectureDescription));
  }

  sfUpdateLoc(67);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "initialiseEntryPoint", 0);

  sfUpdateLoc(70);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "computeEntryPoint", 0);

  sfUpdateLoc(72);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "finaliseEntryPoint", 0);

  sfUpdateLoc(74);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "run", 0);
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(94);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(95);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(96);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "sendOutput", 0);
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "receiveInput", 0);

  sfUpdateLoc(49);
  {
    DeclNewOption_8E9F45(t_0);
    hamr_SW_OR_UxAS_thr_Impl_seL4Nix_OperatingRegion_Receive(SF (Option_8E9F45) &t_0);
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(106);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(107);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(108);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(100);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(101);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(102);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "getValue", 0);

  sfUpdateLoc(39);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(42);
    {
      DeclNewString(t_1);
      String t_2 = (String) &t_1;
      DeclNewString(t_3);
      String_string_(SF (String) &t_3, string("Unexpected: UxAS.getValue called with: "));
      Z_string_(SF (String) &t_3, portId);
      String_string_(SF (String) &t_3, string(""));
      String_string_(SF t_2, ((String) &t_3));
      sfAbort(t_2->value);
      abort();
    }
  }
}

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_UxASBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  {

    sfUpdateLoc(15);
    art_Port_45E54D OperatingRegion;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_UXAS_UxAS_OperatingRegion"), art_PortMode_Type_EventIn);
    OperatingRegion = (art_Port_45E54D) (&t_0);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_2);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_2, Z_C(500));
    DeclNewNone_5C1355(t_3);
    None_5C1355_apply(SF &t_3);
    DeclNewhamr_SW_OR_UxAS_thr_Impl_Bridge(t_1);
    hamr_SW_OR_UxAS_thr_Impl_Bridge_apply(SF &t_1, Z_C(0), (String) string("SW_Impl_Instance_UXAS_UxAS"), (art_DispatchPropertyProtocol) (&t_2), (Option_9AF35E) (&t_3), (art_Port_45E54D) OperatingRegion);
    Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge, (&t_1), sizeof(struct hamr_SW_OR_UxAS_thr_Impl_Bridge));
  }
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(27);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints, hamr_SW_OR_UxAS_thr_Impl_Bridge_entryPoints_(hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(28);
  DeclNewNone_964667(t_4);
  None_964667_apply(SF &t_4);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData, (&t_4), sizeof(struct None_964667));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_OperatingRegion_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(31);
  _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_id = art_Port_45E54D_id_(hamr_SW_OR_UxAS_thr_Impl_Bridge_OperatingRegion_(hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_OperatingRegion_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(32);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData(SF_LAST), sizeof(union Option_8E9F45));
};