#include <all.h>

B hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_initialized_ = F;

struct hamr_Drivers_UARTDriver_Impl_Bridge _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_UARTDriverBridge;
union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_entryPoints;
union Option_8E9F45 _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData;
Z _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_port;
Z _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_port;
Z _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_port;
Z _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_port;
Z _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_port;

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_initialized_) return;
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_initialized_ = T;
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "<init>", 0);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_UARTDriverBridge(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_noData(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_recv_data_id(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_recv_data_port(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_MissionCommand_id(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_MissionCommand_port(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_send_data_id(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_send_data_port(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_AirVehicleState_WPM_id(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_AirVehicleState_WPM_port(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_AirVehicleState_UXAS_id(SF_LAST);
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_AirVehicleState_UXAS_port(SF_LAST);
}

hamr_Drivers_UARTDriver_Impl_Bridge hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_UARTDriverBridge(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return (hamr_Drivers_UARTDriver_Impl_Bridge) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_UARTDriverBridge;
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_entryPoints;
}

Option_8E9F45 hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData;
}

Z hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_port;
}

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_port_a(STACK_FRAME Option_8E9F45 p_recv_data_port) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_port, p_recv_data_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_port;
}

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_port_a(STACK_FRAME Option_8E9F45 p_MissionCommand_port) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_port, p_MissionCommand_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_port;
}

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_port_a(STACK_FRAME Option_8E9F45 p_send_data_port) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_port, p_send_data_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_port;
}

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_port_a(STACK_FRAME Option_8E9F45 p_AirVehicleState_WPM_port) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_port, p_AirVehicleState_WPM_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_port;
}

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_port_a(STACK_FRAME Option_8E9F45 p_AirVehicleState_UXAS_port) {
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_port, p_AirVehicleState_UXAS_port, sizeof(union Option_8E9F45));
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(134);
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

Z hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "main", 0);

  sfUpdateLoc(128);
  {
    hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(129);
  {
    hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(130);
  {
    hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(131);
  {
    hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(136);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) ((IS_C4F575) &t_1));
    hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(137);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "initialiseArchitecture", 0);

  sfUpdateLoc(112);
  DeclNewart_ArchitectureDescription(_ad);
  art_ArchitectureDescription ad = (art_ArchitectureDescription) &_ad;
  {
    STATIC_ASSERT(1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
    DeclNewMS_852149(t_1);
    t_1.size = (int8_t) 1;
    MS_852149_up(&t_1, 0, (art_Bridge) hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_UARTDriverBridge(SF_LAST));
    STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_2);
    t_2.size = (int8_t) 0;
    DeclNewart_ArchitectureDescription(t_0);
    art_ArchitectureDescription_apply(SF &t_0, (MS_852149) (&t_1), (IS_08117A) (&t_2));
    Type_assign(ad, (&t_0), sizeof(struct art_ArchitectureDescription));
  }

  sfUpdateLoc(116);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "initialiseEntryPoint", 0);

  sfUpdateLoc(119);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "computeEntryPoint", 0);

  sfUpdateLoc(121);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "finaliseEntryPoint", 0);

  sfUpdateLoc(123);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "run", 0);
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(143);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(144);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(145);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "sendOutput", 0);

  sfUpdateLoc(95);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(96);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_port(SF_LAST));
      hamr_Drivers_UARTDriver_Impl_seL4Nix_send_data_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(97);
    {
      hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData(SF_LAST));
    }
  }

  sfUpdateLoc(100);
  B t_3;
  {
    B t_4 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_port(SF_LAST));
    t_3 = t_4;
  }
  if (t_3) {

    sfUpdateLoc(101);
    {
      DeclNewart_DataContent(t_5);
      Option_8E9F45_get_(SF (art_DataContent) &t_5, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_port(SF_LAST));
      hamr_Drivers_UARTDriver_Impl_seL4Nix_AirVehicleState_WPM_Send(SF (art_DataContent) ((art_DataContent) &t_5));
    }

    sfUpdateLoc(102);
    {
      hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData(SF_LAST));
    }
  }

  sfUpdateLoc(105);
  B t_6;
  {
    B t_7 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_port(SF_LAST));
    t_6 = t_7;
  }
  if (t_6) {

    sfUpdateLoc(106);
    {
      DeclNewart_DataContent(t_8);
      Option_8E9F45_get_(SF (art_DataContent) &t_8, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_port(SF_LAST));
      hamr_Drivers_UARTDriver_Impl_seL4Nix_AirVehicleState_UXAS_Send(SF (art_DataContent) ((art_DataContent) &t_8));
    }

    sfUpdateLoc(107);
    {
      hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData(SF_LAST));
    }
  }
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "receiveInput", 0);

  sfUpdateLoc(75);
  {
    DeclNewOption_8E9F45(t_0);
    hamr_Drivers_UARTDriver_Impl_seL4Nix_recv_data_Receive(SF (Option_8E9F45) &t_0);
    hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(77);
  {
    DeclNewOption_8E9F45(t_1);
    hamr_Drivers_UARTDriver_Impl_seL4Nix_MissionCommand_Receive(SF (Option_8E9F45) &t_1);
    hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(155);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(156);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(157);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(149);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(150);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(151);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "getValue", 0);

  sfUpdateLoc(63);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(65);
    B t_1;
    {
      t_1 = Z__eq(portId, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(68);
      {
        DeclNewString(t_2);
        String t_3 = (String) &t_2;
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected: UARTDriver.getValue called with: "));
        Z_string_(SF (String) &t_4, portId);
        String_string_(SF (String) &t_4, string(""));
        String_string_(SF t_3, ((String) &t_4));
        sfAbort(t_3->value);
        abort();
      }
    }
  }
}

Unit hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "UARTDriver.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver.UARTDriver", "putValue", 0);

  sfUpdateLoc(81);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(82);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(83);
    B t_2;
    {
      t_2 = Z__eq(portId, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_id(SF_LAST));
    }
    if (t_2) {

      sfUpdateLoc(84);
      {
        DeclNewSome_D29615(t_3);
        Some_D29615_apply(SF &t_3, (art_DataContent) data);
        hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_port_a(SF (Option_8E9F45) (&t_3));
      }
    } else {

      sfUpdateLoc(85);
      B t_4;
      {
        t_4 = Z__eq(portId, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_id(SF_LAST));
      }
      if (t_4) {

        sfUpdateLoc(86);
        {
          DeclNewSome_D29615(t_5);
          Some_D29615_apply(SF &t_5, (art_DataContent) data);
          hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_port_a(SF (Option_8E9F45) (&t_5));
        }
      } else {

        sfUpdateLoc(88);
        {
          DeclNewString(t_6);
          String t_7 = (String) &t_6;
          DeclNewString(t_8);
          String_string_(SF (String) &t_8, string("Unexpected: UARTDriver.putValue called with: "));
          Z_string_(SF (String) &t_8, portId);
          String_string_(SF (String) &t_8, string(""));
          String_string_(SF t_7, ((String) &t_8));
          sfAbort(t_7->value);
          abort();
        }
      }
    }
  }
}

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_UARTDriverBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  {

    sfUpdateLoc(15);
    art_Port_45E54D recv_data;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_recv_data"), art_PortMode_Type_EventIn);
    recv_data = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(16);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_MissionCommand"), art_PortMode_Type_EventIn);
    MissionCommand = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(17);
    art_Port_45E54D send_data;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_send_data"), art_PortMode_Type_EventOut);
    send_data = (art_Port_45E54D) (&t_2);

    sfUpdateLoc(18);
    art_Port_45E54D AirVehicleState_WPM;
    DeclNewart_Port_45E54D(t_3);
    art_Port_45E54D_apply(SF &t_3, Z_C(3), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_AirVehicleState_WPM"), art_PortMode_Type_EventOut);
    AirVehicleState_WPM = (art_Port_45E54D) (&t_3);

    sfUpdateLoc(19);
    art_Port_45E54D AirVehicleState_UXAS;
    DeclNewart_Port_45E54D(t_4);
    art_Port_45E54D_apply(SF &t_4, Z_C(4), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_AirVehicleState_UXAS"), art_PortMode_Type_EventOut);
    AirVehicleState_UXAS = (art_Port_45E54D) (&t_4);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_6);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_6, Z_C(500));
    DeclNewNone_5C1355(t_7);
    None_5C1355_apply(SF &t_7);
    DeclNewhamr_Drivers_UARTDriver_Impl_Bridge(t_5);
    hamr_Drivers_UARTDriver_Impl_Bridge_apply(SF &t_5, Z_C(0), (String) string("SW_Impl_Instance_FC_UART_UARTDriver"), (art_DispatchPropertyProtocol) (&t_6), (Option_9AF35E) (&t_7), (art_Port_45E54D) recv_data, (art_Port_45E54D) MissionCommand, (art_Port_45E54D) send_data, (art_Port_45E54D) AirVehicleState_WPM, (art_Port_45E54D) AirVehicleState_UXAS);
    Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_UARTDriverBridge, (&t_5), sizeof(struct hamr_Drivers_UARTDriver_Impl_Bridge));
  }
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_entryPoints, hamr_Drivers_UARTDriver_Impl_Bridge_entryPoints_(hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_UARTDriverBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  DeclNewNone_964667(t_8);
  None_964667_apply(SF &t_8);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData, (&t_8), sizeof(struct None_964667));
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_recv_data_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_id = art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_Bridge_recv_data_(hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_UARTDriverBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_recv_data_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_recv_data_port, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_MissionCommand_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(43);
  _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_id = art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_Bridge_MissionCommand_(hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_UARTDriverBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_MissionCommand_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(44);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_MissionCommand_port, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_send_data_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(47);
  _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_id = art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_Bridge_send_data_(hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_UARTDriverBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_send_data_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(48);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_send_data_port, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_AirVehicleState_WPM_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(51);
  _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_id = art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_Bridge_AirVehicleState_WPM_(hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_UARTDriverBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_AirVehicleState_WPM_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(52);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_WPM_port, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_AirVehicleState_UXAS_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(55);
  _hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_id = art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_Bridge_AirVehicleState_UXAS_(hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_UARTDriverBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_init_AirVehicleState_UXAS_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(56);
  Type_assign(&_hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_AirVehicleState_UXAS_port, hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_noData(SF_LAST), sizeof(union Option_8E9F45));
};