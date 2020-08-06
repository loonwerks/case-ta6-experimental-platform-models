// #Sireum

package hamr.SW_AUGUST

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class FlyZonesDatabase_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  keep_in_zones: Port[Base_Types.Bits],
  keep_out_zones: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(keep_in_zones,
              keep_out_zones),

    dataIns = ISZ(),

    dataOuts = ISZ(keep_in_zones,
                   keep_out_zones),

    eventIns = ISZ(),

    eventOuts = ISZ()
  )

  val api : FlyZonesDatabase_thr_Impl_Bridge.Api =
    FlyZonesDatabase_thr_Impl_Bridge.Api(
      id,
      keep_in_zones.id,
      keep_out_zones.id
    )

  val entryPoints : Bridge.EntryPoints =
    FlyZonesDatabase_thr_Impl_Bridge.EntryPoints(
      id,

      keep_in_zones.id,
      keep_out_zones.id,

      dispatchTriggers,

      FlyZonesDatabase_thr_Impl_Impl(api)
    )
}

object FlyZonesDatabase_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    keep_in_zones_Id : Art.PortId,
    keep_out_zones_Id : Art.PortId) {


    def setkeep_in_zones(value : Base_Types.Bits) : Unit = {
      Art.putValue(keep_in_zones_Id, Base_Types.Bits_Payload(value))
    }

    def setkeep_out_zones(value : Base_Types.Bits) : Unit = {
      Art.putValue(keep_out_zones_Id, Base_Types.Bits_Payload(value))
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
    FlyZonesDatabase_thr_Impl_BridgeId : Art.BridgeId,

    keep_in_zones_Id : Art.PortId,
    keep_out_zones_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : FlyZonesDatabase_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ(keep_in_zones_Id,
                                              keep_out_zones_Id)

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

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