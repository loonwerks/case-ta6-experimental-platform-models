// #Sireum

package hamr.SW_Impl_Instance_FC_UART_UARTDriver

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.Drivers.UARTDriver_Impl_seL4Nix

object UARTDriver extends App {

  val UARTDriverBridge : hamr.Drivers.UARTDriver_Impl_Bridge = {
    val recv_data = Port[Base_Types.Bits] (id = 0, name = "SW_Impl_Instance_FC_UART_UARTDriver_recv_data", mode = EventIn)
    val MissionCommand = Port[Base_Types.Bits] (id = 1, name = "SW_Impl_Instance_FC_UART_UARTDriver_MissionCommand", mode = EventIn)
    val send_data = Port[Base_Types.Bits] (id = 2, name = "SW_Impl_Instance_FC_UART_UARTDriver_send_data", mode = EventOut)
    val AirVehicleState_WPM = Port[Base_Types.Bits] (id = 3, name = "SW_Impl_Instance_FC_UART_UARTDriver_AirVehicleState_WPM", mode = EventOut)
    val AirVehicleState_UXAS = Port[Base_Types.Bits] (id = 4, name = "SW_Impl_Instance_FC_UART_UARTDriver_AirVehicleState_UXAS", mode = EventOut)

    hamr.Drivers.UARTDriver_Impl_Bridge(
      id = 0,
      name = "SW_Impl_Instance_FC_UART_UARTDriver",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      recv_data = recv_data,
      MissionCommand = MissionCommand,
      send_data = send_data,
      AirVehicleState_WPM = AirVehicleState_WPM,
      AirVehicleState_UXAS = AirVehicleState_UXAS
    )
  }

  val entryPoints: Bridge.EntryPoints = UARTDriverBridge.entryPoints
  val noData: Option[DataContent] = None()

  // recv_data: In EventDataPort Base_Types.Bits
  val recv_data_id: Art.PortId = UARTDriverBridge.recv_data.id
  var recv_data_port: Option[DataContent] = noData

  // MissionCommand: In EventDataPort Base_Types.Bits
  val MissionCommand_id: Art.PortId = UARTDriverBridge.MissionCommand.id
  var MissionCommand_port: Option[DataContent] = noData

  // send_data: Out EventDataPort Base_Types.Bits
  val send_data_id: Art.PortId = UARTDriverBridge.send_data.id
  var send_data_port: Option[DataContent] = noData

  // AirVehicleState_WPM: Out EventDataPort Base_Types.Bits
  val AirVehicleState_WPM_id: Art.PortId = UARTDriverBridge.AirVehicleState_WPM.id
  var AirVehicleState_WPM_port: Option[DataContent] = noData

  // AirVehicleState_UXAS: Out EventDataPort Base_Types.Bits
  val AirVehicleState_UXAS_id: Art.PortId = UARTDriverBridge.AirVehicleState_UXAS.id
  var AirVehicleState_UXAS_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == recv_data_id) {
      return recv_data_port
    } else if(portId == MissionCommand_id) {
      return MissionCommand_port
    } else {
      halt(s"Unexpected: UARTDriver.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    recv_data_port = UARTDriver_Impl_seL4Nix.recv_data_Receive()

    MissionCommand_port = UARTDriver_Impl_seL4Nix.MissionCommand_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == send_data_id) {
      send_data_port = Some(data)
    } else if(portId == AirVehicleState_WPM_id) {
      AirVehicleState_WPM_port = Some(data)
    } else if(portId == AirVehicleState_UXAS_id) {
      AirVehicleState_UXAS_port = Some(data)
    } else {
      halt(s"Unexpected: UARTDriver.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(send_data_port.nonEmpty) {
      UARTDriver_Impl_seL4Nix.send_data_Send(send_data_port.get)
      send_data_port = noData
    }

    if(AirVehicleState_WPM_port.nonEmpty) {
      UARTDriver_Impl_seL4Nix.AirVehicleState_WPM_Send(AirVehicleState_WPM_port.get)
      AirVehicleState_WPM_port = noData
    }

    if(AirVehicleState_UXAS_port.nonEmpty) {
      UARTDriver_Impl_seL4Nix.AirVehicleState_UXAS_Send(AirVehicleState_UXAS_port.get)
      AirVehicleState_UXAS_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (UARTDriverBridge),
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
