#include <all.h>

B hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_initialized_ = F;

struct hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge;
union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_entryPoints;
union Option_8E9F45 _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData;
Z _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_port;
Z _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_port;
Z _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_port;
Z _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_port;
Z _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_port;
Z _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_port;
Z _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_id;
union Option_8E9F45 _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_port;

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_initialized_) return;
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_initialized_ = T;
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "<init>", 0);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_RadioDriver_AttestationBridge(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_noData(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_recv_data_id(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_recv_data_port(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_send_data_id(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_send_data_port(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_AutomationRequest_id(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_AutomationRequest_port(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_OperatingRegion_id(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_OperatingRegion_port(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_LineSearchTask_id(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_LineSearchTask_port(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_am_request_id(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_am_request_port(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_am_response_id(SF_LAST);
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_am_response_port(SF_LAST);
}

hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return (hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge) &_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge;
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_entryPoints;
}

Option_8E9F45 hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData;
}

Z hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_port;
}

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_port_a(STACK_FRAME Option_8E9F45 p_recv_data_port) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_port, p_recv_data_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_port;
}

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_port_a(STACK_FRAME Option_8E9F45 p_send_data_port) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_port, p_send_data_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_port;
}

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_port_a(STACK_FRAME Option_8E9F45 p_AutomationRequest_port) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_port, p_AutomationRequest_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_port;
}

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_port_a(STACK_FRAME Option_8E9F45 p_OperatingRegion_port) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_port, p_OperatingRegion_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_port;
}

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_port_a(STACK_FRAME Option_8E9F45 p_LineSearchTask_port) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_port, p_LineSearchTask_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_port;
}

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_port_a(STACK_FRAME Option_8E9F45 p_am_request_port) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_port, p_am_request_port, sizeof(union Option_8E9F45));
}

Z hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_id(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_id;
}

Option_8E9F45 hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_port(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_port;
}

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_port_a(STACK_FRAME Option_8E9F45 p_am_response_port) {
  hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init(CALLER_LAST);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_port, p_am_response_port, sizeof(union Option_8E9F45));
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(160);
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

Z hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "main", 0);

  sfUpdateLoc(154);
  {
    hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(155);
  {
    hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(156);
  {
    hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(157);
  {
    hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(162);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) ((IS_C4F575) &t_1));
    hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(163);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "initialiseArchitecture", 0);

  sfUpdateLoc(138);
  DeclNewart_ArchitectureDescription(_ad);
  art_ArchitectureDescription ad = (art_ArchitectureDescription) &_ad;
  {
    STATIC_ASSERT(1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
    DeclNewMS_852149(t_1);
    t_1.size = (int8_t) 1;
    MS_852149_up(&t_1, 0, (art_Bridge) hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge(SF_LAST));
    STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_2);
    t_2.size = (int8_t) 0;
    DeclNewart_ArchitectureDescription(t_0);
    art_ArchitectureDescription_apply(SF &t_0, (MS_852149) (&t_1), (IS_08117A) (&t_2));
    Type_assign(ad, (&t_0), sizeof(struct art_ArchitectureDescription));
  }

  sfUpdateLoc(142);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "initialiseEntryPoint", 0);

  sfUpdateLoc(145);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "computeEntryPoint", 0);

  sfUpdateLoc(147);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "finaliseEntryPoint", 0);

  sfUpdateLoc(149);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "run", 0);
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(169);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(170);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(171);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "sendOutput", 0);

  sfUpdateLoc(111);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(112);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_port(SF_LAST));
      hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_send_data_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(113);
    {
      hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST));
    }
  }

  sfUpdateLoc(116);
  B t_3;
  {
    B t_4 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_port(SF_LAST));
    t_3 = t_4;
  }
  if (t_3) {

    sfUpdateLoc(117);
    {
      DeclNewart_DataContent(t_5);
      Option_8E9F45_get_(SF (art_DataContent) &t_5, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_port(SF_LAST));
      hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_AutomationRequest_Send(SF (art_DataContent) ((art_DataContent) &t_5));
    }

    sfUpdateLoc(118);
    {
      hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST));
    }
  }

  sfUpdateLoc(121);
  B t_6;
  {
    B t_7 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_port(SF_LAST));
    t_6 = t_7;
  }
  if (t_6) {

    sfUpdateLoc(122);
    {
      DeclNewart_DataContent(t_8);
      Option_8E9F45_get_(SF (art_DataContent) &t_8, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_port(SF_LAST));
      hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_OperatingRegion_Send(SF (art_DataContent) ((art_DataContent) &t_8));
    }

    sfUpdateLoc(123);
    {
      hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST));
    }
  }

  sfUpdateLoc(126);
  B t_9;
  {
    B t_10 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_port(SF_LAST));
    t_9 = t_10;
  }
  if (t_9) {

    sfUpdateLoc(127);
    {
      DeclNewart_DataContent(t_11);
      Option_8E9F45_get_(SF (art_DataContent) &t_11, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_port(SF_LAST));
      hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_LineSearchTask_Send(SF (art_DataContent) ((art_DataContent) &t_11));
    }

    sfUpdateLoc(128);
    {
      hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST));
    }
  }

  sfUpdateLoc(131);
  B t_12;
  {
    B t_13 = Option_8E9F45_nonEmpty_(SF hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_port(SF_LAST));
    t_12 = t_13;
  }
  if (t_12) {

    sfUpdateLoc(132);
    {
      DeclNewart_DataContent(t_14);
      Option_8E9F45_get_(SF (art_DataContent) &t_14, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_port(SF_LAST));
      hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_am_response_Send(SF (art_DataContent) ((art_DataContent) &t_14));
    }

    sfUpdateLoc(133);
    {
      hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_port_a(SF (Option_8E9F45) hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST));
    }
  }
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "receiveInput", 0);

  sfUpdateLoc(87);
  {
    DeclNewOption_8E9F45(t_0);
    hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_recv_data_Receive(SF (Option_8E9F45) &t_0);
    hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(89);
  {
    DeclNewOption_8E9F45(t_1);
    hamr_SW_RadioDriver_Attestation_thr_Impl_seL4Nix_am_request_Receive(SF (Option_8E9F45) &t_1);
    hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(181);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(182);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(183);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(175);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(176);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(177);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "getValue", 0);

  sfUpdateLoc(75);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(77);
    B t_1;
    {
      t_1 = Z__eq(portId, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(80);
      {
        DeclNewString(t_2);
        String t_3 = (String) &t_2;
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected: RadioDriver_Attestation.getValue called with: "));
        Z_string_(SF (String) &t_4, portId);
        String_string_(SF (String) &t_4, string(""));
        String_string_(SF t_3, ((String) &t_4));
        sfAbort(t_3->value);
        abort();
      }
    }
  }
}

Unit hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation.scala", "hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation.RadioDriver_Attestation", "putValue", 0);

  sfUpdateLoc(93);
  B t_0;
  {
    t_0 = Z__eq(portId, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(94);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(95);
    B t_2;
    {
      t_2 = Z__eq(portId, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_id(SF_LAST));
    }
    if (t_2) {

      sfUpdateLoc(96);
      {
        DeclNewSome_D29615(t_3);
        Some_D29615_apply(SF &t_3, (art_DataContent) data);
        hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_port_a(SF (Option_8E9F45) (&t_3));
      }
    } else {

      sfUpdateLoc(97);
      B t_4;
      {
        t_4 = Z__eq(portId, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_id(SF_LAST));
      }
      if (t_4) {

        sfUpdateLoc(98);
        {
          DeclNewSome_D29615(t_5);
          Some_D29615_apply(SF &t_5, (art_DataContent) data);
          hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_port_a(SF (Option_8E9F45) (&t_5));
        }
      } else {

        sfUpdateLoc(99);
        B t_6;
        {
          t_6 = Z__eq(portId, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_id(SF_LAST));
        }
        if (t_6) {

          sfUpdateLoc(100);
          {
            DeclNewSome_D29615(t_7);
            Some_D29615_apply(SF &t_7, (art_DataContent) data);
            hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_port_a(SF (Option_8E9F45) (&t_7));
          }
        } else {

          sfUpdateLoc(101);
          B t_8;
          {
            t_8 = Z__eq(portId, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_id(SF_LAST));
          }
          if (t_8) {

            sfUpdateLoc(102);
            {
              DeclNewSome_D29615(t_9);
              Some_D29615_apply(SF &t_9, (art_DataContent) data);
              hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_port_a(SF (Option_8E9F45) (&t_9));
            }
          } else {

            sfUpdateLoc(104);
            {
              DeclNewString(t_10);
              String t_11 = (String) &t_10;
              DeclNewString(t_12);
              String_string_(SF (String) &t_12, string("Unexpected: RadioDriver_Attestation.putValue called with: "));
              Z_string_(SF (String) &t_12, portId);
              String_string_(SF (String) &t_12, string(""));
              String_string_(SF t_11, ((String) &t_12));
              sfAbort(t_11->value);
              abort();
            }
          }
        }
      }
    }
  }
}

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_RadioDriver_AttestationBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  {

    sfUpdateLoc(15);
    art_Port_45E54D recv_data;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_recv_data"), art_PortMode_Type_EventIn);
    recv_data = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(16);
    art_Port_45E54D send_data;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_send_data"), art_PortMode_Type_EventOut);
    send_data = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(17);
    art_Port_45E54D AutomationRequest;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_AutomationRequest"), art_PortMode_Type_EventOut);
    AutomationRequest = (art_Port_45E54D) (&t_2);

    sfUpdateLoc(18);
    art_Port_45E54D OperatingRegion;
    DeclNewart_Port_45E54D(t_3);
    art_Port_45E54D_apply(SF &t_3, Z_C(3), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_OperatingRegion"), art_PortMode_Type_EventOut);
    OperatingRegion = (art_Port_45E54D) (&t_3);

    sfUpdateLoc(19);
    art_Port_45E54D LineSearchTask;
    DeclNewart_Port_45E54D(t_4);
    art_Port_45E54D_apply(SF &t_4, Z_C(4), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_LineSearchTask"), art_PortMode_Type_EventOut);
    LineSearchTask = (art_Port_45E54D) (&t_4);

    sfUpdateLoc(20);
    art_Port_45E54D am_request;
    DeclNewart_Port_45E54D(t_5);
    art_Port_45E54D_apply(SF &t_5, Z_C(5), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_am_request"), art_PortMode_Type_EventIn);
    am_request = (art_Port_45E54D) (&t_5);

    sfUpdateLoc(21);
    art_Port_45E54D am_response;
    DeclNewart_Port_45E54D(t_6);
    art_Port_45E54D_apply(SF &t_6, Z_C(6), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_am_response"), art_PortMode_Type_EventOut);
    am_response = (art_Port_45E54D) (&t_6);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_8);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_8, Z_C(500));
    DeclNewNone_5C1355(t_9);
    None_5C1355_apply(SF &t_9);
    DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Bridge(t_7);
    hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_apply(SF &t_7, Z_C(0), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation"), (art_DispatchPropertyProtocol) (&t_8), (Option_9AF35E) (&t_9), (art_Port_45E54D) recv_data, (art_Port_45E54D) send_data, (art_Port_45E54D) AutomationRequest, (art_Port_45E54D) OperatingRegion, (art_Port_45E54D) LineSearchTask, (art_Port_45E54D) am_request, (art_Port_45E54D) am_response);
    Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge, (&t_7), sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge));
  }
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_entryPoints, hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_entryPoints_(hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  DeclNewNone_964667(t_10);
  None_964667_apply(SF &t_10);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData, (&t_10), sizeof(struct None_964667));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_recv_data_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(43);
  _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_id = art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_recv_data_(hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_recv_data_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(44);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_recv_data_port, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_send_data_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(47);
  _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_id = art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_send_data_(hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_send_data_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(48);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_send_data_port, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_AutomationRequest_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(51);
  _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_id = art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_AutomationRequest_(hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_AutomationRequest_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(52);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_AutomationRequest_port, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_OperatingRegion_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(55);
  _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_id = art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_OperatingRegion_(hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_OperatingRegion_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(56);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_OperatingRegion_port, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_LineSearchTask_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(59);
  _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_id = art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_LineSearchTask_(hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_LineSearchTask_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(60);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_LineSearchTask_port, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_am_request_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(63);
  _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_id = art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_am_request_(hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_am_request_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(64);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_request_port, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_am_response_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(67);
  _hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_id = art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_am_response_(hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_RadioDriver_AttestationBridge(SF_LAST)));
};

void hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_init_am_response_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(68);
  Type_assign(&_hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_am_response_port, hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_RadioDriver_Attestation_noData(SF_LAST), sizeof(union Option_8E9F45));
};