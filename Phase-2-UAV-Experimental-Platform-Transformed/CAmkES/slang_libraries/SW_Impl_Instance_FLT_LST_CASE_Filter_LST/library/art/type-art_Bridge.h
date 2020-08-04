#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge

#include <type-hamr_SW_CASE_Filter_LST_thr_Impl_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct hamr_SW_CASE_Filter_LST_thr_Impl_Bridge hamr_SW_CASE_Filter_LST_thr_Impl_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#ifdef __cplusplus
}
#endif

#endif