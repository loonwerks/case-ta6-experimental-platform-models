#ifndef SIREUM_TYPE_H_hamr_SW_OR_UxAS_thr_Impl_Bridge_Api
#define SIREUM_TYPE_H_hamr_SW_OR_UxAS_thr_Impl_Bridge_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW_OR.UxAS_thr_Impl_Bridge.Api

typedef struct hamr_SW_OR_UxAS_thr_Impl_Bridge_Api *hamr_SW_OR_UxAS_thr_Impl_Bridge_Api;
struct hamr_SW_OR_UxAS_thr_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z OperatingRegion_Id;
};

#define DeclNewhamr_SW_OR_UxAS_thr_Impl_Bridge_Api(x) struct hamr_SW_OR_UxAS_thr_Impl_Bridge_Api x = { .type = Thamr_SW_OR_UxAS_thr_Impl_Bridge_Api }

#ifdef __cplusplus
}
#endif

#endif