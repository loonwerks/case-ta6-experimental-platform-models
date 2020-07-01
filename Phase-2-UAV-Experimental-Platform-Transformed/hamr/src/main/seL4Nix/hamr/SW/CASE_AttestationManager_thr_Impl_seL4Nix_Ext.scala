package hamr.SW

import org.sireum._
import art._

object CASE_AttestationManager_thr_Impl_seL4Nix_Ext {
  def trusted_ids_Send(d: DataContent): Unit = halt("stub")

  def attestation_request_Send(d: DataContent): Unit = halt("stub")

  def attestation_response_IsEmpty(): B = halt("stub")

  def attestation_response_Receive(): Option[DataContent] = halt("stub")
}
