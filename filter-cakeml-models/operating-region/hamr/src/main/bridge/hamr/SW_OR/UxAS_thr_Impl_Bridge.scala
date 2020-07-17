// #Sireum

package hamr.SW_OR

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class UxAS_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  OperatingRegion: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(OperatingRegion),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(OperatingRegion),

    eventOuts = ISZ()
  )

  val api : UxAS_thr_Impl_Bridge.Api =
    UxAS_thr_Impl_Bridge.Api(
      id,
      OperatingRegion.id
    )

  val entryPoints : Bridge.EntryPoints =
    UxAS_thr_Impl_Bridge.EntryPoints(
      id,

      OperatingRegion.id,

      dispatchTriggers,

      UxAS_thr_Impl_Impl(api)
    )
}

object UxAS_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    OperatingRegion_Id : Art.PortId) {

    def getOperatingRegion() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(OperatingRegion_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port OperatingRegion.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
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
    UxAS_thr_Impl_BridgeId : Art.BridgeId,

    OperatingRegion_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : UxAS_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(OperatingRegion_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

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