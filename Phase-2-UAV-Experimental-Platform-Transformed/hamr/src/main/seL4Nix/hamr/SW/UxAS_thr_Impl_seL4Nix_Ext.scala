package hamr.SW

import org.sireum._
import art._

object UxAS_thr_Impl_seL4Nix_Ext {
  def AutomationRequest_IsEmpty(): B = halt("stub")

  def AutomationRequest_Receive(): Option[DataContent] = halt("stub")

  def AirVehicleState_IsEmpty(): B = halt("stub")

  def AirVehicleState_Receive(): Option[DataContent] = halt("stub")

  def OperatingRegion_IsEmpty(): B = halt("stub")

  def OperatingRegion_Receive(): Option[DataContent] = halt("stub")

  def LineSearchTask_IsEmpty(): B = halt("stub")

  def LineSearchTask_Receive(): Option[DataContent] = halt("stub")

  def AutomationResponse_Send(d: DataContent): Unit = halt("stub")
}
