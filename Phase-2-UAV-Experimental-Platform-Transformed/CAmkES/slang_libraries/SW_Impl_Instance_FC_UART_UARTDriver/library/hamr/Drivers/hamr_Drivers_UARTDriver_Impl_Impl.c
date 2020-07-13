#include <all.h>

// hamr.Drivers.UARTDriver_Impl_Impl

B hamr_Drivers_UARTDriver_Impl_Impl__eq(hamr_Drivers_UARTDriver_Impl_Impl this, hamr_Drivers_UARTDriver_Impl_Impl other) {
  if (hamr_Drivers_UARTDriver_Impl_Bridge_Api__ne((hamr_Drivers_UARTDriver_Impl_Bridge_Api) &this->api, (hamr_Drivers_UARTDriver_Impl_Bridge_Api) &other->api)) return F;
  return T;
}

B hamr_Drivers_UARTDriver_Impl_Impl__ne(hamr_Drivers_UARTDriver_Impl_Impl this, hamr_Drivers_UARTDriver_Impl_Impl other);

void hamr_Drivers_UARTDriver_Impl_Impl_string_(STACK_FRAME String result, hamr_Drivers_UARTDriver_Impl_Impl this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "hamr.Drivers.UARTDriver_Impl_Impl", "string", 0);
  String_string_(SF result, string("UARTDriver_Impl_Impl("));
  hamr_Drivers_UARTDriver_Impl_Bridge_Api_string_(SF result, (hamr_Drivers_UARTDriver_Impl_Bridge_Api) &this->api);
  String_string_(SF result, string(")"));
}

void hamr_Drivers_UARTDriver_Impl_Impl_cprint(hamr_Drivers_UARTDriver_Impl_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("UARTDriver_Impl_Impl("), isOut);
  hamr_Drivers_UARTDriver_Impl_Bridge_Api_cprint((hamr_Drivers_UARTDriver_Impl_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_Drivers_UARTDriver_Impl_Impl__is(STACK_FRAME void* this);
hamr_Drivers_UARTDriver_Impl_Impl hamr_Drivers_UARTDriver_Impl_Impl__as(STACK_FRAME void *this);

void hamr_Drivers_UARTDriver_Impl_Impl_apply(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Impl this, hamr_Drivers_UARTDriver_Impl_Bridge_Api api) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "hamr.Drivers.UARTDriver_Impl_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct hamr_Drivers_UARTDriver_Impl_Bridge_Api));
}