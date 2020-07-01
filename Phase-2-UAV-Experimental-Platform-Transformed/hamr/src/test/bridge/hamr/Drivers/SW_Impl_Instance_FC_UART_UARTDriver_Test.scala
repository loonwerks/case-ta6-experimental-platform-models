package hamr.Drivers

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// This file will not be overwritten so is safe to edit
class SW_Impl_Instance_FC_UART_UARTDriver_Test extends BridgeTestSuite[UARTDriver_Impl_Bridge](Arch.SW_Impl_Instance_FC_UART_UARTDriver) {
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
  def put_MissionCommand(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.MissionCommand_Id, Base_Types.Bits_Payload(value))
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
  def get_AirVehicleState_WPM(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AirVehicleState_WPM_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AirVehicleState_WPM.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AirVehicleState_WPM_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.AirVehicleState_WPM_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_AirVehicleState_UXAS(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AirVehicleState_UXAS_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AirVehicleState_UXAS.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AirVehicleState_UXAS_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.AirVehicleState_UXAS_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): UARTDriver_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[UARTDriver_Impl_Bridge.EntryPoints].component
  }
}
