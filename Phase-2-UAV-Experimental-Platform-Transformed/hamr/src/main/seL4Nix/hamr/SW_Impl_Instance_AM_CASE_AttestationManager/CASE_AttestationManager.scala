// #Sireum

package hamr.SW_Impl_Instance_AM_CASE_AttestationManager

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW.CASE_AttestationManager_thr_Impl_seL4Nix

object CASE_AttestationManager extends App {

  val CASE_AttestationManagerBridge : hamr.SW.CASE_AttestationManager_thr_Impl_Bridge = {
    val trusted_ids = Port[Base_Types.Bits] (id = 0, name = "SW_Impl_Instance_AM_CASE_AttestationManager_trusted_ids", mode = DataOut)
    val attestation_request = Port[Base_Types.Bits] (id = 1, name = "SW_Impl_Instance_AM_CASE_AttestationManager_attestation_request", mode = EventOut)
    val attestation_response = Port[Base_Types.Bits] (id = 2, name = "SW_Impl_Instance_AM_CASE_AttestationManager_attestation_response", mode = EventIn)

    hamr.SW.CASE_AttestationManager_thr_Impl_Bridge(
      id = 0,
      name = "SW_Impl_Instance_AM_CASE_AttestationManager",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      trusted_ids = trusted_ids,
      attestation_request = attestation_request,
      attestation_response = attestation_response
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_AttestationManagerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // trusted_ids: Out DataPort Base_Types.Bits
  val trusted_ids_id: Art.PortId = CASE_AttestationManagerBridge.trusted_ids.id
  var trusted_ids_port: Option[DataContent] = noData

  // attestation_request: Out EventDataPort Base_Types.Bits
  val attestation_request_id: Art.PortId = CASE_AttestationManagerBridge.attestation_request.id
  var attestation_request_port: Option[DataContent] = noData

  // attestation_response: In EventDataPort Base_Types.Bits
  val attestation_response_id: Art.PortId = CASE_AttestationManagerBridge.attestation_response.id
  var attestation_response_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == attestation_response_id) {
      return attestation_response_port
    } else {
      halt(s"Unexpected: CASE_AttestationManager.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    attestation_response_port = CASE_AttestationManager_thr_Impl_seL4Nix.attestation_response_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == trusted_ids_id) {
      trusted_ids_port = Some(data)
    } else if(portId == attestation_request_id) {
      attestation_request_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_AttestationManager.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(trusted_ids_port.nonEmpty) {
      CASE_AttestationManager_thr_Impl_seL4Nix.trusted_ids_Send(trusted_ids_port.get)
      trusted_ids_port = noData
    }

    if(attestation_request_port.nonEmpty) {
      CASE_AttestationManager_thr_Impl_seL4Nix.attestation_request_Send(attestation_request_port.get)
      attestation_request_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (CASE_AttestationManagerBridge),
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
