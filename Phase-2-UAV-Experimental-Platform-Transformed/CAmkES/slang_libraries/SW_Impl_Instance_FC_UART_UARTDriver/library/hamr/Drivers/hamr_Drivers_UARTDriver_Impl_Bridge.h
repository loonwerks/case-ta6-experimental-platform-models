#ifndef SIREUM_H_hamr_Drivers_UARTDriver_Impl_Bridge
#define SIREUM_H_hamr_Drivers_UARTDriver_Impl_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.Drivers.UARTDriver_Impl_Bridge

#define hamr_Drivers_UARTDriver_Impl_Bridge_id_(this) ((this)->id)
#define hamr_Drivers_UARTDriver_Impl_Bridge_name_(this) ((String) &(this)->name)
#define hamr_Drivers_UARTDriver_Impl_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define hamr_Drivers_UARTDriver_Impl_Bridge_dispatchTriggers_(this) ((Option_9AF35E) &(this)->dispatchTriggers)
#define hamr_Drivers_UARTDriver_Impl_Bridge_recv_data_(this) ((art_Port_45E54D) &(this)->recv_data)
#define hamr_Drivers_UARTDriver_Impl_Bridge_MissionCommand_(this) ((art_Port_45E54D) &(this)->MissionCommand)
#define hamr_Drivers_UARTDriver_Impl_Bridge_send_data_(this) ((art_Port_45E54D) &(this)->send_data)
#define hamr_Drivers_UARTDriver_Impl_Bridge_AirVehicleState_WPM_(this) ((art_Port_45E54D) &(this)->AirVehicleState_WPM)
#define hamr_Drivers_UARTDriver_Impl_Bridge_AirVehicleState_UXAS_(this) ((art_Port_45E54D) &(this)->AirVehicleState_UXAS)
#define hamr_Drivers_UARTDriver_Impl_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define hamr_Drivers_UARTDriver_Impl_Bridge_api_(this) ((hamr_Drivers_UARTDriver_Impl_Bridge_Api) &(this)->api)
#define hamr_Drivers_UARTDriver_Impl_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B hamr_Drivers_UARTDriver_Impl_Bridge__eq(hamr_Drivers_UARTDriver_Impl_Bridge this, hamr_Drivers_UARTDriver_Impl_Bridge other);
inline B hamr_Drivers_UARTDriver_Impl_Bridge__ne(hamr_Drivers_UARTDriver_Impl_Bridge this, hamr_Drivers_UARTDriver_Impl_Bridge other) {
  return !hamr_Drivers_UARTDriver_Impl_Bridge__eq(this, other);
};
void hamr_Drivers_UARTDriver_Impl_Bridge_string_(STACK_FRAME String result, hamr_Drivers_UARTDriver_Impl_Bridge this);
void hamr_Drivers_UARTDriver_Impl_Bridge_cprint(hamr_Drivers_UARTDriver_Impl_Bridge this, B isOut);

inline B hamr_Drivers_UARTDriver_Impl_Bridge__is(STACK_FRAME void* this) {
  return ((hamr_Drivers_UARTDriver_Impl_Bridge) this)->type == Thamr_Drivers_UARTDriver_Impl_Bridge;
}

inline hamr_Drivers_UARTDriver_Impl_Bridge hamr_Drivers_UARTDriver_Impl_Bridge__as(STACK_FRAME void *this) {
  if (hamr_Drivers_UARTDriver_Impl_Bridge__is(CALLER this)) return (hamr_Drivers_UARTDriver_Impl_Bridge) this;
  fprintf(stderr, "Invalid case from %s to hamr.Drivers.UARTDriver_Impl_Bridge.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void hamr_Drivers_UARTDriver_Impl_Bridge_apply(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D recv_data, art_Port_45E54D MissionCommand, art_Port_45E54D send_data, art_Port_45E54D AirVehicleState_WPM, art_Port_45E54D AirVehicleState_UXAS);

#ifdef __cplusplus
}
#endif

#endif