#ifndef SIREUM_H_hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api
#define SIREUM_H_hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api

#define hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_id_(this) ((this)->id)
#define hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_filter_in_Id_(this) ((this)->filter_in_Id)
#define hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_filter_out_Id_(this) ((this)->filter_out_Id)

B hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api__eq(hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api other);
inline B hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api__ne(hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api other) {
  return !hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api__eq(this, other);
};
void hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this);
void hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_cprint(hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, B isOut);

inline B hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api__is(STACK_FRAME void* this) {
  return ((hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api) this)->type == Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api;
}

inline hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api__as(STACK_FRAME void *this) {
  if (hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api__is(CALLER this)) return (hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api) this;
  fprintf(stderr, "Invalid case from %s to hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, Z id, Z filter_in_Id, Z filter_out_Id);

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, String msg);

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, String msg);

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, String msg);

void hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_getfilter_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this);

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api_sendfilter_out_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api this, IS_C4F575 value);

#ifdef __cplusplus
}
#endif

#endif