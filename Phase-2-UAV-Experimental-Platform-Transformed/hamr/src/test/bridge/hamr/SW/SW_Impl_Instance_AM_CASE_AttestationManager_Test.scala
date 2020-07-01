package hamr.SW

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// This file will not be overwritten so is safe to edit
class SW_Impl_Instance_AM_CASE_AttestationManager_Test extends BridgeTestSuite[CASE_AttestationManager_thr_Impl_Bridge](Arch.SW_Impl_Instance_AM_CASE_AttestationManager) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in EventDataPort
  def put_attestation_response(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.attestation_response_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out DataPort
  def get_trusted_ids(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_trusted_ids_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port trusted_ids.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out DataPort
  def get_trusted_ids_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.trusted_ids_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_attestation_request(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_attestation_request_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port attestation_request.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_attestation_request_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.attestation_request_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): CASE_AttestationManager_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[CASE_AttestationManager_thr_Impl_Bridge.EntryPoints].component
  }
}
