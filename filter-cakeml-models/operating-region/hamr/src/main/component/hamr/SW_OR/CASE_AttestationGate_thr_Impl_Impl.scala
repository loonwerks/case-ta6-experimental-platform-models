// #Sireum

package hamr.SW_OR

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
@record class CASE_AttestationGate_thr_Impl_Impl (val api : CASE_AttestationGate_thr_Impl_Bridge.Api) extends CASE_AttestationGate_thr_Impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.sendOperatingRegion_out(Base_Types.Bits_empty())
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
