// #Sireum

package hamr.SW_OR

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class CASE_AttestationGate_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  OperatingRegion_out: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(OperatingRegion_out),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(),

    eventOuts = ISZ(OperatingRegion_out)
  )

  val api : CASE_AttestationGate_thr_Impl_Bridge.Api =
    CASE_AttestationGate_thr_Impl_Bridge.Api(
      id,
      OperatingRegion_out.id
    )

  val entryPoints : Bridge.EntryPoints =
    CASE_AttestationGate_thr_Impl_Bridge.EntryPoints(
      id,

      OperatingRegion_out.id,

      dispatchTriggers,

      CASE_AttestationGate_thr_Impl_Impl(api)
    )
}

object CASE_AttestationGate_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    OperatingRegion_out_Id : Art.PortId) {

    def sendOperatingRegion_out(value : Base_Types.Bits) : Unit = {
      Art.putValue(OperatingRegion_out_Id, Base_Types.Bits_Payload(value))
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
    CASE_AttestationGate_thr_Impl_BridgeId : Art.BridgeId,

    OperatingRegion_out_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : CASE_AttestationGate_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(OperatingRegion_out_Id)

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