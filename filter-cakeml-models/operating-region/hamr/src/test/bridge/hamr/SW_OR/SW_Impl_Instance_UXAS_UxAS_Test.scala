package hamr.SW_OR

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// This file will not be overwritten so is safe to edit
class SW_Impl_Instance_UXAS_UxAS_Test extends BridgeTestSuite[UxAS_thr_Impl_Bridge](Arch.SW_Impl_Instance_UXAS_UxAS) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in EventDataPort
  def put_OperatingRegion(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.OperatingRegion_Id, Base_Types.Bits_Payload(value))
  }

  def getComponent(): UxAS_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[UxAS_thr_Impl_Bridge.EntryPoints].component
  }
}
