#include <UxAS_thr_Impl_Impl_api.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit
static U8 operatingRegion[256];

Unit hamr_SW_OR_UxAS_thr_Impl_Impl_initialise_(
  STACK_FRAME
  hamr_SW_OR_UxAS_thr_Impl_Impl this) {
 DeclNewStackFrame(caller, "UxAS_thr_Impl_Impl_api.c", "", "hamr_SW_OR_UxAS_thr_Impl_Impl_initialise_", 0);

}

Unit hamr_SW_OR_UxAS_thr_Impl_Impl_finalise_(
  STACK_FRAME
  hamr_SW_OR_UxAS_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Impl_api.c", "", "hamr_SW_OR_UxAS_thr_Impl_Impl_finalise_", 0);

  // example finalise method
}

Unit hamr_SW_OR_UxAS_thr_Impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_SW_OR_UxAS_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Impl_api.c", "", "hamr_SW_OR_UxAS_thr_Impl_Impl_timeTriggered_", 0);
  size_t numBits = 0;
  
  bool hasOperatingRegion = api_get_OperatingRegion__hamr_SW_OR_UxAS_thr_Impl_Impl(SF this, &numBits, operatingRegion);

  if (hasOperatingRegion) {
    DeclNewString(_msg);
    String msg = (String)&_msg;

    String__append(SF msg, string("\n\tsend operatingRegion ("));
    Z_string_(SF msg, numBits / 8);
    String__append(SF msg, string(" bytes)"));
    api_logInfo__hamr_SW_OR_UxAS_thr_Impl_Impl(SF this, msg);
  } else {
    api_logInfo__hamr_SW_OR_UxAS_thr_Impl_Impl(SF this, string("\n\tNo joy"));
  }
}
