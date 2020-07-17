package hamr.SW_OR

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// This file will not be overwritten so is safe to edit
class SW_Impl_Instance_AM_Gate_CASE_AttestationGate_Test extends BridgeTestSuite[CASE_AttestationGate_thr_Impl_Bridge](Arch.SW_Impl_Instance_AM_Gate_CASE_AttestationGate) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // getter for out EventDataPort
  def get_OperatingRegion_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_OperatingRegion_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port OperatingRegion_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_OperatingRegion_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.OperatingRegion_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): CASE_AttestationGate_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[CASE_AttestationGate_thr_Impl_Bridge.EntryPoints].component
  }
}
