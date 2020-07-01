// #Sireum

package hamr.SW

import org.sireum._
import art._

@ext object CASE_AttestationManager_thr_Impl_seL4Nix {
  // send payload 'd' to components connected to seL4's trusted_ids port
  def trusted_ids_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's attestation_request port
  def attestation_request_Send(d: DataContent): Unit = $

  // returns T if seL4's attestation_response port is empty, F otherwise 
  def attestation_response_IsEmpty(): B = $

  // returns result of dequeuing seL4's attestation_response port 
  def attestation_response_Receive(): Option[DataContent] = $
}
