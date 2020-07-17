// #Sireum

package hamr.SW_OR

import org.sireum._
import art._

@ext object CASE_AttestationGate_thr_Impl_seL4Nix {
  // send payload 'd' to components connected to seL4's OperatingRegion_out port
  def OperatingRegion_out_Send(d: DataContent): Unit = $
}
