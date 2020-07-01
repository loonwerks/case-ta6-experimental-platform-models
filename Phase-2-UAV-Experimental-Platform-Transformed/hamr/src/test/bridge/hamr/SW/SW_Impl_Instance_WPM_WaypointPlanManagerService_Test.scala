package hamr.SW

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// This file will not be overwritten so is safe to edit
class SW_Impl_Instance_WPM_WaypointPlanManagerService_Test extends BridgeTestSuite[WaypointPlanManagerService_thr_Impl_Bridge](Arch.SW_Impl_Instance_WPM_WaypointPlanManagerService) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in EventDataPort
  def put_AutomationResponse(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.AutomationResponse_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_AirVehicleState(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.AirVehicleState_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventPort
  def put_ReturnHome(): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.ReturnHome_Id, Empty())
  }

  // getter for out EventDataPort
  def get_MissionCommand(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_MissionCommand_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port MissionCommand.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_MissionCommand_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.MissionCommand_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): WaypointPlanManagerService_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[WaypointPlanManagerService_thr_Impl_Bridge.EntryPoints].component
  }
}
