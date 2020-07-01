package hamr.SW

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// This file will not be overwritten so is safe to edit
class SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_Test extends BridgeTestSuite[CASE_Monitor_Req_thr_Impl_Bridge](Arch.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in EventDataPort
  def put_observed(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.observed_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_reference_1(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.reference_1_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_alert(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_alert_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port alert.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_alert_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.alert_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): CASE_Monitor_Req_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[CASE_Monitor_Req_thr_Impl_Bridge.EntryPoints].component
  }
}
