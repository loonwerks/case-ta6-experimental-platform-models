// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class RadioDriver_Attestation_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  recv_data: Port[Base_Types.Bits],
  send_data: Port[Base_Types.Bits],
  AutomationRequest: Port[Base_Types.Bits],
  OperatingRegion: Port[Base_Types.Bits],
  LineSearchTask: Port[Base_Types.Bits],
  am_request: Port[Base_Types.Bits],
  am_response: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(recv_data,
              send_data,
              AutomationRequest,
              OperatingRegion,
              LineSearchTask,
              am_request,
              am_response),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(recv_data,
                   am_request),

    eventOuts = ISZ(send_data,
                    AutomationRequest,
                    OperatingRegion,
                    LineSearchTask,
                    am_response)
  )

  val api : RadioDriver_Attestation_thr_Impl_Bridge.Api =
    RadioDriver_Attestation_thr_Impl_Bridge.Api(
      id,
      recv_data.id,
      send_data.id,
      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id,
      am_request.id,
      am_response.id
    )

  val entryPoints : Bridge.EntryPoints =
    RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints(
      id,

      recv_data.id,
      send_data.id,
      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id,
      am_request.id,
      am_response.id,

      dispatchTriggers,

      RadioDriver_Attestation_thr_Impl_Impl(api)
    )
}

object RadioDriver_Attestation_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    recv_data_Id : Art.PortId,
    send_data_Id : Art.PortId,
    AutomationRequest_Id : Art.PortId,
    OperatingRegion_Id : Art.PortId,
    LineSearchTask_Id : Art.PortId,
    am_request_Id : Art.PortId,
    am_response_Id : Art.PortId) {

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

    def sendsend_data(value : Base_Types.Bits) : Unit = {
      Art.putValue(send_data_Id, Base_Types.Bits_Payload(value))
    }

    def sendAutomationRequest(value : Base_Types.Bits) : Unit = {
      Art.putValue(AutomationRequest_Id, Base_Types.Bits_Payload(value))
    }

    def sendOperatingRegion(value : Base_Types.Bits) : Unit = {
      Art.putValue(OperatingRegion_Id, Base_Types.Bits_Payload(value))
    }

    def sendLineSearchTask(value : Base_Types.Bits) : Unit = {
      Art.putValue(LineSearchTask_Id, Base_Types.Bits_Payload(value))
    }

    def getam_request() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(am_request_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port am_request.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]()
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def sendam_response(value : Base_Types.Bits) : Unit = {
      Art.putValue(am_response_Id, Base_Types.Bits_Payload(value))
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
    RadioDriver_Attestation_thr_Impl_BridgeId : Art.BridgeId,

    recv_data_Id : Art.PortId,
    send_data_Id : Art.PortId,
    AutomationRequest_Id : Art.PortId,
    OperatingRegion_Id : Art.PortId,
    LineSearchTask_Id : Art.PortId,
    am_request_Id : Art.PortId,
    am_response_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : RadioDriver_Attestation_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(recv_data_Id,
                                              am_request_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(send_data_Id,
                                               AutomationRequest_Id,
                                               OperatingRegion_Id,
                                               LineSearchTask_Id,
                                               am_response_Id)

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