#include <all.h>

B hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialized_ = F;

struct hamr_SW_UxAS_thr_Impl_Bridge _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge;
union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints;
union Option_8E9F45 _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData;
Z _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_port;
Z _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_port;
Z _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port;
Z _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_port;
Z _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_port;

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialized_) return;
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialized_ = T;
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "<init>", 0);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_UxASBridge(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_noData(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AutomationRequest_id(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AutomationRequest_port(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AirVehicleState_id(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AirVehicleState_port(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_OperatingRegion_id(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_OperatingRegion_port(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_LineSearchTask_id(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_LineSearchTask_port(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AutomationResponse_id(SF_LAST);
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AutomationResponse_port(SF_LAST);
}

hamr_SW_UxAS_thr_Impl_Bridge hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return (hamr_SW_UxAS_thr_Impl_Bridge) &_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge;
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints;
}

Option_8E9F45 hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData;
}

Z hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_port;
}

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_port_a(STACK_FRAME Option_8E9F45 p_AutomationRequest_port) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_port, p_AutomationRequest_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_port;
}

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_port_a(STACK_FRAME Option_8E9F45 p_AirVehicleState_port) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_port, p_AirVehicleState_port, sizeof(union Option_8E9F45));
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

Z hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_port;
}

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_port_a(STACK_FRAME Option_8E9F45 p_LineSearchTask_port) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_port, p_LineSearchTask_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_port;
}

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_port_a(STACK_FRAME Option_8E9F45 p_AutomationResponse_port) {
  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_port, p_AutomationResponse_port, sizeof(union Option_8E9F45));
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(128);
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

  sfUpdateLoc(122);
  {
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(123);
  {
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(124);
  {
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(125);
  {
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(130);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) ((IS_C4F575) &t_1));
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(131);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "initialiseArchitecture", 0);

  sfUpdateLoc(106);
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

  sfUpdateLoc(110);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "initialiseEntryPoint", 0);

  sfUpdateLoc(113);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "computeEntryPoint", 0);

  sfUpdateLoc(115);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "finaliseEntryPoint", 0);

  sfUpdateLoc(117);
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

  sfUpdateLoc(137);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(138);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(139);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "sendOutput", 0);

  sfUpdateLoc(99);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(100);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_port(SF_LAST));
      hamr_SW_UxAS_thr_Impl_seL4Nix_AutomationResponse_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(101);
    {
      hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData(SF_LAST));
    }
  }
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "receiveInput", 0);

  sfUpdateLoc(79);
  {
    DeclNewOption_8E9F45(t_0);
    hamr_SW_UxAS_thr_Impl_seL4Nix_AutomationRequest_Receive(SF (Option_8E9F45) &t_0);
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(81);
  {
    DeclNewOption_8E9F45(t_1);
    hamr_SW_UxAS_thr_Impl_seL4Nix_AirVehicleState_Receive(SF (Option_8E9F45) &t_1);
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }

  sfUpdateLoc(83);
  {
    DeclNewOption_8E9F45(t_2);
    hamr_SW_UxAS_thr_Impl_seL4Nix_OperatingRegion_Receive(SF (Option_8E9F45) &t_2);
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_2));
  }

  sfUpdateLoc(85);
  {
    DeclNewOption_8E9F45(t_3);
    hamr_SW_UxAS_thr_Impl_seL4Nix_LineSearchTask_Receive(SF (Option_8E9F45) &t_3);
    hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_3));
  }
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(149);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(150);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(151);
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

  sfUpdateLoc(143);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(144);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(145);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "getValue", 0);

  sfUpdateLoc(63);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(65);
    B t_1;
    {
      t_1 = Z__eq(portId, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(67);
      B t_2;
      {
        t_2 = Z__eq(portId, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_id(SF_LAST));
      }
      if (t_2) {
        Type_assign(result, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port(SF_LAST), sizeof(union Option_8E9F45));
        return;
      } else {

        sfUpdateLoc(69);
        B t_3;
        {
          t_3 = Z__eq(portId, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_id(SF_LAST));
        }
        if (t_3) {
          Type_assign(result, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_port(SF_LAST), sizeof(union Option_8E9F45));
          return;
        } else {

          sfUpdateLoc(72);
          {
            DeclNewString(t_4);
            String t_5 = (String) &t_4;
            DeclNewString(t_6);
            String_string_(SF (String) &t_6, string("Unexpected: UxAS.getValue called with: "));
            Z_string_(SF (String) &t_6, portId);
            String_string_(SF (String) &t_6, string(""));
            String_string_(SF t_5, ((String) &t_6));
            sfAbort(t_5->value);
            abort();
          }
        }
      }
    }
  }
}

Unit hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "UxAS.scala", "hamr.SW_Impl_Instance_UXAS_UxAS.UxAS", "putValue", 0);

  sfUpdateLoc(89);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(90);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(92);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: UxAS.putValue called with: "));
      Z_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
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
    art_Port_45E54D AutomationRequest;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_UXAS_UxAS_AutomationRequest"), art_PortMode_Type_EventIn);
    AutomationRequest = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(16);
    art_Port_45E54D AirVehicleState;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("SW_Impl_Instance_UXAS_UxAS_AirVehicleState"), art_PortMode_Type_EventIn);
    AirVehicleState = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(17);
    art_Port_45E54D OperatingRegion;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("SW_Impl_Instance_UXAS_UxAS_OperatingRegion"), art_PortMode_Type_EventIn);
    OperatingRegion = (art_Port_45E54D) (&t_2);

    sfUpdateLoc(18);
    art_Port_45E54D LineSearchTask;
    DeclNewart_Port_45E54D(t_3);
    art_Port_45E54D_apply(SF &t_3, Z_C(3), (String) string("SW_Impl_Instance_UXAS_UxAS_LineSearchTask"), art_PortMode_Type_EventIn);
    LineSearchTask = (art_Port_45E54D) (&t_3);

    sfUpdateLoc(19);
    art_Port_45E54D AutomationResponse;
    DeclNewart_Port_45E54D(t_4);
    art_Port_45E54D_apply(SF &t_4, Z_C(4), (String) string("SW_Impl_Instance_UXAS_UxAS_AutomationResponse"), art_PortMode_Type_EventOut);
    AutomationResponse = (art_Port_45E54D) (&t_4);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_6);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_6, Z_C(500));
    DeclNewNone_5C1355(t_7);
    None_5C1355_apply(SF &t_7);
    DeclNewhamr_SW_UxAS_thr_Impl_Bridge(t_5);
    hamr_SW_UxAS_thr_Impl_Bridge_apply(SF &t_5, Z_C(0), (String) string("SW_Impl_Instance_UXAS_UxAS"), (art_DispatchPropertyProtocol) (&t_6), (Option_9AF35E) (&t_7), (art_Port_45E54D) AutomationRequest, (art_Port_45E54D) AirVehicleState, (art_Port_45E54D) OperatingRegion, (art_Port_45E54D) LineSearchTask, (art_Port_45E54D) AutomationResponse);
    Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge, (&t_5), sizeof(struct hamr_SW_UxAS_thr_Impl_Bridge));
  }
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints, hamr_SW_UxAS_thr_Impl_Bridge_entryPoints_(hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  DeclNewNone_964667(t_8);
  None_964667_apply(SF &t_8);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData, (&t_8), sizeof(struct None_964667));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AutomationRequest_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_id = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AutomationRequest_(hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AutomationRequest_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationRequest_port, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AirVehicleState_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(43);
  _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_id = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AirVehicleState_(hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AirVehicleState_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(44);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AirVehicleState_port, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_OperatingRegion_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(47);
  _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_id = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_OperatingRegion_(hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_OperatingRegion_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(48);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_OperatingRegion_port, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_LineSearchTask_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(51);
  _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_id = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_LineSearchTask_(hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_LineSearchTask_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(52);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_LineSearchTask_port, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AutomationResponse_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(55);
  _hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_id = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_Bridge_AutomationResponse_(hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_UxASBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_init_AutomationResponse_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(56);
  Type_assign(&_hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_AutomationResponse_port, hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_noData(SF_LAST), sizeof(union Option_8E9F45));
};