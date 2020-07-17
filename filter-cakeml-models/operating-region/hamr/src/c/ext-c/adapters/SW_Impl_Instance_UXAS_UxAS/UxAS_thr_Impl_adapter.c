#include <UxAS_thr_Impl_adapter.h>

Unit hamr_SW_OR_UxAS_thr_Impl_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_adapter.c", "", "hamr_SW_OR_UxAS_thr_Impl_adapter_initialiseArchitecture", 0);

  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialiseArchitecture(SF_LAST);
}

Unit hamr_SW_OR_UxAS_thr_Impl_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_adapter.c", "", "hamr_SW_OR_UxAS_thr_Impl_adapter_initialiseEntryPoint", 0);

  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_initialiseEntryPoint(SF_LAST);
}

Unit hamr_SW_OR_UxAS_thr_Impl_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_adapter.c", "", "hamr_SW_OR_UxAS_thr_Impl_adapter_computeEntryPoint", 0);

  hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints hamr_SW_OR_UxAS_thr_Impl_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_adapter.c", "", "hamr_SW_OR_UxAS_thr_Impl_adapter_entryPoints", 0);

  return hamr_SW_Impl_Instance_UXAS_UxAS_UxAS_entryPoints(SF_LAST);
}
