#include <all.h>

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_initialise_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Impl.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Impl", "initialise", 0);

  sfUpdateLoc(14);
  {
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_logInfo_(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (String) string("Example info logging"));
  }

  sfUpdateLoc(15);
  {
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_logDebug_(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (String) string("Example debug logging"));
  }

  sfUpdateLoc(16);
  {
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_logError_(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (String) string("Example error logging"));
  }

  sfUpdateLoc(18);
  {
    DeclNewIS_C4F575(t_0);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_0);
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_settrusted_ids_(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_0));
  }

  sfUpdateLoc(19);
  Option_30119F apiUsage_recv_data;
  DeclNewOption_30119F(t_1);
  hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_getrecv_data_(SF (Option_30119F) &t_1, hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_api_(this));
  apiUsage_recv_data = (Option_30119F) ((Option_30119F) &t_1);

  sfUpdateLoc(20);
  {
    DeclNewIS_C4F575(t_2);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_2);
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendsend_data_(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_2));
  }

  sfUpdateLoc(21);
  {
    DeclNewIS_C4F575(t_3);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_3);
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendAutomationRequest_(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_3));
  }

  sfUpdateLoc(22);
  {
    DeclNewIS_C4F575(t_4);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_4);
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendOperatingRegion_(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_4));
  }

  sfUpdateLoc(23);
  {
    DeclNewIS_C4F575(t_5);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_5);
    hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendLineSearchTask_(SF hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_5));
  }
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_timeTriggered_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Impl.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Impl", "timeTriggered", 0);
}

Unit hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl_finalise_(STACK_FRAME hamr_SW_AUGUST_RadioDriver_Attestation_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Impl.scala", "hamr.SW_AUGUST.RadioDriver_Attestation_thr_Impl_Impl", "finalise", 0);
}