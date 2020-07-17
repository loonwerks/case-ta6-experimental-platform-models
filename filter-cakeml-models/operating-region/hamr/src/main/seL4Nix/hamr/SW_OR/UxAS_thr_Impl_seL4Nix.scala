// #Sireum

package hamr.SW_OR

import org.sireum._
import art._

@ext object UxAS_thr_Impl_seL4Nix {
  // returns T if seL4's OperatingRegion port is empty, F otherwise 
  def OperatingRegion_IsEmpty(): B = $

  // returns result of dequeuing seL4's OperatingRegion port 
  def OperatingRegion_Receive(): Option[DataContent] = $
}
