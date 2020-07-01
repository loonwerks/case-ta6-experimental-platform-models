// #Sireum

package hamr.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW.CASE_Monitor_Geo_thr_Impl_seL4Nix

object CASE_Monitor_Geo extends App {

  val CASE_Monitor_GeoBridge : hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge = {
    val keep_in_zones = Port[Base_Types.Bits] (id = 0, name = "SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_keep_in_zones", mode = DataIn)
    val keep_out_zones = Port[Base_Types.Bits] (id = 1, name = "SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_keep_out_zones", mode = DataIn)
    val observed = Port[Base_Types.Bits] (id = 2, name = "SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_observed", mode = EventIn)
    val output = Port[Base_Types.Bits] (id = 3, name = "SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_output", mode = EventOut)
    val alert = Port[art.Empty] (id = 4, name = "SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_alert", mode = EventOut)

    hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge(
      id = 0,
      name = "SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      keep_in_zones = keep_in_zones,
      keep_out_zones = keep_out_zones,
      observed = observed,
      output = output,
      alert = alert
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_Monitor_GeoBridge.entryPoints
  val noData: Option[DataContent] = None()

  // keep_in_zones: In DataPort Base_Types.Bits
  val keep_in_zones_id: Art.PortId = CASE_Monitor_GeoBridge.keep_in_zones.id
  var keep_in_zones_port: Option[DataContent] = noData

  // keep_out_zones: In DataPort Base_Types.Bits
  val keep_out_zones_id: Art.PortId = CASE_Monitor_GeoBridge.keep_out_zones.id
  var keep_out_zones_port: Option[DataContent] = noData

  // observed: In EventDataPort Base_Types.Bits
  val observed_id: Art.PortId = CASE_Monitor_GeoBridge.observed.id
  var observed_port: Option[DataContent] = noData

  // output: Out EventDataPort Base_Types.Bits
  val output_id: Art.PortId = CASE_Monitor_GeoBridge.output.id
  var output_port: Option[DataContent] = noData

  // alert: Out EventPort art.Empty
  val alert_id: Art.PortId = CASE_Monitor_GeoBridge.alert.id
  var alert_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == keep_in_zones_id) {
      return keep_in_zones_port
    } else if(portId == keep_out_zones_id) {
      return keep_out_zones_port
    } else if(portId == observed_id) {
      return observed_port
    } else {
      halt(s"Unexpected: CASE_Monitor_Geo.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    keep_in_zones_port = CASE_Monitor_Geo_thr_Impl_seL4Nix.keep_in_zones_Receive()

    keep_out_zones_port = CASE_Monitor_Geo_thr_Impl_seL4Nix.keep_out_zones_Receive()

    observed_port = CASE_Monitor_Geo_thr_Impl_seL4Nix.observed_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == output_id) {
      output_port = Some(data)
    } else if(portId == alert_id) {
      alert_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_Monitor_Geo.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(output_port.nonEmpty) {
      CASE_Monitor_Geo_thr_Impl_seL4Nix.output_Send(output_port.get)
      output_port = noData
    }

    if(alert_port.nonEmpty) {
      CASE_Monitor_Geo_thr_Impl_seL4Nix.alert_Send(alert_port.get)
      alert_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (CASE_Monitor_GeoBridge),
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
