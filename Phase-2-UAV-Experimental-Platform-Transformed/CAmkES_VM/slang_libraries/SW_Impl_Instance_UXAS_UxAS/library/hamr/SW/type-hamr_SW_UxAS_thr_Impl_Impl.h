#ifndef SIREUM_TYPE_H_hamr_SW_UxAS_thr_Impl_Impl
#define SIREUM_TYPE_H_hamr_SW_UxAS_thr_Impl_Impl

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW.UxAS_thr_Impl_Impl
#include <type-hamr_SW_UxAS_thr_Impl_Bridge_Api.h>

typedef struct hamr_SW_UxAS_thr_Impl_Impl *hamr_SW_UxAS_thr_Impl_Impl;
struct hamr_SW_UxAS_thr_Impl_Impl {
  TYPE type;
  struct hamr_SW_UxAS_thr_Impl_Bridge_Api api;
};

#define DeclNewhamr_SW_UxAS_thr_Impl_Impl(x) struct hamr_SW_UxAS_thr_Impl_Impl x = { .type = Thamr_SW_UxAS_thr_Impl_Impl }

#ifdef __cplusplus
}
#endif

#endif