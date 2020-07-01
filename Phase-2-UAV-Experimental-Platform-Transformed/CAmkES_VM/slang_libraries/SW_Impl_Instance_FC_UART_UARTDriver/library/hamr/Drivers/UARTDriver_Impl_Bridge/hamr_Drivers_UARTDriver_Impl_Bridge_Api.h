#ifndef SIREUM_H_hamr_Drivers_UARTDriver_Impl_Bridge_Api
#define SIREUM_H_hamr_Drivers_UARTDriver_Impl_Bridge_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.Drivers.UARTDriver_Impl_Bridge.Api

#define hamr_Drivers_UARTDriver_Impl_Bridge_Api_id_(this) ((this)->id)
#define hamr_Drivers_UARTDriver_Impl_Bridge_Api_recv_data_Id_(this) ((this)->recv_data_Id)
#define hamr_Drivers_UARTDriver_Impl_Bridge_Api_MissionCommand_Id_(this) ((this)->MissionCommand_Id)
#define hamr_Drivers_UARTDriver_Impl_Bridge_Api_send_data_Id_(this) ((this)->send_data_Id)
#define hamr_Drivers_UARTDriver_Impl_Bridge_Api_AirVehicleState_WPM_Id_(this) ((this)->AirVehicleState_WPM_Id)
#define hamr_Drivers_UARTDriver_Impl_Bridge_Api_AirVehicleState_UXAS_Id_(this) ((this)->AirVehicleState_UXAS_Id)

B hamr_Drivers_UARTDriver_Impl_Bridge_Api__eq(hamr_Drivers_UARTDriver_Impl_Bridge_Api this, hamr_Drivers_UARTDriver_Impl_Bridge_Api other);
inline B hamr_Drivers_UARTDriver_Impl_Bridge_Api__ne(hamr_Drivers_UARTDriver_Impl_Bridge_Api this, hamr_Drivers_UARTDriver_Impl_Bridge_Api other) {
  return !hamr_Drivers_UARTDriver_Impl_Bridge_Api__eq(this, other);
};
void hamr_Drivers_UARTDriver_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_Drivers_UARTDriver_Impl_Bridge_Api this);
void hamr_Drivers_UARTDriver_Impl_Bridge_Api_cprint(hamr_Drivers_UARTDriver_Impl_Bridge_Api this, B isOut);

inline B hamr_Drivers_UARTDriver_Impl_Bridge_Api__is(STACK_FRAME void* this) {
  return ((hamr_Drivers_UARTDriver_Impl_Bridge_Api) this)->type == Thamr_Drivers_UARTDriver_Impl_Bridge_Api;
}

inline hamr_Drivers_UARTDriver_Impl_Bridge_Api hamr_Drivers_UARTDriver_Impl_Bridge_Api__as(STACK_FRAME void *this) {
  if (hamr_Drivers_UARTDriver_Impl_Bridge_Api__is(CALLER this)) return (hamr_Drivers_UARTDriver_Impl_Bridge_Api) this;
  fprintf(stderr, "Invalid case from %s to hamr.Drivers.UARTDriver_Impl_Bridge.Api.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void hamr_Drivers_UARTDriver_Impl_Bridge_Api_apply(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, Z id, Z recv_data_Id, Z MissionCommand_Id, Z send_data_Id, Z AirVehicleState_WPM_Id, Z AirVehicleState_UXAS_Id);

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, String msg);

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, String msg);

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_logError_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, String msg);

void hamr_Drivers_UARTDriver_Impl_Bridge_Api_getrecv_data_(STACK_FRAME Option_30119F result, hamr_Drivers_UARTDriver_Impl_Bridge_Api this);

void hamr_Drivers_UARTDriver_Impl_Bridge_Api_getMissionCommand_(STACK_FRAME Option_30119F result, hamr_Drivers_UARTDriver_Impl_Bridge_Api this);

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_sendsend_data_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, IS_C4F575 value);

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_sendAirVehicleState_WPM_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, IS_C4F575 value);

Unit hamr_Drivers_UARTDriver_Impl_Bridge_Api_sendAirVehicleState_UXAS_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_Api this, IS_C4F575 value);

#ifdef __cplusplus
}
#endif

#endif