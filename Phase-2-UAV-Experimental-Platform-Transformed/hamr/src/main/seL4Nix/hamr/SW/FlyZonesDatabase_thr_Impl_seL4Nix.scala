// #Sireum

package hamr.SW

import org.sireum._
import art._

@ext object FlyZonesDatabase_thr_Impl_seL4Nix {
  // send payload 'd' to components connected to seL4's keep_in_zones port
  def keep_in_zones_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's keep_out_zones port
  def keep_out_zones_Send(d: DataContent): Unit = $
}
