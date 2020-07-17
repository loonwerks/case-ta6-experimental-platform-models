// #Sireum

package hamr.SW_Impl_Instance_UXAS_UxAS

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW_OR.UxAS_thr_Impl_seL4Nix

object UxAS extends App {

  val UxASBridge : hamr.SW_OR.UxAS_thr_Impl_Bridge = {
    val OperatingRegion = Port[Base_Types.Bits] (id = 0, name = "SW_Impl_Instance_UXAS_UxAS_OperatingRegion", mode = EventIn)

    hamr.SW_OR.UxAS_thr_Impl_Bridge(
      id = 0,
      name = "SW_Impl_Instance_UXAS_UxAS",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      OperatingRegion = OperatingRegion
    )
  }

  val entryPoints: Bridge.EntryPoints = UxASBridge.entryPoints
  val noData: Option[DataContent] = None()

  // OperatingRegion: In EventDataPort Base_Types.Bits
  val OperatingRegion_id: Art.PortId = UxASBridge.OperatingRegion.id
  var OperatingRegion_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == OperatingRegion_id) {
      return OperatingRegion_port
    } else {
      halt(s"Unexpected: UxAS.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    OperatingRegion_port = UxAS_thr_Impl_seL4Nix.OperatingRegion_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    halt(s"Unexpected: UxAS.putValue called with: ${portId}")
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (UxASBridge),
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
