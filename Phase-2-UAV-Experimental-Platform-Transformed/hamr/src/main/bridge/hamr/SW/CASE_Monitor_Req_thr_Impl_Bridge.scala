// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class CASE_Monitor_Req_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  observed: Port[Base_Types.Bits],
  reference_1: Port[Base_Types.Bits],
  alert: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(observed,
              reference_1,
              alert),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(observed,
                   reference_1),

    eventOuts = ISZ(alert)
  )

  val api : CASE_Monitor_Req_thr_Impl_Bridge.Api =
    CASE_Monitor_Req_thr_Impl_Bridge.Api(
      id,
      observed.id,
      reference_1.id,
      alert.id
    )

  val entryPoints : Bridge.EntryPoints =
    CASE_Monitor_Req_thr_Impl_Bridge.EntryPoints(
      id,

      observed.id,
      reference_1.id,
      alert.id,

      dispatchTriggers,

      CASE_Monitor_Req_thr_Impl_Impl(api)
    )
}

object CASE_Monitor_Req_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    observed_Id : Art.PortId,
    reference_1_Id : Art.PortId,
    alert_Id : Art.PortId) {

    def getobserved() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(observed_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port observed.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]()
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def getreference_1() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(reference_1_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port reference_1.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]()
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def sendalert(value : Base_Types.Bits) : Unit = {
      Art.putValue(alert_Id, Base_Types.Bits_Payload(value))
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
    CASE_Monitor_Req_thr_Impl_BridgeId : Art.BridgeId,

    observed_Id : Art.PortId,
    reference_1_Id : Art.PortId,
    alert_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : CASE_Monitor_Req_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(observed_Id,
                                              reference_1_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(alert_Id)

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