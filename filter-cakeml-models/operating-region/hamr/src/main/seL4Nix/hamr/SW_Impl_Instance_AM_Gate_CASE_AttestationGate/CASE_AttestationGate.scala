// #Sireum

package hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW_OR.CASE_AttestationGate_thr_Impl_seL4Nix

object CASE_AttestationGate extends App {

  val CASE_AttestationGateBridge : hamr.SW_OR.CASE_AttestationGate_thr_Impl_Bridge = {
    val OperatingRegion_out = Port[Base_Types.Bits] (id = 0, name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate_OperatingRegion_out", mode = EventOut)

    hamr.SW_OR.CASE_AttestationGate_thr_Impl_Bridge(
      id = 0,
      name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      OperatingRegion_out = OperatingRegion_out
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_AttestationGateBridge.entryPoints
  val noData: Option[DataContent] = None()

  // OperatingRegion_out: Out EventDataPort Base_Types.Bits
  val OperatingRegion_out_id: Art.PortId = CASE_AttestationGateBridge.OperatingRegion_out.id
  var OperatingRegion_out_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    halt(s"Unexpected: CASE_AttestationGate.getValue called with: ${portId}")
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == OperatingRegion_out_id) {
      OperatingRegion_out_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_AttestationGate.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(OperatingRegion_out_port.nonEmpty) {
      CASE_AttestationGate_thr_Impl_seL4Nix.OperatingRegion_out_Send(OperatingRegion_out_port.get)
      OperatingRegion_out_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (CASE_AttestationGateBridge),
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
