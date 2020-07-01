// #Sireum

package hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW.CASE_Monitor_Req_thr_Impl_seL4Nix

object CASE_Monitor_Req extends App {

  val CASE_Monitor_ReqBridge : hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge = {
    val observed = Port[Base_Types.Bits] (id = 0, name = "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_observed", mode = EventIn)
    val reference_1 = Port[Base_Types.Bits] (id = 1, name = "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_reference_1", mode = EventIn)
    val alert = Port[Base_Types.Bits] (id = 2, name = "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_alert", mode = EventOut)

    hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge(
      id = 0,
      name = "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      observed = observed,
      reference_1 = reference_1,
      alert = alert
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_Monitor_ReqBridge.entryPoints
  val noData: Option[DataContent] = None()

  // observed: In EventDataPort Base_Types.Bits
  val observed_id: Art.PortId = CASE_Monitor_ReqBridge.observed.id
  var observed_port: Option[DataContent] = noData

  // reference_1: In EventDataPort Base_Types.Bits
  val reference_1_id: Art.PortId = CASE_Monitor_ReqBridge.reference_1.id
  var reference_1_port: Option[DataContent] = noData

  // alert: Out EventDataPort Base_Types.Bits
  val alert_id: Art.PortId = CASE_Monitor_ReqBridge.alert.id
  var alert_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == observed_id) {
      return observed_port
    } else if(portId == reference_1_id) {
      return reference_1_port
    } else {
      halt(s"Unexpected: CASE_Monitor_Req.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    observed_port = CASE_Monitor_Req_thr_Impl_seL4Nix.observed_Receive()

    reference_1_port = CASE_Monitor_Req_thr_Impl_seL4Nix.reference_1_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == alert_id) {
      alert_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_Monitor_Req.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(alert_port.nonEmpty) {
      CASE_Monitor_Req_thr_Impl_seL4Nix.alert_Send(alert_port.get)
      alert_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (CASE_Monitor_ReqBridge),
      connections = ISZ ()
    )
    Art.run(ad)
  }

  def initialiseEntryPoint(): Unit = { entryPoints.initialise() }

  def computeEntryPoint(): Unit = { entryPoints.compute() }

  def finaliseEntryPoint(): Unit = { entryPoints.finalise() }

  def main(args: ISZ[String]): Z = {

    // need to touch the following for transpiler
    initialiseArchitecture()
    initialiseEntryPoint()
    computeEntryPoint()
    finaliseEntryPoint()

    // touch each payload/type in case some are only used as a field in a record
    def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

    printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_empty()))
    printDataContent(art.Empty())

    return 0
  }

  def logInfo(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(title)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}
