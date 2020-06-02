// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST.entryPoints
  val appPortId: Art.PortId = IPCPorts.MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val filter_inPortId: Art.PortId = Arch.MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST.filter_in.id
  val filter_inPortIdOpt: Option[Art.PortId] = Some(filter_inPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, filter_inPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {
    Platform.receiveAsync(filter_inPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(filter_inPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port filter_in.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    entryPoints.compute()
    Process.sleep(500)
  }

  def finalise(): Unit = {
    entryPoints.finalise()
  }

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    initialiseArchitecture(seed)

    Platform.receive(appPortIdOpt) // pause after setting up component

    initialise()

    Platform.receive(appPortIdOpt) // pause after component init

    println("MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST_App starting ...")

    ArtNix.timeDispatch()

    var terminated = F
    while (!terminated) {
      val termOpt = Platform.receiveAsync(appPortIdOpt)
      if (termOpt.isEmpty) {
        compute()
      } else {
        terminated = T
      }
    }
    exit()

    return 0
  }

  def exit(): Unit = {
    finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}