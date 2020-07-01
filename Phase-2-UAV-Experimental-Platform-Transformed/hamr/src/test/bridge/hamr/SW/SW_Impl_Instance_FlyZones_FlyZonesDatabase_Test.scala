package hamr.SW

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// This file will not be overwritten so is safe to edit
class SW_Impl_Instance_FlyZones_FlyZonesDatabase_Test extends BridgeTestSuite[FlyZonesDatabase_thr_Impl_Bridge](Arch.SW_Impl_Instance_FlyZones_FlyZonesDatabase) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // getter for out DataPort
  def get_keep_in_zones(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_keep_in_zones_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port keep_in_zones.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out DataPort
  def get_keep_in_zones_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.keep_in_zones_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out DataPort
  def get_keep_out_zones(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_keep_out_zones_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port keep_out_zones.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out DataPort
  def get_keep_out_zones_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.keep_out_zones_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): FlyZonesDatabase_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[FlyZonesDatabase_thr_Impl_Bridge.EntryPoints].component
  }
}
