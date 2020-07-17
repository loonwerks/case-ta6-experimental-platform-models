// #Sireum

package hamr

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val SW_Impl_Instance_UXAS_UxAS : hamr.SW_OR.UxAS_thr_Impl_Bridge = {
    val OperatingRegion = Port[Base_Types.Bits] (id = 0, name = "SW_Impl_Instance_UXAS_UxAS_OperatingRegion", mode = EventIn)

    hamr.SW_OR.UxAS_thr_Impl_Bridge(
      id = 0,
      name = "SW_Impl_Instance_UXAS_UxAS",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      OperatingRegion = OperatingRegion
    )
  }
  val SW_Impl_Instance_AM_Gate_CASE_AttestationGate : hamr.SW_OR.CASE_AttestationGate_thr_Impl_Bridge = {
    val OperatingRegion_out = Port[Base_Types.Bits] (id = 1, name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate_OperatingRegion_out", mode = EventOut)

    hamr.SW_OR.CASE_AttestationGate_thr_Impl_Bridge(
      id = 1,
      name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      OperatingRegion_out = OperatingRegion_out
    )
  }
  val SW_Impl_Instance_FLT_OR_CASE_Filter_OR : hamr.SW_OR.CASE_Filter_OR_thr_Impl_Bridge = {
    val filter_in = Port[Base_Types.Bits] (id = 2, name = "SW_Impl_Instance_FLT_OR_CASE_Filter_OR_filter_in", mode = EventIn)
    val filter_out = Port[Base_Types.Bits] (id = 3, name = "SW_Impl_Instance_FLT_OR_CASE_Filter_OR_filter_out", mode = EventOut)

    hamr.SW_OR.CASE_Filter_OR_thr_Impl_Bridge(
      id = 2,
      name = "SW_Impl_Instance_FLT_OR_CASE_Filter_OR",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      filter_in = filter_in,
      filter_out = filter_out
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (SW_Impl_Instance_UXAS_UxAS, SW_Impl_Instance_AM_Gate_CASE_AttestationGate, SW_Impl_Instance_FLT_OR_CASE_Filter_OR),

      connections = ISZ (Connection(from = SW_Impl_Instance_AM_Gate_CASE_AttestationGate.OperatingRegion_out, to = SW_Impl_Instance_FLT_OR_CASE_Filter_OR.filter_in),
                         Connection(from = SW_Impl_Instance_FLT_OR_CASE_Filter_OR.filter_out, to = SW_Impl_Instance_UXAS_UxAS.OperatingRegion))
    )
  }
}