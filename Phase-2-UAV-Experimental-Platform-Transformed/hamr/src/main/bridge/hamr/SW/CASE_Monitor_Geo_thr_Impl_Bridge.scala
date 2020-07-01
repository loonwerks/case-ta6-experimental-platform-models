// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class CASE_Monitor_Geo_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  keep_in_zones: Port[Base_Types.Bits],
  keep_out_zones: Port[Base_Types.Bits],
  observed: Port[Base_Types.Bits],
  output: Port[Base_Types.Bits],
  alert: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(keep_in_zones,
              keep_out_zones,
              observed,
              output,
              alert),

    dataIns = ISZ(keep_in_zones,
                  keep_out_zones),

    dataOuts = ISZ(),

    eventIns = ISZ(observed),

    eventOuts = ISZ(output,
                    alert)
  )

  val api : CASE_Monitor_Geo_thr_Impl_Bridge.Api =
    CASE_Monitor_Geo_thr_Impl_Bridge.Api(
      id,
      keep_in_zones.id,
      keep_out_zones.id,
      observed.id,
      output.id,
      alert.id
    )

  val entryPoints : Bridge.EntryPoints =
    CASE_Monitor_Geo_thr_Impl_Bridge.EntryPoints(
      id,

      keep_in_zones.id,
      keep_out_zones.id,
      observed.id,
      output.id,
      alert.id,

      dispatchTriggers,

      CASE_Monitor_Geo_thr_Impl_Impl(api)
    )
}

object CASE_Monitor_Geo_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    keep_in_zones_Id : Art.PortId,
    keep_out_zones_Id : Art.PortId,
    observed_Id : Art.PortId,
    output_Id : Art.PortId,
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

    def sendoutput(value : Base_Types.Bits) : Unit = {
      Art.putValue(output_Id, Base_Types.Bits_Payload(value))
    }

    def sendalert() : Unit = {
      Art.putValue(alert_Id, art.Empty())
    }

    def getkeep_in_zones() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(keep_in_zones_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port keep_in_zones.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]()
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def getkeep_out_zones() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(keep_out_zones_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port keep_out_zones.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]()
        case _ => None[Base_Types.Bits]()
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
    CASE_Monitor_Geo_thr_Impl_BridgeId : Art.BridgeId,

    keep_in_zones_Id : Art.PortId,
    keep_out_zones_Id : Art.PortId,
    observed_Id : Art.PortId,
    output_Id : Art.PortId,
    alert_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : CASE_Monitor_Geo_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ(keep_in_zones_Id,
                                             keep_out_zones_Id)

    val eventInPortIds: ISZ[Art.PortId] = ISZ(observed_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(output_Id,
                                               alert_Id)

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