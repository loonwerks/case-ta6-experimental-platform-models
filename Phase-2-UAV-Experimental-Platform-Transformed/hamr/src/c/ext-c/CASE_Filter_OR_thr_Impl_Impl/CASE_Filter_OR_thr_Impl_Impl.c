#include <CASE_Filter_OR_thr_Impl_Impl_api.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit
U8 orFltOperatingRegion[256];

DeclNewString(_orFltMsg);
String orFltMsg = (String)&_orFltMsg;

Unit hamr_SW_CASE_Filter_OR_thr_Impl_Impl_initialise_(
  STACK_FRAME
  hamr_SW_CASE_Filter_OR_thr_Impl_Impl this) {
}

Unit hamr_SW_CASE_Filter_OR_thr_Impl_Impl_finalise_(
  STACK_FRAME
  hamr_SW_CASE_Filter_OR_thr_Impl_Impl this) {
   DeclNewString(_orFltMsg);
      String orFltMsg = (String)&_orFltMsg;
      String__append(orFltMsg, string("\n\tInitialize Filter OperatingRegion"));
      api_logInfo__hamr_SW_CASE_Filter_OR_thr_Impl_Impl(this, orFltMsg);
}

Unit hamr_SW_CASE_Filter_OR_thr_Impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_SW_CASE_Filter_OR_thr_Impl_Impl this) {
    size_t numBits = 0;
    bool isMsg = api_get_filter_in__hamr_SW_CASE_Filter_OR_thr_Impl_Impl(this, &numBits, orFltOperatingRegion);
    if (isMsg) {
      api_send_filter_out__hamr_SW_CASE_Filter_OR_thr_Impl_Impl(this, numBits, orFltOperatingRegion);
      DeclNewString(_orFltMsg);
      String orFltMsg = (String)&_orFltMsg;
      String__append(orFltMsg, string("\n\tsend OperatingRegion ("));
      Z_string_(orFltMsg, numBits / 8);
      String__append(orFltMsg, string(" bytes)"));
      api_logInfo__hamr_SW_CASE_Filter_OR_thr_Impl_Impl(this, orFltMsg);
    }
  }
