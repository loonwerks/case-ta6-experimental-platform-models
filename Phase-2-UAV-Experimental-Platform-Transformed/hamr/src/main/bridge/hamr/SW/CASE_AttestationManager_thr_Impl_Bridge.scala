// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class CASE_AttestationManager_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  trusted_ids: Port[Base_Types.Bits],
  attestation_request: Port[Base_Types.Bits],
  attestation_response: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(trusted_ids,
              attestation_request,
              attestation_response),

    dataIns = ISZ(),

    dataOuts = ISZ(trusted_ids),

    eventIns = ISZ(attestation_response),

    eventOuts = ISZ(attestation_request)
  )

  val api : CASE_AttestationManager_thr_Impl_Bridge.Api =
    CASE_AttestationManager_thr_Impl_Bridge.Api(
      id,
      trusted_ids.id,
      attestation_request.id,
      attestation_response.id
    )

  val entryPoints : Bridge.EntryPoints =
    CASE_AttestationManager_thr_Impl_Bridge.EntryPoints(
      id,

      trusted_ids.id,
      attestation_request.id,
      attestation_response.id,

      dispatchTriggers,

      CASE_AttestationManager_thr_Impl_Impl(api)
    )
}

object CASE_AttestationManager_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    trusted_ids_Id : Art.PortId,
    attestation_request_Id : Art.PortId,
    attestation_response_Id : Art.PortId) {

    def sendattestation_request(value : Base_Types.Bits) : Unit = {
      Art.putValue(attestation_request_Id, Base_Types.Bits_Payload(value))
    }

    def getattestation_response() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(attestation_response_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port attestation_response.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]()
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def settrusted_ids(value : Base_Types.Bits) : Unit = {
      Art.putValue(trusted_ids_Id, Base_Types.Bits_Payload(value))
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
    CASE_AttestationManager_thr_Impl_BridgeId : Art.BridgeId,

    trusted_ids_Id : Art.PortId,
    attestation_request_Id : Art.PortId,
    attestation_response_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : CASE_AttestationManager_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(attestation_response_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ(trusted_ids_Id)

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(attestation_request_Id)

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