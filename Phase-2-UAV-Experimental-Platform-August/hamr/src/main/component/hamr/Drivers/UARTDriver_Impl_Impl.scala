// #Sireum

package hamr.Drivers

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
@record class UARTDriver_Impl_Impl (val api : UARTDriver_Impl_Bridge.Api) extends UARTDriver_Impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    val apiUsage_recv_data: Option[Base_Types.Bits] = api.getrecv_data()
    val apiUsage_MissionCommand: Option[Base_Types.Bits] = api.getMissionCommand()
    api.sendsend_data(Base_Types.Bits_empty())
    api.sendAirVehicleState_WPM(Base_Types.Bits_empty())
    api.sendAirVehicleState_UXAS(Base_Types.Bits_empty())
  }

  override def timeTriggered(): Unit = {
    // example override of timeTriggered
  }

  override def activate(): Unit = {
    // example override of activate
  }

  override def deactivate(): Unit = {
    // example override of deactivate
  }

  override def finalise(): Unit = {
    // example override of finalise
  }

  override def recover(): Unit = {
    // example override of recover
  }
}
