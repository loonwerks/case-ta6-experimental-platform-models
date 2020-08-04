#include <all.h>

B Type__eq(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case TIS_C4F575: return IS_C4F575__eq((IS_C4F575) t1, (IS_C4F575) t2);
    case TIS_948B60: return IS_948B60__eq((IS_948B60) t1, (IS_948B60) t2);
    case TIS_82ABD8: return IS_82ABD8__eq((IS_82ABD8) t1, (IS_82ABD8) t2);
    case TIS_08117A: return IS_08117A__eq((IS_08117A) t1, (IS_08117A) t2);
    case TIS_820232: return IS_820232__eq((IS_820232) t1, (IS_820232) t2);
    case TMNone_2A2E1D: return MNone_2A2E1D__eq((MNone_2A2E1D) t1, (MNone_2A2E1D) t2);
    case TMS_E444B2: return MS_E444B2__eq((MS_E444B2) t1, (MS_E444B2) t2);
    case TMS_94FFA9: return MS_94FFA9__eq((MS_94FFA9) t1, (MS_94FFA9) t2);
    case TMS_F55A18: return MS_F55A18__eq((MS_F55A18) t1, (MS_F55A18) t2);
    case TMS_852149: return MS_852149__eq((MS_852149) t1, (MS_852149) t2);
    case TMSome_D3D128: return MSome_D3D128__eq((MSome_D3D128) t1, (MSome_D3D128) t2);
    case TNone_3026C5: return None_3026C5__eq((None_3026C5) t1, (None_3026C5) t2);
    case TNone_5C1355: return None_5C1355__eq((None_5C1355) t1, (None_5C1355) t2);
    case TNone_964667: return None_964667__eq((None_964667) t1, (None_964667) t2);
    case TNone_39BC5F: return None_39BC5F__eq((None_39BC5F) t1, (None_39BC5F) t2);
    case TSome_8D03B1: return Some_8D03B1__eq((Some_8D03B1) t1, (Some_8D03B1) t2);
    case TSome_D29615: return Some_D29615__eq((Some_D29615) t1, (Some_D29615) t2);
    case TSome_3E197E: return Some_3E197E__eq((Some_3E197E) t1, (Some_3E197E) t2);
    case TString: return String__eq((String) t1, (String) t2);
    case Tart_ArchitectureDescription: return art_ArchitectureDescription__eq((art_ArchitectureDescription) t1, (art_ArchitectureDescription) t2);
    case Tart_Bridge_Ports: return art_Bridge_Ports__eq((art_Bridge_Ports) t1, (art_Bridge_Ports) t2);
    case Tart_DispatchPropertyProtocol_Periodic: return art_DispatchPropertyProtocol_Periodic__eq((art_DispatchPropertyProtocol_Periodic) t1, (art_DispatchPropertyProtocol_Periodic) t2);
    case Tart_DispatchPropertyProtocol_Sporadic: return art_DispatchPropertyProtocol_Sporadic__eq((art_DispatchPropertyProtocol_Sporadic) t1, (art_DispatchPropertyProtocol_Sporadic) t2);
    case Tart_Empty: return art_Empty__eq((art_Empty) t1, (art_Empty) t2);
    case Tart_Port_45E54D: return art_Port_45E54D__eq((art_Port_45E54D) t1, (art_Port_45E54D) t2);
    case Thamr_Base_Types_Bits_Payload: return hamr_Base_Types_Bits_Payload__eq((hamr_Base_Types_Bits_Payload) t1, (hamr_Base_Types_Bits_Payload) t2);
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge: return hamr_SW_CASE_AttestationGate_thr_Impl_Bridge__eq((hamr_SW_CASE_AttestationGate_thr_Impl_Bridge) t1, (hamr_SW_CASE_AttestationGate_thr_Impl_Bridge) t2);
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api: return hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api__eq((hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api) t1, (hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api) t2);
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints: return hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints__eq((hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints) t1, (hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints) t2);
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Impl: return hamr_SW_CASE_AttestationGate_thr_Impl_Impl__eq((hamr_SW_CASE_AttestationGate_thr_Impl_Impl) t1, (hamr_SW_CASE_AttestationGate_thr_Impl_Impl) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_cprint(void *this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TIS_C4F575: IS_C4F575_cprint((IS_C4F575) this, isOut); return;
    case TIS_948B60: IS_948B60_cprint((IS_948B60) this, isOut); return;
    case TIS_82ABD8: IS_82ABD8_cprint((IS_82ABD8) this, isOut); return;
    case TIS_08117A: IS_08117A_cprint((IS_08117A) this, isOut); return;
    case TIS_820232: IS_820232_cprint((IS_820232) this, isOut); return;
    case TMNone_2A2E1D: MNone_2A2E1D_cprint((MNone_2A2E1D) this, isOut); return;
    case TMS_E444B2: MS_E444B2_cprint((MS_E444B2) this, isOut); return;
    case TMS_94FFA9: MS_94FFA9_cprint((MS_94FFA9) this, isOut); return;
    case TMS_F55A18: MS_F55A18_cprint((MS_F55A18) this, isOut); return;
    case TMS_852149: MS_852149_cprint((MS_852149) this, isOut); return;
    case TMSome_D3D128: MSome_D3D128_cprint((MSome_D3D128) this, isOut); return;
    case TNone_3026C5: None_3026C5_cprint((None_3026C5) this, isOut); return;
    case TNone_5C1355: None_5C1355_cprint((None_5C1355) this, isOut); return;
    case TNone_964667: None_964667_cprint((None_964667) this, isOut); return;
    case TNone_39BC5F: None_39BC5F_cprint((None_39BC5F) this, isOut); return;
    case TSome_8D03B1: Some_8D03B1_cprint((Some_8D03B1) this, isOut); return;
    case TSome_D29615: Some_D29615_cprint((Some_D29615) this, isOut); return;
    case TSome_3E197E: Some_3E197E_cprint((Some_3E197E) this, isOut); return;
    case TString: String_cprint((String) this, isOut); return;
    case Tart_ArchitectureDescription: art_ArchitectureDescription_cprint((art_ArchitectureDescription) this, isOut); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_cprint((art_Bridge_Ports) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_cprint((art_DispatchPropertyProtocol_Periodic) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Sporadic: art_DispatchPropertyProtocol_Sporadic_cprint((art_DispatchPropertyProtocol_Sporadic) this, isOut); return;
    case Tart_Empty: art_Empty_cprint((art_Empty) this, isOut); return;
    case Tart_Port_45E54D: art_Port_45E54D_cprint((art_Port_45E54D) this, isOut); return;
    case Thamr_Base_Types_Bits_Payload: hamr_Base_Types_Bits_Payload_cprint((hamr_Base_Types_Bits_Payload) this, isOut); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge: hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_cprint((hamr_SW_CASE_AttestationGate_thr_Impl_Bridge) this, isOut); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api: hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_cprint((hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api) this, isOut); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_cprint((hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints) this, isOut); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Impl: hamr_SW_CASE_AttestationGate_thr_Impl_Impl_cprint((hamr_SW_CASE_AttestationGate_thr_Impl_Impl) this, isOut); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
  #endif
}

void Type_string_(STACK_FRAME String result, void *this) {
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TIS_C4F575: IS_C4F575_string_(CALLER result, (IS_C4F575) this); return;
    case TIS_948B60: IS_948B60_string_(CALLER result, (IS_948B60) this); return;
    case TIS_82ABD8: IS_82ABD8_string_(CALLER result, (IS_82ABD8) this); return;
    case TIS_08117A: IS_08117A_string_(CALLER result, (IS_08117A) this); return;
    case TIS_820232: IS_820232_string_(CALLER result, (IS_820232) this); return;
    case TMNone_2A2E1D: MNone_2A2E1D_string_(CALLER result, (MNone_2A2E1D) this); return;
    case TMS_E444B2: MS_E444B2_string_(CALLER result, (MS_E444B2) this); return;
    case TMS_94FFA9: MS_94FFA9_string_(CALLER result, (MS_94FFA9) this); return;
    case TMS_F55A18: MS_F55A18_string_(CALLER result, (MS_F55A18) this); return;
    case TMS_852149: MS_852149_string_(CALLER result, (MS_852149) this); return;
    case TMSome_D3D128: MSome_D3D128_string_(CALLER result, (MSome_D3D128) this); return;
    case TNone_3026C5: None_3026C5_string_(CALLER result, (None_3026C5) this); return;
    case TNone_5C1355: None_5C1355_string_(CALLER result, (None_5C1355) this); return;
    case TNone_964667: None_964667_string_(CALLER result, (None_964667) this); return;
    case TNone_39BC5F: None_39BC5F_string_(CALLER result, (None_39BC5F) this); return;
    case TSome_8D03B1: Some_8D03B1_string_(CALLER result, (Some_8D03B1) this); return;
    case TSome_D29615: Some_D29615_string_(CALLER result, (Some_D29615) this); return;
    case TSome_3E197E: Some_3E197E_string_(CALLER result, (Some_3E197E) this); return;
    case TString: String_string_(CALLER result, (String) this); return;
    case Tart_ArchitectureDescription: art_ArchitectureDescription_string_(CALLER result, (art_ArchitectureDescription) this); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_string_(CALLER result, (art_Bridge_Ports) this); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_string_(CALLER result, (art_DispatchPropertyProtocol_Periodic) this); return;
    case Tart_DispatchPropertyProtocol_Sporadic: art_DispatchPropertyProtocol_Sporadic_string_(CALLER result, (art_DispatchPropertyProtocol_Sporadic) this); return;
    case Tart_Empty: art_Empty_string_(CALLER result, (art_Empty) this); return;
    case Tart_Port_45E54D: art_Port_45E54D_string_(CALLER result, (art_Port_45E54D) this); return;
    case Thamr_Base_Types_Bits_Payload: hamr_Base_Types_Bits_Payload_string_(CALLER result, (hamr_Base_Types_Bits_Payload) this); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge: hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_string_(CALLER result, (hamr_SW_CASE_AttestationGate_thr_Impl_Bridge) this); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api: hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_string_(CALLER result, (hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api) this); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints: hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_string_(CALLER result, (hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints) this); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Impl: hamr_SW_CASE_AttestationGate_thr_Impl_Impl_string_(CALLER result, (hamr_SW_CASE_AttestationGate_thr_Impl_Impl) this); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

