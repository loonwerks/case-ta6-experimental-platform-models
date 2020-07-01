// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class WaypointPlanManagerService_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  AutomationResponse: Port[Base_Types.Bits],
  AirVehicleState: Port[Base_Types.Bits],
  MissionCommand: Port[Base_Types.Bits],
  ReturnHome: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(AutomationResponse,
              AirVehicleState,
              MissionCommand,
              ReturnHome),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(AutomationResponse,
                   AirVehicleState,
                   ReturnHome),

    eventOuts = ISZ(MissionCommand)
  )

  val api : WaypointPlanManagerService_thr_Impl_Bridge.Api =
    WaypointPlanManagerService_thr_Impl_Bridge.Api(
      id,
      AutomationResponse.id,
      AirVehicleState.id,
      MissionCommand.id,
      ReturnHome.id
    )

  val entryPoints : Bridge.EntryPoints =
    WaypointPlanManagerService_thr_Impl_Bridge.EntryPoints(
      id,

      AutomationResponse.id,
      AirVehicleState.id,
      MissionCommand.id,
      ReturnHome.id,

      dispatchTriggers,

      WaypointPlanManagerService_thr_Impl_Impl(api)
    )
}

object WaypointPlanManagerService_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    AutomationResponse_Id : Art.PortId,
    AirVehicleState_Id : Art.PortId,
    MissionCommand_Id : Art.PortId,
    ReturnHome_Id : Art.PortId) {

    def getAutomationResponse() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(AutomationResponse_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port AutomationResponse.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]()
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def getAirVehicleState() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(AirVehicleState_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port AirVehicleState.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]()
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def sendMissionCommand(value : Base_Types.Bits) : Unit = {
      Art.putValue(MissionCommand_Id, Base_Types.Bits_Payload(value))
    }

    def getReturnHome() : Option[art.Empty] = {
      val value : Option[art.Empty] = Art.getValue(ReturnHome_Id) match {
        case Some(Empty()) => Some(Empty())
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port ReturnHome.  Expecting 'Empty' but received ${v}")
          None[art.Empty]()
        case _ => None[art.Empty]()
      }
      return value
    }


    def logInfo(msg: String): Unit = {
      Art.logInfo(id, msg)
    }

    def logDebug(msg: String): Unit = {
      Art.logDebug(id, msg)
    }

    def logError(msg: String): Unit = {
      Art.logError(id, msg)
    }
  }

  @record class EntryPoints(
    WaypointPlanManagerService_thr_Impl_BridgeId : Art.BridgeId,

    AutomationResponse_Id : Art.PortId,
    AirVehicleState_Id : Art.PortId,
    MissionCommand_Id : Art.PortId,
    ReturnHome_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : WaypointPlanManagerService_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(AutomationResponse_Id,
                                              AirVehicleState_Id,
                                              ReturnHome_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(MissionCommand_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered()
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered()
      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate: Unit = {
      component.activate()
    }

    def deactivate: Unit = {
      component.deactivate()
    }

    def finalise: Unit = {
      component.finalise()
    }

    def initialise: Unit = {
      component.initialise()
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover: Unit = {
      component.recover()
    }
  }
}