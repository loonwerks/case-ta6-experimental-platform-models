#include <all.h>

Unit hamr_Drivers_UARTDriver_Impl_Impl_initialise_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Impl this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "hamr.Drivers.UARTDriver_Impl_Impl", "initialise", 0);

  sfUpdateLoc(14);
  {
    hamr_Drivers_UARTDriver_Impl_Bridge_Api_logInfo_(SF hamr_Drivers_UARTDriver_Impl_Impl_api_(this), (String) string("Example info logging"));
  }

  sfUpdateLoc(15);
  {
    hamr_Drivers_UARTDriver_Impl_Bridge_Api_logDebug_(SF hamr_Drivers_UARTDriver_Impl_Impl_api_(this), (String) string("Example debug logging"));
  }

  sfUpdateLoc(16);
  {
    hamr_Drivers_UARTDriver_Impl_Bridge_Api_logError_(SF hamr_Drivers_UARTDriver_Impl_Impl_api_(this), (String) string("Example error logging"));
  }

  sfUpdateLoc(18);
  Option_30119F apiUsage_recv_data;
  DeclNewOption_30119F(t_0);
  hamr_Drivers_UARTDriver_Impl_Bridge_Api_getrecv_data_(SF (Option_30119F) &t_0, hamr_Drivers_UARTDriver_Impl_Impl_api_(this));
  apiUsage_recv_data = (Option_30119F) ((Option_30119F) &t_0);

  sfUpdateLoc(19);
  Option_30119F apiUsage_MissionCommand;
  DeclNewOption_30119F(t_1);
  hamr_Drivers_UARTDriver_Impl_Bridge_Api_getMissionCommand_(SF (Option_30119F) &t_1, hamr_Drivers_UARTDriver_Impl_Impl_api_(this));
  apiUsage_MissionCommand = (Option_30119F) ((Option_30119F) &t_1);

  sfUpdateLoc(20);
  {
    DeclNewIS_C4F575(t_2);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_2);
    hamr_Drivers_UARTDriver_Impl_Bridge_Api_sendsend_data_(SF hamr_Drivers_UARTDriver_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_2));
  }

  sfUpdateLoc(21);
  {
    DeclNewIS_C4F575(t_3);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_3);
    hamr_Drivers_UARTDriver_Impl_Bridge_Api_sendAirVehicleState_WPM_(SF hamr_Drivers_UARTDriver_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_3));
  }

  sfUpdateLoc(22);
  {
    DeclNewIS_C4F575(t_4);
    hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_4);
    hamr_Drivers_UARTDriver_Impl_Bridge_Api_sendAirVehicleState_UXAS_(SF hamr_Drivers_UARTDriver_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_4));
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Impl_timeTriggered_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Impl this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "hamr.Drivers.UARTDriver_Impl_Impl", "timeTriggered", 0);
}

Unit hamr_Drivers_UARTDriver_Impl_Impl_finalise_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Impl this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "hamr.Drivers.UARTDriver_Impl_Impl", "finalise", 0);
}