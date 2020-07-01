package hamr.SW

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// This file will not be overwritten so is safe to edit
class SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_Test extends BridgeTestSuite[CASE_Monitor_Geo_thr_Impl_Bridge](Arch.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in DataPort
  def put_keep_in_zones(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.keep_in_zones_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in DataPort
  def put_keep_out_zones(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.keep_out_zones_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_observed(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.observed_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_output(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_output_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port output.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_output_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.output_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventPort
  def get_alert(): Option[art.Empty] = {
    val value: Option[art.Empty] = get_alert_payload() match {
      case Some(Empty()) => Some(Empty())
      case Some(v) => fail(s"Unexpected payload on port alert.  Expecting 'Empty' but received ${v}")
      case _ => None[art.Empty]()
    }
    return value
  }

  // payload getter for out EventPort
  def get_alert_payload(): Option[Empty] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.alert_Id).asInstanceOf[Option[Empty]]
  }

  def getComponent(): CASE_Monitor_Geo_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[CASE_Monitor_Geo_thr_Impl_Bridge.EntryPoints].component
  }
}
