#ifndef SIREUM_H_hamr_SW_CASE_AttestationGate_thr_Impl_Impl
#define SIREUM_H_hamr_SW_CASE_AttestationGate_thr_Impl_Impl

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.SW.CASE_AttestationGate_thr_Impl_Impl

#define hamr_SW_CASE_AttestationGate_thr_Impl_Impl_api_(this) ((hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api) &(this)->api)

B hamr_SW_CASE_AttestationGate_thr_Impl_Impl__eq(hamr_SW_CASE_AttestationGate_thr_Impl_Impl this, hamr_SW_CASE_AttestationGate_thr_Impl_Impl other);
inline B hamr_SW_CASE_AttestationGate_thr_Impl_Impl__ne(hamr_SW_CASE_AttestationGate_thr_Impl_Impl this, hamr_SW_CASE_AttestationGate_thr_Impl_Impl other) {
  return !hamr_SW_CASE_AttestationGate_thr_Impl_Impl__eq(this, other);
};
void hamr_SW_CASE_AttestationGate_thr_Impl_Impl_string_(STACK_FRAME String result, hamr_SW_CASE_AttestationGate_thr_Impl_Impl this);
void hamr_SW_CASE_AttestationGate_thr_Impl_Impl_cprint(hamr_SW_CASE_AttestationGate_thr_Impl_Impl this, B isOut);

inline B hamr_SW_CASE_AttestationGate_thr_Impl_Impl__is(STACK_FRAME void* this) {
  return ((hamr_SW_CASE_AttestationGate_thr_Impl_Impl) this)->type == Thamr_SW_CASE_AttestationGate_thr_Impl_Impl;
}

inline hamr_SW_CASE_AttestationGate_thr_Impl_Impl hamr_SW_CASE_AttestationGate_thr_Impl_Impl__as(STACK_FRAME void *this) {
  if (hamr_SW_CASE_AttestationGate_thr_Impl_Impl__is(CALLER this)) return (hamr_SW_CASE_AttestationGate_thr_Impl_Impl) this;
  fprintf(stderr, "Invalid case from %s to hamr.SW.CASE_AttestationGate_thr_Impl_Impl.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Impl_apply(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Impl this, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api api);

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Impl_initialise_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Impl this);

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Impl_timeTriggered_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Impl this);

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Impl_finalise_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Impl this);

#ifdef __cplusplus
}
#endif

#endif