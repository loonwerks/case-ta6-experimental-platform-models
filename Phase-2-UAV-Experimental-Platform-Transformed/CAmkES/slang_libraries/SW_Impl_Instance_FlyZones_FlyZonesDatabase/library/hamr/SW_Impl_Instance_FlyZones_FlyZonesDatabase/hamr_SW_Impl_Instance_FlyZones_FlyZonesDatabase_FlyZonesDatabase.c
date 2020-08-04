#include <all.h>

B hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_initialized_ = F;

struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_FlyZonesDatabaseBridge;
union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_entryPoints;
union Option_8E9F45 _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_noData;
Z _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_port;
Z _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_port;

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_initialized_) return;
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_initialized_ = T;
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "<init>", 0);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_FlyZonesDatabaseBridge(SF_LAST);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_noData(SF_LAST);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_keep_in_zones_id(SF_LAST);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_keep_in_zones_port(SF_LAST);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_keep_out_zones_id(SF_LAST);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_keep_out_zones_port(SF_LAST);
}

hamr_SW_FlyZonesDatabase_thr_Impl_Bridge hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_FlyZonesDatabaseBridge(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init(CALLER_LAST);
  return (hamr_SW_FlyZonesDatabase_thr_Impl_Bridge) &_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_FlyZonesDatabaseBridge;
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_entryPoints;
}

Option_8E9F45 hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_noData(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_noData;
}

Z hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_port;
}

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_port_a(STACK_FRAME Option_8E9F45 p_keep_in_zones_port) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_port, p_keep_in_zones_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_port;
}

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_port_a(STACK_FRAME Option_8E9F45 p_keep_out_zones_port) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_port, p_keep_out_zones_port, sizeof(union Option_8E9F45));
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(101);
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

Z hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "main", 0);

  sfUpdateLoc(95);
  {
    hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(96);
  {
    hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(97);
  {
    hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(98);
  {
    hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(103);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) ((IS_C4F575) &t_1));
    hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(104);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "initialiseArchitecture", 0);

  sfUpdateLoc(79);
  DeclNewart_ArchitectureDescription(_ad);
  art_ArchitectureDescription ad = (art_ArchitectureDescription) &_ad;
  {
    STATIC_ASSERT(1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
    DeclNewMS_852149(t_1);
    t_1.size = (int8_t) 1;
    MS_852149_up(&t_1, 0, (art_Bridge) hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_FlyZonesDatabaseBridge(SF_LAST));
    STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_2);
    t_2.size = (int8_t) 0;
    DeclNewart_ArchitectureDescription(t_0);
    art_ArchitectureDescription_apply(SF &t_0, (MS_852149) (&t_1), (IS_08117A) (&t_2));
    Type_assign(ad, (&t_0), sizeof(struct art_ArchitectureDescription));
  }

  sfUpdateLoc(83);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "initialiseEntryPoint", 0);

  sfUpdateLoc(86);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "computeEntryPoint", 0);

  sfUpdateLoc(88);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "finaliseEntryPoint", 0);

  sfUpdateLoc(90);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "run", 0);
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(110);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(111);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(112);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "sendOutput", 0);

  sfUpdateLoc(67);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(68);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_port(SF_LAST));
      hamr_SW_FlyZonesDatabase_thr_Impl_seL4Nix_keep_in_zones_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(69);
    {
      hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_noData(SF_LAST));
    }
  }

  sfUpdateLoc(72);
  B t_3;
  {
    B t_4 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_port(SF_LAST));
    t_3 = t_4;
  }
  if (t_3) {

    sfUpdateLoc(73);
    {
      DeclNewart_DataContent(t_5);
      Option_8E9F45_get_(SF (art_DataContent) &t_5, hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_port(SF_LAST));
      hamr_SW_FlyZonesDatabase_thr_Impl_seL4Nix_keep_out_zones_Send(SF (art_DataContent) ((art_DataContent) &t_5));
    }

    sfUpdateLoc(74);
    {
      hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_noData(SF_LAST));
    }
  }
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "receiveInput", 0);
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(122);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(123);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(124);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(116);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(117);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(118);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "FlyZonesDatabase.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase.FlyZonesDatabase", "putValue", 0);

  sfUpdateLoc(55);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(56);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(57);
    B t_2;
    {
      t_2 = Z__eq(portId, hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_id(SF_LAST));
    }
    if (t_2) {

      sfUpdateLoc(58);
      {
        DeclNewSome_D29615(t_3);
        Some_D29615_apply(SF &t_3, (art_DataContent) data);
        hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_port_a(SF (Option_8E9F45) (&t_3));
      }
    } else {

      sfUpdateLoc(60);
      {
        DeclNewString(t_4);
        String t_5 = (String) &t_4;
        DeclNewString(t_6);
        String_string_(SF (String) &t_6, string("Unexpected: FlyZonesDatabase.putValue called with: "));
        Z_string_(SF (String) &t_6, portId);
        String_string_(SF (String) &t_6, string(""));
        String_string_(SF t_5, ((String) &t_6));
        sfAbort(t_5->value);
        abort();
      }
    }
  }
}

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_FlyZonesDatabaseBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  {

    sfUpdateLoc(15);
    art_Port_45E54D keep_in_zones;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_FlyZones_FlyZonesDatabase_keep_in_zones"), art_PortMode_Type_DataOut);
    keep_in_zones = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(16);
    art_Port_45E54D keep_out_zones;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("SW_Impl_Instance_FlyZones_FlyZonesDatabase_keep_out_zones"), art_PortMode_Type_DataOut);
    keep_out_zones = (art_Port_45E54D) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_3);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_3, Z_C(500));
    DeclNewNone_5C1355(t_4);
    None_5C1355_apply(SF &t_4);
    DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Bridge(t_2);
    hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_apply(SF &t_2, Z_C(0), (String) string("SW_Impl_Instance_FlyZones_FlyZonesDatabase"), (art_DispatchPropertyProtocol) (&t_3), (Option_9AF35E) (&t_4), (art_Port_45E54D) keep_in_zones, (art_Port_45E54D) keep_out_zones);
    Type_assign(&_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_FlyZonesDatabaseBridge, (&t_2), sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge));
  }
};

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(29);
  Type_assign(&_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_entryPoints, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_entryPoints_(hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_FlyZonesDatabaseBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(30);
  DeclNewNone_964667(t_5);
  None_964667_apply(SF &t_5);
  Type_assign(&_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_noData, (&t_5), sizeof(struct None_964667));
};

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_keep_in_zones_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_id = art_Port_45E54D_id_(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_in_zones_(hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_FlyZonesDatabaseBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_keep_in_zones_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  Type_assign(&_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_in_zones_port, hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_keep_out_zones_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_id = art_Port_45E54D_id_(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_out_zones_(hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_FlyZonesDatabaseBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_init_keep_out_zones_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(38);
  Type_assign(&_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_keep_out_zones_port, hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_FlyZonesDatabase_noData(SF_LAST), sizeof(union Option_8E9F45));
};