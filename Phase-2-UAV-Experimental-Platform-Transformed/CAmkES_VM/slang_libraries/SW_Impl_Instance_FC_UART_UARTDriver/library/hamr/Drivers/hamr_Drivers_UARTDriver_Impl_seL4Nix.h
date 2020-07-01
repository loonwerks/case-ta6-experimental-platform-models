#ifndef SIREUM_H_hamr_Drivers_UARTDriver_Impl_seL4Nix
#define SIREUM_H_hamr_Drivers_UARTDriver_Impl_seL4Nix

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit hamr_Drivers_UARTDriver_Impl_seL4Nix_send_data_Send(STACK_FRAME art_DataContent d);

Unit hamr_Drivers_UARTDriver_Impl_seL4Nix_AirVehicleState_WPM_Send(STACK_FRAME art_DataContent d);

Unit hamr_Drivers_UARTDriver_Impl_seL4Nix_AirVehicleState_UXAS_Send(STACK_FRAME art_DataContent d);

void hamr_Drivers_UARTDriver_Impl_seL4Nix_recv_data_Receive(STACK_FRAME Option_8E9F45 result);

void hamr_Drivers_UARTDriver_Impl_seL4Nix_MissionCommand_Receive(STACK_FRAME Option_8E9F45 result);

#ifdef __cplusplus
}
#endif

#endif