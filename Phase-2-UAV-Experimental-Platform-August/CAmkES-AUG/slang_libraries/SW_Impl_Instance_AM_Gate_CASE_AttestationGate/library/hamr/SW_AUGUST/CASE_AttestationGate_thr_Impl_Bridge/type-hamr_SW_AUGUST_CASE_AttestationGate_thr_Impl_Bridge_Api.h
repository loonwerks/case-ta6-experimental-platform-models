#ifndef SIREUM_TYPE_H_hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api
#define SIREUM_TYPE_H_hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW_AUGUST.CASE_AttestationGate_thr_Impl_Bridge.Api

typedef struct hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api *hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api;
struct hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z trusted_ids_Id;
  Z AutomationRequest_in_Id;
  Z AutomationRequest_out_Id;
  Z OperatingRegion_in_Id;
  Z OperatingRegion_out_Id;
  Z LineSearchTask_in_Id;
  Z LineSearchTask_out_Id;
};

#define DeclNewhamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api(x) struct hamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api x = { .type = Thamr_SW_AUGUST_CASE_AttestationGate_thr_Impl_Bridge_Api }

#ifdef __cplusplus
}
#endif

#endif