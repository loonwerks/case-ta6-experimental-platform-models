#ifndef SIREUM_H_hamr_Drivers_UARTDriver_Impl_Impl
#define SIREUM_H_hamr_Drivers_UARTDriver_Impl_Impl

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.Drivers.UARTDriver_Impl_Impl

#define hamr_Drivers_UARTDriver_Impl_Impl_api_(this) ((hamr_Drivers_UARTDriver_Impl_Bridge_Api) &(this)->api)

B hamr_Drivers_UARTDriver_Impl_Impl__eq(hamr_Drivers_UARTDriver_Impl_Impl this, hamr_Drivers_UARTDriver_Impl_Impl other);
inline B hamr_Drivers_UARTDriver_Impl_Impl__ne(hamr_Drivers_UARTDriver_Impl_Impl this, hamr_Drivers_UARTDriver_Impl_Impl other) {
  return !hamr_Drivers_UARTDriver_Impl_Impl__eq(this, other);
};
void hamr_Drivers_UARTDriver_Impl_Impl_string_(STACK_FRAME String result, hamr_Drivers_UARTDriver_Impl_Impl this);
void hamr_Drivers_UARTDriver_Impl_Impl_cprint(hamr_Drivers_UARTDriver_Impl_Impl this, B isOut);

inline B hamr_Drivers_UARTDriver_Impl_Impl__is(STACK_FRAME void* this) {
  return ((hamr_Drivers_UARTDriver_Impl_Impl) this)->type == Thamr_Drivers_UARTDriver_Impl_Impl;
}

inline hamr_Drivers_UARTDriver_Impl_Impl hamr_Drivers_UARTDriver_Impl_Impl__as(STACK_FRAME void *this) {
  if (hamr_Drivers_UARTDriver_Impl_Impl__is(CALLER this)) return (hamr_Drivers_UARTDriver_Impl_Impl) this;
  fprintf(stderr, "Invalid case from %s to hamr.Drivers.UARTDriver_Impl_Impl.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void hamr_Drivers_UARTDriver_Impl_Impl_apply(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Impl this, hamr_Drivers_UARTDriver_Impl_Bridge_Api api);

Unit hamr_Drivers_UARTDriver_Impl_Impl_initialise_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Impl this);

Unit hamr_Drivers_UARTDriver_Impl_Impl_timeTriggered_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Impl this);

Unit hamr_Drivers_UARTDriver_Impl_Impl_finalise_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Impl this);

#ifdef __cplusplus
}
#endif

#endif