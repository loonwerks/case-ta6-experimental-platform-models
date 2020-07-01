package hamr.SW

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// This file will not be overwritten so is safe to edit
class SW_Impl_Instance_RADIO_RadioDriver_Attestation_Test extends BridgeTestSuite[RadioDriver_Attestation_thr_Impl_Bridge](Arch.SW_Impl_Instance_RADIO_RadioDriver_Attestation) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in EventDataPort
  def put_recv_data(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.recv_data_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_am_request(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.am_request_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_send_data(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_send_data_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port send_data.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_send_data_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.send_data_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_AutomationRequest(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AutomationRequest_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AutomationRequest.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AutomationRequest_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.AutomationRequest_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_OperatingRegion(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_OperatingRegion_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port OperatingRegion.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_OperatingRegion_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.OperatingRegion_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_LineSearchTask(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_LineSearchTask_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port LineSearchTask.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_LineSearchTask_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.LineSearchTask_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_am_response(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_am_response_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port am_response.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_am_response_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.am_response_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): RadioDriver_Attestation_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints].component
  }
}
