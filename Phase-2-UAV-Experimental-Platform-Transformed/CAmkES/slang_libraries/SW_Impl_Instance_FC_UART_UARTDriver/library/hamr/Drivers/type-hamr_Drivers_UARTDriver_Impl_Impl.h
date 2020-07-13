#ifndef SIREUM_TYPE_H_hamr_Drivers_UARTDriver_Impl_Impl
#define SIREUM_TYPE_H_hamr_Drivers_UARTDriver_Impl_Impl

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.Drivers.UARTDriver_Impl_Impl
#include <type-hamr_Drivers_UARTDriver_Impl_Bridge_Api.h>

typedef struct hamr_Drivers_UARTDriver_Impl_Impl *hamr_Drivers_UARTDriver_Impl_Impl;
struct hamr_Drivers_UARTDriver_Impl_Impl {
  TYPE type;
  struct hamr_Drivers_UARTDriver_Impl_Bridge_Api api;
};

#define DeclNewhamr_Drivers_UARTDriver_Impl_Impl(x) struct hamr_Drivers_UARTDriver_Impl_Impl x = { .type = Thamr_Drivers_UARTDriver_Impl_Impl }

#ifdef __cplusplus
}
#endif

#endif