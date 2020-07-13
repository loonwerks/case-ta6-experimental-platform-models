#include <all.h>

B hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_initialized_ = F;

struct hamr_SW_CASE_Filter_LST_thr_Impl_Bridge _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_CASE_Filter_LSTBridge;
union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_entryPoints;
union Option_8E9F45 _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_noData;
Z _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_port;
Z _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_port;

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_initialized_) return;
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_initialized_ = T;
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "<init>", 0);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_CASE_Filter_LSTBridge(SF_LAST);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_noData(SF_LAST);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_filter_in_id(SF_LAST);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_filter_in_port(SF_LAST);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_filter_out_id(SF_LAST);
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_filter_out_port(SF_LAST);
}

hamr_SW_CASE_Filter_LST_thr_Impl_Bridge hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_CASE_Filter_LSTBridge(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init(CALLER_LAST);
  return (hamr_SW_CASE_Filter_LST_thr_Impl_Bridge) &_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_CASE_Filter_LSTBridge;
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_entryPoints;
}

Option_8E9F45 hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_noData(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_noData;
}

Z hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_port;
}

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_port_a(STACK_FRAME Option_8E9F45 p_filter_in_port) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_port, p_filter_in_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_port;
}

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_port_a(STACK_FRAME Option_8E9F45 p_filter_out_port) {
  hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_port, p_filter_out_port, sizeof(union Option_8E9F45));
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(98);
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

Z hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "main", 0);

  sfUpdateLoc(92);
  {
    hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(93);
  {
    hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(94);
  {
    hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(95);
  {
    hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(100);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) ((IS_C4F575) &t_1));
    hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(101);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "initialiseArchitecture", 0);

  sfUpdateLoc(76);
  DeclNewart_ArchitectureDescription(_ad);
  art_ArchitectureDescription ad = (art_ArchitectureDescription) &_ad;
  {
    STATIC_ASSERT(1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
    DeclNewMS_852149(t_1);
    t_1.size = (int8_t) 1;
    MS_852149_up(&t_1, 0, (art_Bridge) hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_CASE_Filter_LSTBridge(SF_LAST));
    STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_2);
    t_2.size = (int8_t) 0;
    DeclNewart_ArchitectureDescription(t_0);
    art_ArchitectureDescription_apply(SF &t_0, (MS_852149) (&t_1), (IS_08117A) (&t_2));
    Type_assign(ad, (&t_0), sizeof(struct art_ArchitectureDescription));
  }

  sfUpdateLoc(80);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "initialiseEntryPoint", 0);

  sfUpdateLoc(83);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "computeEntryPoint", 0);

  sfUpdateLoc(85);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "finaliseEntryPoint", 0);

  sfUpdateLoc(87);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "run", 0);
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(107);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(108);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(109);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "sendOutput", 0);

  sfUpdateLoc(69);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(70);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_port(SF_LAST));
      hamr_SW_CASE_Filter_LST_thr_Impl_seL4Nix_filter_out_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(71);
    {
      hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_noData(SF_LAST));
    }
  }
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "receiveInput", 0);

  sfUpdateLoc(55);
  {
    DeclNewOption_8E9F45(t_0);
    hamr_SW_CASE_Filter_LST_thr_Impl_seL4Nix_filter_in_Receive(SF (Option_8E9F45) &t_0);
    hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(119);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(120);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(121);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(113);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(114);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(115);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "getValue", 0);

  sfUpdateLoc(45);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(48);
    {
      DeclNewString(t_1);
      String t_2 = (String) &t_1;
      DeclNewString(t_3);
      String_string_(SF (String) &t_3, string("Unexpected: CASE_Filter_LST.getValue called with: "));
      Z_string_(SF (String) &t_3, portId);
      String_string_(SF (String) &t_3, string(""));
      String_string_(SF t_2, ((String) &t_3));
      sfAbort(t_2->value);
      abort();
    }
  }
}

Unit hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "CASE_Filter_LST.scala", "hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST.CASE_Filter_LST", "putValue", 0);

  sfUpdateLoc(59);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(60);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(62);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: CASE_Filter_LST.putValue called with: "));
      Z_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
}

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_CASE_Filter_LSTBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  {

    sfUpdateLoc(15);
    art_Port_45E54D filter_in;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_FLT_LST_CASE_Filter_LST_filter_in"), art_PortMode_Type_EventIn);
    filter_in = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(16);
    art_Port_45E54D filter_out;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("SW_Impl_Instance_FLT_LST_CASE_Filter_LST_filter_out"), art_PortMode_Type_EventOut);
    filter_out = (art_Port_45E54D) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_3);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_3, Z_C(500));
    DeclNewNone_5C1355(t_4);
    None_5C1355_apply(SF &t_4);
    DeclNewhamr_SW_CASE_Filter_LST_thr_Impl_Bridge(t_2);
    hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_apply(SF &t_2, Z_C(0), (String) string("SW_Impl_Instance_FLT_LST_CASE_Filter_LST"), (art_DispatchPropertyProtocol) (&t_3), (Option_9AF35E) (&t_4), (art_Port_45E54D) filter_in, (art_Port_45E54D) filter_out);
    Type_assign(&_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_CASE_Filter_LSTBridge, (&t_2), sizeof(struct hamr_SW_CASE_Filter_LST_thr_Impl_Bridge));
  }
};

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(29);
  Type_assign(&_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_entryPoints, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_entryPoints_(hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_CASE_Filter_LSTBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(30);
  DeclNewNone_964667(t_5);
  None_964667_apply(SF &t_5);
  Type_assign(&_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_noData, (&t_5), sizeof(struct None_964667));
};

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_filter_in_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_id = art_Port_45E54D_id_(hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_filter_in_(hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_CASE_Filter_LSTBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_filter_in_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  Type_assign(&_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_in_port, hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_filter_out_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  _hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_id = art_Port_45E54D_id_(hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_filter_out_(hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_CASE_Filter_LSTBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_init_filter_out_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(38);
  Type_assign(&_hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_filter_out_port, hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_CASE_Filter_LST_noData(SF_LAST), sizeof(union Option_8E9F45));
};