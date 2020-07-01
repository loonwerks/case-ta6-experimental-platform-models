// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class CASE_Filter_LST_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  filter_in: Port[Base_Types.Bits],
  filter_out: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(filter_in,
              filter_out),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(filter_in),

    eventOuts = ISZ(filter_out)
  )

  val api : CASE_Filter_LST_thr_Impl_Bridge.Api =
    CASE_Filter_LST_thr_Impl_Bridge.Api(
      id,
      filter_in.id,
      filter_out.id
    )

  val entryPoints : Bridge.EntryPoints =
    CASE_Filter_LST_thr_Impl_Bridge.EntryPoints(
      id,

      filter_in.id,
      filter_out.id,

      dispatchTriggers,

      CASE_Filter_LST_thr_Impl_Impl(api)
    )
}

object CASE_Filter_LST_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    filter_in_Id : Art.PortId,
    filter_out_Id : Art.PortId) {

    def getfilter_in() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(filter_in_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) =>
          Art.logError(id, s"Unexpected payload on port filter_in.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]()
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def sendfilter_out(value : Base_Types.Bits) : Unit = {
      Art.putValue(filter_out_Id, Base_Types.Bits_Payload(value))
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
    CASE_Filter_LST_thr_Impl_BridgeId : Art.BridgeId,

    filter_in_Id : Art.PortId,
    filter_out_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : CASE_Filter_LST_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(filter_in_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(filter_out_Id)

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