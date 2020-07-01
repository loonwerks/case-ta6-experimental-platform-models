// #Sireum

package hamr.SW

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
@record class WaypointPlanManagerService_thr_Impl_Impl (val api : WaypointPlanManagerService_thr_Impl_Bridge.Api) extends WaypointPlanManagerService_thr_Impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    val apiUsage_AutomationResponse: Option[Base_Types.Bits] = api.getAutomationResponse()
    val apiUsage_AirVehicleState: Option[Base_Types.Bits] = api.getAirVehicleState()
    api.sendMissionCommand(Base_Types.Bits_empty())
    val apiUsage_ReturnHome: Option[art.Empty] = api.getReturnHome()
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
