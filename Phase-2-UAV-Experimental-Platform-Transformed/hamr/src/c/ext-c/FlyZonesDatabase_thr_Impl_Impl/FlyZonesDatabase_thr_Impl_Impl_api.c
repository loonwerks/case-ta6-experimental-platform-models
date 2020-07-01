#include <FlyZonesDatabase_thr_Impl_Impl_api.h>

// This file was auto-generated.  Do not edit

void api_send_keep_in_zones__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_setkeep_in_zones_(
    hamr_SW_FlyZonesDatabase_thr_Impl_Impl_api_(this),
    &t_0);
}

void api_send_keep_out_zones__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_setkeep_out_zones_(
    hamr_SW_FlyZonesDatabase_thr_Impl_Impl_api_(this),
    &t_0);
}

void api_logInfo__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  String str) {
  hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_logInfo_(
    SF
    hamr_SW_FlyZonesDatabase_thr_Impl_Impl_api_(this),
    str);
}

void api_logDebug__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  String str) {
  hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_logDebug_(
    SF
    hamr_SW_FlyZonesDatabase_thr_Impl_Impl_api_(this),
    str);
}

void api_logError__hamr_SW_FlyZonesDatabase_thr_Impl_Impl(
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl this,
  String str) {
  hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_logError_(
    SF
    hamr_SW_FlyZonesDatabase_thr_Impl_Impl_api_(this),
    str);
}
