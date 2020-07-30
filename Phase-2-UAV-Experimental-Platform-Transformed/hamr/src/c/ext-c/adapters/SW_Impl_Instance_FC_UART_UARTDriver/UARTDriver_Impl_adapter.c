#include <UARTDriver_Impl_adapter.h>

Unit hamr_Drivers_UARTDriver_Impl_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_adapter.c", "", "hamr_Drivers_UARTDriver_Impl_adapter_initialiseArchitecture", 0);

  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_initialiseArchitecture(SF_LAST);
}

Unit hamr_Drivers_UARTDriver_Impl_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_adapter.c", "", "hamr_Drivers_UARTDriver_Impl_adapter_initialiseEntryPoint", 0);

  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_initialiseEntryPoint(SF_LAST);
}

Unit hamr_Drivers_UARTDriver_Impl_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_adapter.c", "", "hamr_Drivers_UARTDriver_Impl_adapter_computeEntryPoint", 0);

  hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints hamr_Drivers_UARTDriver_Impl_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_adapter.c", "", "hamr_Drivers_UARTDriver_Impl_adapter_entryPoints", 0);

  return hamr_SW_Impl_Instance_FC_UART_UARTDriver_UARTDriver_entryPoints(SF_LAST);
}
