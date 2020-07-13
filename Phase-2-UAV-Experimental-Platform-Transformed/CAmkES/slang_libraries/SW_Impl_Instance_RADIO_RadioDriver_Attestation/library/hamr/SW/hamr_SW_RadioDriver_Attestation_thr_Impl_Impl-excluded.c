#include <all.h>

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_initialise_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Impl.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Impl", "initialise", 0);

  sfUpdateLoc(14);
  {
    hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logInfo_(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (String) string("Example info logging"));
  }

  sfUpdateLoc(15);
  {
    hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logDebug_(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (String) string("Example debug logging"));
  }

  sfUpdateLoc(16);
  {
    hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logError_(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (String) string("Example error logging"));
  }

  sfUpdateLoc(18);
  Option_30119F apiUsage_recv_data;
  DeclNewOption_30119F(t_0);
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_getrecv_data_(SF (Option_30119F) &t_0, hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this));
  apiUsage_recv_data = (Option_30119F) ((Option_30119F) &t_0);

  sfUpdateLoc(19);
  {
    DeclNewIS_C4F575(t_1);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
    hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendsend_data_(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_1));
  }

  sfUpdateLoc(20);
  {
    DeclNewIS_C4F575(t_2);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_2);
    hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendAutomationRequest_(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_2));
  }

  sfUpdateLoc(21);
  {
    DeclNewIS_C4F575(t_3);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_3);
    hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendOperatingRegion_(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_3));
  }

  sfUpdateLoc(22);
  {
    DeclNewIS_C4F575(t_4);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_4);
    hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendLineSearchTask_(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_4));
  }

  sfUpdateLoc(23);
  Option_30119F apiUsage_am_request;
  DeclNewOption_30119F(t_5);
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_getam_request_(SF (Option_30119F) &t_5, hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this));
  apiUsage_am_request = (Option_30119F) ((Option_30119F) &t_5);

  sfUpdateLoc(24);
  {
    DeclNewIS_C4F575(t_6);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_6);
    hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendam_response_(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_6));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_timeTriggered_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Impl.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Impl", "timeTriggered", 0);
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_finalise_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Impl.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Impl", "finalise", 0);
}