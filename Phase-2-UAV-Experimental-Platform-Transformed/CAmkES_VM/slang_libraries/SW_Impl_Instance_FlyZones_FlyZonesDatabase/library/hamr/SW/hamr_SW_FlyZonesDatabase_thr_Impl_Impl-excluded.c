#include <all.h>

Unit hamr_SW_FlyZonesDatabase_thr_Impl_Impl_initialise_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Impl.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Impl", "initialise", 0);

  sfUpdateLoc(14);
  {
    hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_logInfo_(SF hamr_SW_FlyZonesDatabase_thr_Impl_Impl_api_(this), (String) string("Example info logging"));
  }

  sfUpdateLoc(15);
  {
    hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_logDebug_(SF hamr_SW_FlyZonesDatabase_thr_Impl_Impl_api_(this), (String) string("Example debug logging"));
  }

  sfUpdateLoc(16);
  {
    hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_logError_(SF hamr_SW_FlyZonesDatabase_thr_Impl_Impl_api_(this), (String) string("Example error logging"));
  }

  sfUpdateLoc(18);
  {
    DeclNewIS_C4F575(t_0);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_0);
    hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_setkeep_in_zones_(SF hamr_SW_FlyZonesDatabase_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_0));
  }

  sfUpdateLoc(19);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_setkeep_out_zones_(SF hamr_SW_FlyZonesDatabase_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_1));
  }
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_Impl_timeTriggered_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Impl.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Impl", "timeTriggered", 0);
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_Impl_finalise_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Impl.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Impl", "finalise", 0);
}