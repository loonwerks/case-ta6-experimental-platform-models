// #Sireum

package hamr.Drivers

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class UARTDriver_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  recv_data: Port[Base_Types.Bits],
  MissionCommand: Port[Base_Types.Bits],
  send_data: Port[Base_Types.Bits],
  AirVehicleState_WPM: Port[Base_Types.Bits],
  AirVehicleState_UXAS: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(recv_data,
              MissionCommand,
              send_data,
              AirVehicleState_WPM,
              AirVehicleState_UXAS),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(recv_data,
                   MissionCommand),

    eventOuts = ISZ(send_data,
                    AirVehicleState_WPM,
                    AirVehicleState_UXAS)
  )

  val api : UARTDriver_Impl_Bridge.Api =
    UARTDriver_Impl_Bridge.Api(
      id,
      recv_data.id,
      MissionCommand.id,
      send_data.id,
      AirVehicleState_WPM.id,
      AirVehicleState_UXAS.id
    )

  val entryPoints : Bridge.EntryPoints =
    UARTDriver_Impl_Bridge.EntryPoints(
      id,

      recv_data.id,
      MissionCommand.id,
      send_data.id,
      AirVehicleState_WPM.id,
      AirVehicleState_UXAS.id,

      dispatchTriggers,

      UARTDriver_Impl_Impl(api)
    )
}

object UARTDriver_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    recv_data_Id : Art.PortId,
    MissionCommand_Id : Art.PortId,
    send_data_Id : Art.PortId,
    AirVehicleState_WPM_Id : Art.PortId,
    AirVehicleState_UXAS_Id : Art.PortId) {

    def getrecv_data() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(recv_data_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port recv_data.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]()
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def getMissionCommand() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(MissionCommand_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port MissionCommand.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]()
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def sendsend_data(value : Base_Types.Bits) : Unit = {
      Art.putValue(send_data_Id, Base_Types.Bits_Payload(value))
    }

    def sendAirVehicleState_WPM(value : Base_Types.Bits) : Unit = {
      Art.putValue(AirVehicleState_WPM_Id, Base_Types.Bits_Payload(value))
    }

    def sendAirVehicleState_UXAS(value : Base_Types.Bits) : Unit = {
      Art.putValue(AirVehicleState_UXAS_Id, Base_Types.Bits_Payload(value))
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
    UARTDriver_Impl_BridgeId : Art.BridgeId,

    recv_data_Id : Art.PortId,
    MissionCommand_Id : Art.PortId,
    send_data_Id : Art.PortId,
    AirVehicleState_WPM_Id : Art.PortId,
    AirVehicleState_UXAS_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : UARTDriver_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(recv_data_Id,
                                              MissionCommand_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(send_data_Id,
                                               AirVehicleState_WPM_Id,
                                               AirVehicleState_UXAS_Id)

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