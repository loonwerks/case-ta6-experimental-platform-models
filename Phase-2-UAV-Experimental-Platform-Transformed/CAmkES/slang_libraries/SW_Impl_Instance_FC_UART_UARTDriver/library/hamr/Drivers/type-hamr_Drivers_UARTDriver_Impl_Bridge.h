#ifndef SIREUM_TYPE_H_hamr_Drivers_UARTDriver_Impl_Bridge
#define SIREUM_TYPE_H_hamr_Drivers_UARTDriver_Impl_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.Drivers.UARTDriver_Impl_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-org_sireum_Option_9AF35E.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_Bridge_Ports.h>
#include <type-hamr_Drivers_UARTDriver_Impl_Bridge_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct hamr_Drivers_UARTDriver_Impl_Bridge *hamr_Drivers_UARTDriver_Impl_Bridge;
struct hamr_Drivers_UARTDriver_Impl_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union Option_9AF35E dispatchTriggers;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_45E54D recv_data;
  struct art_Port_45E54D MissionCommand;
  struct art_Port_45E54D send_data;
  struct art_Port_45E54D AirVehicleState_WPM;
  struct art_Port_45E54D AirVehicleState_UXAS;
  struct art_Bridge_Ports ports;
  struct hamr_Drivers_UARTDriver_Impl_Bridge_Api api;
  Z id;
};

#define DeclNewhamr_Drivers_UARTDriver_Impl_Bridge(x) struct hamr_Drivers_UARTDriver_Impl_Bridge x = { .type = Thamr_Drivers_UARTDriver_Impl_Bridge }

#ifdef __cplusplus
}
#endif

#endif