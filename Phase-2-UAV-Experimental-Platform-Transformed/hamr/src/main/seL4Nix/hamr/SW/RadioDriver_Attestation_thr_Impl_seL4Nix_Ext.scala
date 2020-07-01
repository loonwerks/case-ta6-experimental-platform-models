package hamr.SW

import org.sireum._
import art._

object RadioDriver_Attestation_thr_Impl_seL4Nix_Ext {
  def recv_data_IsEmpty(): B = halt("stub")

  def recv_data_Receive(): Option[DataContent] = halt("stub")

  def send_data_Send(d: DataContent): Unit = halt("stub")

  def AutomationRequest_Send(d: DataContent): Unit = halt("stub")

  def OperatingRegion_Send(d: DataContent): Unit = halt("stub")

  def LineSearchTask_Send(d: DataContent): Unit = halt("stub")

  def am_request_IsEmpty(): B = halt("stub")

  def am_request_Receive(): Option[DataContent] = halt("stub")

  def am_response_Send(d: DataContent): Unit = halt("stub")
}
