// #Sireum

package hamr.SW_Impl_Instance_UXAS_UxAS

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW.UxAS_thr_Impl_seL4Nix

object UxAS extends App {

  val UxASBridge : hamr.SW.UxAS_thr_Impl_Bridge = {
    val AutomationRequest = Port[Base_Types.Bits] (id = 0, name = "SW_Impl_Instance_UXAS_UxAS_AutomationRequest", mode = EventIn)
    val AirVehicleState = Port[Base_Types.Bits] (id = 1, name = "SW_Impl_Instance_UXAS_UxAS_AirVehicleState", mode = EventIn)
    val OperatingRegion = Port[Base_Types.Bits] (id = 2, name = "SW_Impl_Instance_UXAS_UxAS_OperatingRegion", mode = EventIn)
    val LineSearchTask = Port[Base_Types.Bits] (id = 3, name = "SW_Impl_Instance_UXAS_UxAS_LineSearchTask", mode = EventIn)
    val AutomationResponse = Port[Base_Types.Bits] (id = 4, name = "SW_Impl_Instance_UXAS_UxAS_AutomationResponse", mode = EventOut)

    hamr.SW.UxAS_thr_Impl_Bridge(
      id = 0,
      name = "SW_Impl_Instance_UXAS_UxAS",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AutomationRequest = AutomationRequest,
      AirVehicleState = AirVehicleState,
      OperatingRegion = OperatingRegion,
      LineSearchTask = LineSearchTask,
      AutomationResponse = AutomationResponse
    )
  }

  val entryPoints: Bridge.EntryPoints = UxASBridge.entryPoints
  val noData: Option[DataContent] = None()

  // AutomationRequest: In EventDataPort Base_Types.Bits
  val AutomationRequest_id: Art.PortId = UxASBridge.AutomationRequest.id
  var AutomationRequest_port: Option[DataContent] = noData

  // AirVehicleState: In EventDataPort Base_Types.Bits
  val AirVehicleState_id: Art.PortId = UxASBridge.AirVehicleState.id
  var AirVehicleState_port: Option[DataContent] = noData

  // OperatingRegion: In EventDataPort Base_Types.Bits
  val OperatingRegion_id: Art.PortId = UxASBridge.OperatingRegion.id
  var OperatingRegion_port: Option[DataContent] = noData

  // LineSearchTask: In EventDataPort Base_Types.Bits
  val LineSearchTask_id: Art.PortId = UxASBridge.LineSearchTask.id
  var LineSearchTask_port: Option[DataContent] = noData

  // AutomationResponse: Out EventDataPort Base_Types.Bits
  val AutomationResponse_id: Art.PortId = UxASBridge.AutomationResponse.id
  var AutomationResponse_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == AutomationRequest_id) {
      return AutomationRequest_port
    } else if(portId == AirVehicleState_id) {
      return AirVehicleState_port
    } else if(portId == OperatingRegion_id) {
      return OperatingRegion_port
    } else if(portId == LineSearchTask_id) {
      return LineSearchTask_port
    } else {
      halt(s"Unexpected: UxAS.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    AutomationRequest_port = UxAS_thr_Impl_seL4Nix.AutomationRequest_Receive()

    AirVehicleState_port = UxAS_thr_Impl_seL4Nix.AirVehicleState_Receive()

    OperatingRegion_port = UxAS_thr_Impl_seL4Nix.OperatingRegion_Receive()

    LineSearchTask_port = UxAS_thr_Impl_seL4Nix.LineSearchTask_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == AutomationResponse_id) {
      AutomationResponse_port = Some(data)
    } else {
      halt(s"Unexpected: UxAS.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(AutomationResponse_port.nonEmpty) {
      UxAS_thr_Impl_seL4Nix.AutomationResponse_Send(AutomationResponse_port.get)
      AutomationResponse_port = noData
    }
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
