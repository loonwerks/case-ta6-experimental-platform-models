#ifndef SIREUM_H_hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api
#define SIREUM_H_hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api

#define hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_id_(this) ((this)->id)
#define hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_observed_Id_(this) ((this)->observed_Id)
#define hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_reference_1_Id_(this) ((this)->reference_1_Id)
#define hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_alert_Id_(this) ((this)->alert_Id)

B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api__eq(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api other);
inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api__ne(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api other) {
  return !hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api__eq(this, other);
};
void hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this);
void hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_cprint(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, B isOut);

inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api__is(STACK_FRAME void* this) {
  return ((hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api) this)->type == Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api;
}

inline hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api__as(STACK_FRAME void *this) {
  if (hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api__is(CALLER this)) return (hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api) this;
  fprintf(stderr, "Invalid case from %s to hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, Z id, Z observed_Id, Z reference_1_Id, Z alert_Id);

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, String msg);

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, String msg);

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, String msg);

void hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getobserved_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this);

void hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_getreference_1_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this);

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api_sendalert_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api this, IS_C4F575 value);

#ifdef __cplusplus
}
#endif

#endif