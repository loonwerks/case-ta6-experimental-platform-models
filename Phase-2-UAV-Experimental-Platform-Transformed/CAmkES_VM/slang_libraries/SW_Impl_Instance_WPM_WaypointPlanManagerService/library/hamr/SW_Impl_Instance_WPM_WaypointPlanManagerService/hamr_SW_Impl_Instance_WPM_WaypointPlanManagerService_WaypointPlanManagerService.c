#include <all.h>

B hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_initialized_ = F;

struct hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_WaypointPlanManagerServiceBridge;
union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_entryPoints;
union Option_8E9F45 _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_noData;
Z _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_port;
Z _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_port;
Z _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_port;
Z _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_port;

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_initialized_) return;
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_initialized_ = T;
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "<init>", 0);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_WaypointPlanManagerServiceBridge(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_noData(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_AutomationResponse_id(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_AutomationResponse_port(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_AirVehicleState_id(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_AirVehicleState_port(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_MissionCommand_id(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_MissionCommand_port(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_ReturnHome_id(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_ReturnHome_port(SF_LAST);
}

hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_WaypointPlanManagerServiceBridge(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  return (hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_WaypointPlanManagerServiceBridge;
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_entryPoints;
}

Option_8E9F45 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_noData(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_noData;
}

Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_port;
}

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_port_a(STACK_FRAME Option_8E9F45 p_AutomationResponse_port) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_port, p_AutomationResponse_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_port;
}

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_port_a(STACK_FRAME Option_8E9F45 p_AirVehicleState_port) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_port, p_AirVehicleState_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_port;
}

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_port_a(STACK_FRAME Option_8E9F45 p_MissionCommand_port) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_port, p_MissionCommand_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_port;
}

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_port_a(STACK_FRAME Option_8E9F45 p_ReturnHome_port) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_port, p_ReturnHome_port, sizeof(union Option_8E9F45));
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(118);
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

Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "main", 0);

  sfUpdateLoc(112);
  {
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(113);
  {
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(114);
  {
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(115);
  {
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(120);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) ((IS_C4F575) &t_1));
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(121);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "initialiseArchitecture", 0);

  sfUpdateLoc(96);
  DeclNewart_ArchitectureDescription(_ad);
  art_ArchitectureDescription ad = (art_ArchitectureDescription) &_ad;
  {
    STATIC_ASSERT(1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
    DeclNewMS_852149(t_1);
    t_1.size = (int8_t) 1;
    MS_852149_up(&t_1, 0, (art_Bridge) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_WaypointPlanManagerServiceBridge(SF_LAST));
    STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_2);
    t_2.size = (int8_t) 0;
    DeclNewart_ArchitectureDescription(t_0);
    art_ArchitectureDescription_apply(SF &t_0, (MS_852149) (&t_1), (IS_08117A) (&t_2));
    Type_assign(ad, (&t_0), sizeof(struct art_ArchitectureDescription));
  }

  sfUpdateLoc(100);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "initialiseEntryPoint", 0);

  sfUpdateLoc(103);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "computeEntryPoint", 0);

  sfUpdateLoc(105);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "finaliseEntryPoint", 0);

  sfUpdateLoc(107);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "run", 0);
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(127);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(128);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(129);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "sendOutput", 0);

  sfUpdateLoc(89);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(90);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_port(SF_LAST));
      hamr_SW_WaypointPlanManagerService_thr_Impl_seL4Nix_MissionCommand_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(91);
    {
      hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_noData(SF_LAST));
    }
  }
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "receiveInput", 0);

  sfUpdateLoc(71);
  {
    DeclNewOption_8E9F45(t_0);
    hamr_SW_WaypointPlanManagerService_thr_Impl_seL4Nix_AutomationResponse_Receive(SF (Option_8E9F45) &t_0);
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(73);
  {
    DeclNewOption_8E9F45(t_1);
    hamr_SW_WaypointPlanManagerService_thr_Impl_seL4Nix_AirVehicleState_Receive(SF (Option_8E9F45) &t_1);
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }

  sfUpdateLoc(75);
  {
    DeclNewOption_8E9F45(t_2);
    hamr_SW_WaypointPlanManagerService_thr_Impl_seL4Nix_ReturnHome_Receive(SF (Option_8E9F45) &t_2);
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_2));
  }
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(139);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(140);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(141);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(133);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(134);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(135);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "getValue", 0);

  sfUpdateLoc(57);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(59);
    B t_1;
    {
      t_1 = Z__eq(portId, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(61);
      B t_2;
      {
        t_2 = Z__eq(portId, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_id(SF_LAST));
      }
      if (t_2) {
        Type_assign(result, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_port(SF_LAST), sizeof(union Option_8E9F45));
        return;
      } else {

        sfUpdateLoc(64);
        {
          DeclNewString(t_3);
          String t_4 = (String) &t_3;
          DeclNewString(t_5);
          String_string_(SF (String) &t_5, string("Unexpected: WaypointPlanManagerService.getValue called with: "));
          Z_string_(SF (String) &t_5, portId);
          String_string_(SF (String) &t_5, string(""));
          String_string_(SF t_4, ((String) &t_5));
          sfAbort(t_4->value);
          abort();
        }
      }
    }
  }
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService.WaypointPlanManagerService", "putValue", 0);

  sfUpdateLoc(79);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(80);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(82);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: WaypointPlanManagerService.putValue called with: "));
      Z_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
}

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_WaypointPlanManagerServiceBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  {

    sfUpdateLoc(15);
    art_Port_45E54D AutomationResponse;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_AutomationResponse"), art_PortMode_Type_EventIn);
    AutomationResponse = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(16);
    art_Port_45E54D AirVehicleState;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_AirVehicleState"), art_PortMode_Type_EventIn);
    AirVehicleState = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(17);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_MissionCommand"), art_PortMode_Type_EventOut);
    MissionCommand = (art_Port_45E54D) (&t_2);

    sfUpdateLoc(18);
    art_Port_9CBF18 ReturnHome;
    DeclNewart_Port_9CBF18(t_3);
    art_Port_9CBF18_apply(SF &t_3, Z_C(3), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_ReturnHome"), art_PortMode_Type_EventIn);
    ReturnHome = (art_Port_9CBF18) (&t_3);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_5);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_5, Z_C(500));
    DeclNewNone_5C1355(t_6);
    None_5C1355_apply(SF &t_6);
    DeclNewhamr_SW_WaypointPlanManagerService_thr_Impl_Bridge(t_4);
    hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_apply(SF &t_4, Z_C(0), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService"), (art_DispatchPropertyProtocol) (&t_5), (Option_9AF35E) (&t_6), (art_Port_45E54D) AutomationResponse, (art_Port_45E54D) AirVehicleState, (art_Port_45E54D) MissionCommand, (art_Port_9CBF18) ReturnHome);
    Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_WaypointPlanManagerServiceBridge, (&t_4), sizeof(struct hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge));
  }
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_entryPoints, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_entryPoints_(hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_WaypointPlanManagerServiceBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  DeclNewNone_964667(t_7);
  None_964667_apply(SF &t_7);
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_noData, (&t_7), sizeof(struct None_964667));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_AutomationResponse_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_id = art_Port_45E54D_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AutomationResponse_(hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_WaypointPlanManagerServiceBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_AutomationResponse_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(38);
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AutomationResponse_port, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_AirVehicleState_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(41);
  _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_id = art_Port_45E54D_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AirVehicleState_(hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_WaypointPlanManagerServiceBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_AirVehicleState_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(42);
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_AirVehicleState_port, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_MissionCommand_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(45);
  _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_id = art_Port_45E54D_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_MissionCommand_(hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_WaypointPlanManagerServiceBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_MissionCommand_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(46);
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_MissionCommand_port, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_ReturnHome_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(49);
  _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_id = art_Port_9CBF18_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_ReturnHome_(hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_WaypointPlanManagerServiceBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_init_ReturnHome_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(50);
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_ReturnHome_port, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_WaypointPlanManagerService_noData(SF_LAST), sizeof(union Option_8E9F45));
};