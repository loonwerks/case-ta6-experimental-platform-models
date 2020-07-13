// #Sireum

package hamr

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val SW_Impl_Instance_FC_UART_UARTDriver : hamr.Drivers.UARTDriver_Impl_Bridge = {
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
  val SW_Impl_Instance_RADIO_RadioDriver_Attestation : hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge = {
    val recv_data = Port[Base_Types.Bits] (id = 5, name = "SW_Impl_Instance_RADIO_RadioDriver_Attestation_recv_data", mode = EventIn)
    val send_data = Port[Base_Types.Bits] (id = 6, name = "SW_Impl_Instance_RADIO_RadioDriver_Attestation_send_data", mode = EventOut)
    val AutomationRequest = Port[Base_Types.Bits] (id = 7, name = "SW_Impl_Instance_RADIO_RadioDriver_Attestation_AutomationRequest", mode = EventOut)
    val OperatingRegion = Port[Base_Types.Bits] (id = 8, name = "SW_Impl_Instance_RADIO_RadioDriver_Attestation_OperatingRegion", mode = EventOut)
    val LineSearchTask = Port[Base_Types.Bits] (id = 9, name = "SW_Impl_Instance_RADIO_RadioDriver_Attestation_LineSearchTask", mode = EventOut)
    val am_request = Port[Base_Types.Bits] (id = 10, name = "SW_Impl_Instance_RADIO_RadioDriver_Attestation_am_request", mode = EventIn)
    val am_response = Port[Base_Types.Bits] (id = 11, name = "SW_Impl_Instance_RADIO_RadioDriver_Attestation_am_response", mode = EventOut)

    hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge(
      id = 1,
      name = "SW_Impl_Instance_RADIO_RadioDriver_Attestation",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      recv_data = recv_data,
      send_data = send_data,
      AutomationRequest = AutomationRequest,
      OperatingRegion = OperatingRegion,
      LineSearchTask = LineSearchTask,
      am_request = am_request,
      am_response = am_response
    )
  }
  val SW_Impl_Instance_FlyZones_FlyZonesDatabase : hamr.SW.FlyZonesDatabase_thr_Impl_Bridge = {
    val keep_in_zones = Port[Base_Types.Bits] (id = 12, name = "SW_Impl_Instance_FlyZones_FlyZonesDatabase_keep_in_zones", mode = DataOut)
    val keep_out_zones = Port[Base_Types.Bits] (id = 13, name = "SW_Impl_Instance_FlyZones_FlyZonesDatabase_keep_out_zones", mode = DataOut)

    hamr.SW.FlyZonesDatabase_thr_Impl_Bridge(
      id = 2,
      name = "SW_Impl_Instance_FlyZones_FlyZonesDatabase",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      keep_in_zones = keep_in_zones,
      keep_out_zones = keep_out_zones
    )
  }
  val SW_Impl_Instance_UXAS_UxAS : hamr.SW.UxAS_thr_Impl_Bridge = {
    val AutomationRequest = Port[Base_Types.Bits] (id = 14, name = "SW_Impl_Instance_UXAS_UxAS_AutomationRequest", mode = EventIn)
    val AirVehicleState = Port[Base_Types.Bits] (id = 15, name = "SW_Impl_Instance_UXAS_UxAS_AirVehicleState", mode = EventIn)
    val OperatingRegion = Port[Base_Types.Bits] (id = 16, name = "SW_Impl_Instance_UXAS_UxAS_OperatingRegion", mode = EventIn)
    val LineSearchTask = Port[Base_Types.Bits] (id = 17, name = "SW_Impl_Instance_UXAS_UxAS_LineSearchTask", mode = EventIn)
    val AutomationResponse = Port[Base_Types.Bits] (id = 18, name = "SW_Impl_Instance_UXAS_UxAS_AutomationResponse", mode = EventOut)

    hamr.SW.UxAS_thr_Impl_Bridge(
      id = 3,
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
  val SW_Impl_Instance_WPM_WaypointPlanManagerService : hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge = {
    val AutomationResponse = Port[Base_Types.Bits] (id = 19, name = "SW_Impl_Instance_WPM_WaypointPlanManagerService_AutomationResponse", mode = EventIn)
    val AirVehicleState = Port[Base_Types.Bits] (id = 20, name = "SW_Impl_Instance_WPM_WaypointPlanManagerService_AirVehicleState", mode = EventIn)
    val MissionCommand = Port[Base_Types.Bits] (id = 21, name = "SW_Impl_Instance_WPM_WaypointPlanManagerService_MissionCommand", mode = EventOut)
    val ReturnHome = Port[art.Empty] (id = 22, name = "SW_Impl_Instance_WPM_WaypointPlanManagerService_ReturnHome", mode = EventIn)

    hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge(
      id = 4,
      name = "SW_Impl_Instance_WPM_WaypointPlanManagerService",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AutomationResponse = AutomationResponse,
      AirVehicleState = AirVehicleState,
      MissionCommand = MissionCommand,
      ReturnHome = ReturnHome
    )
  }
  val SW_Impl_Instance_AM_CASE_AttestationManager : hamr.SW.CASE_AttestationManager_thr_Impl_Bridge = {
    val trusted_ids = Port[Base_Types.Bits] (id = 23, name = "SW_Impl_Instance_AM_CASE_AttestationManager_trusted_ids", mode = DataOut)
    val attestation_request = Port[Base_Types.Bits] (id = 24, name = "SW_Impl_Instance_AM_CASE_AttestationManager_attestation_request", mode = EventOut)
    val attestation_response = Port[Base_Types.Bits] (id = 25, name = "SW_Impl_Instance_AM_CASE_AttestationManager_attestation_response", mode = EventIn)

    hamr.SW.CASE_AttestationManager_thr_Impl_Bridge(
      id = 5,
      name = "SW_Impl_Instance_AM_CASE_AttestationManager",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      trusted_ids = trusted_ids,
      attestation_request = attestation_request,
      attestation_response = attestation_response
    )
  }
  val SW_Impl_Instance_AM_Gate_CASE_AttestationGate : hamr.SW.CASE_AttestationGate_thr_Impl_Bridge = {
    val trusted_ids = Port[Base_Types.Bits] (id = 26, name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate_trusted_ids", mode = DataIn)
    val AutomationRequest_in = Port[Base_Types.Bits] (id = 27, name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate_AutomationRequest_in", mode = EventIn)
    val AutomationRequest_out = Port[Base_Types.Bits] (id = 28, name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate_AutomationRequest_out", mode = EventOut)
    val OperatingRegion_in = Port[Base_Types.Bits] (id = 29, name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate_OperatingRegion_in", mode = EventIn)
    val OperatingRegion_out = Port[Base_Types.Bits] (id = 30, name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate_OperatingRegion_out", mode = EventOut)
    val LineSearchTask_in = Port[Base_Types.Bits] (id = 31, name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate_LineSearchTask_in", mode = EventIn)
    val LineSearchTask_out = Port[Base_Types.Bits] (id = 32, name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate_LineSearchTask_out", mode = EventOut)

    hamr.SW.CASE_AttestationGate_thr_Impl_Bridge(
      id = 6,
      name = "SW_Impl_Instance_AM_Gate_CASE_AttestationGate",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      trusted_ids = trusted_ids,
      AutomationRequest_in = AutomationRequest_in,
      AutomationRequest_out = AutomationRequest_out,
      OperatingRegion_in = OperatingRegion_in,
      OperatingRegion_out = OperatingRegion_out,
      LineSearchTask_in = LineSearchTask_in,
      LineSearchTask_out = LineSearchTask_out
    )
  }
  val SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq : hamr.SW.CASE_Filter_AReq_thr_Impl_Bridge = {
    val filter_in = Port[Base_Types.Bits] (id = 33, name = "SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_filter_in", mode = EventIn)
    val filter_out_UXAS = Port[Base_Types.Bits] (id = 34, name = "SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_filter_out_UXAS", mode = EventOut)
    val filter_out_MON_REQ = Port[Base_Types.Bits] (id = 35, name = "SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_filter_out_MON_REQ", mode = EventOut)

    hamr.SW.CASE_Filter_AReq_thr_Impl_Bridge(
      id = 7,
      name = "SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      filter_in = filter_in,
      filter_out_UXAS = filter_out_UXAS,
      filter_out_MON_REQ = filter_out_MON_REQ
    )
  }
  val SW_Impl_Instance_FLT_OR_CASE_Filter_OR : hamr.SW.CASE_Filter_OR_thr_Impl_Bridge = {
    val filter_in = Port[Base_Types.Bits] (id = 36, name = "SW_Impl_Instance_FLT_OR_CASE_Filter_OR_filter_in", mode = EventIn)
    val filter_out = Port[Base_Types.Bits] (id = 37, name = "SW_Impl_Instance_FLT_OR_CASE_Filter_OR_filter_out", mode = EventOut)

    hamr.SW.CASE_Filter_OR_thr_Impl_Bridge(
      id = 8,
      name = "SW_Impl_Instance_FLT_OR_CASE_Filter_OR",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      filter_in = filter_in,
      filter_out = filter_out
    )
  }
  val SW_Impl_Instance_FLT_LST_CASE_Filter_LST : hamr.SW.CASE_Filter_LST_thr_Impl_Bridge = {
    val filter_in = Port[Base_Types.Bits] (id = 38, name = "SW_Impl_Instance_FLT_LST_CASE_Filter_LST_filter_in", mode = EventIn)
    val filter_out = Port[Base_Types.Bits] (id = 39, name = "SW_Impl_Instance_FLT_LST_CASE_Filter_LST_filter_out", mode = EventOut)

    hamr.SW.CASE_Filter_LST_thr_Impl_Bridge(
      id = 9,
      name = "SW_Impl_Instance_FLT_LST_CASE_Filter_LST",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      filter_in = filter_in,
      filter_out = filter_out
    )
  }
  val SW_Impl_Instance_MON_REQ_CASE_Monitor_Req : hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge = {
    val observed = Port[Base_Types.Bits] (id = 40, name = "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_observed", mode = EventIn)
    val reference_1 = Port[Base_Types.Bits] (id = 41, name = "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_reference_1", mode = EventIn)
    val alert = Port[Base_Types.Bits] (id = 42, name = "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_alert", mode = EventOut)

    hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge(
      id = 10,
      name = "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      observed = observed,
      reference_1 = reference_1,
      alert = alert
    )
  }
  val SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes : hamr.SW.CASE_Filter_ARes_thr_Impl_Bridge = {
    val filter_in = Port[Base_Types.Bits] (id = 43, name = "SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_filter_in", mode = EventIn)
    val filter_out_MON_GEO = Port[Base_Types.Bits] (id = 44, name = "SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_filter_out_MON_GEO", mode = EventOut)
    val filter_out_MON_REQ = Port[Base_Types.Bits] (id = 45, name = "SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_filter_out_MON_REQ", mode = EventOut)

    hamr.SW.CASE_Filter_ARes_thr_Impl_Bridge(
      id = 11,
      name = "SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      filter_in = filter_in,
      filter_out_MON_GEO = filter_out_MON_GEO,
      filter_out_MON_REQ = filter_out_MON_REQ
    )
  }
  val SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo : hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge = {
    val keep_in_zones = Port[Base_Types.Bits] (id = 46, name = "SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_keep_in_zones", mode = DataIn)
    val keep_out_zones = Port[Base_Types.Bits] (id = 47, name = "SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_keep_out_zones", mode = DataIn)
    val observed = Port[Base_Types.Bits] (id = 48, name = "SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_observed", mode = EventIn)
    val output = Port[Base_Types.Bits] (id = 49, name = "SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_output", mode = EventOut)
    val alert = Port[art.Empty] (id = 50, name = "SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_alert", mode = EventOut)

    hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge(
      id = 12,
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

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (SW_Impl_Instance_FC_UART_UARTDriver, SW_Impl_Instance_RADIO_RadioDriver_Attestation, SW_Impl_Instance_FlyZones_FlyZonesDatabase, SW_Impl_Instance_UXAS_UxAS, SW_Impl_Instance_WPM_WaypointPlanManagerService, SW_Impl_Instance_AM_CASE_AttestationManager, SW_Impl_Instance_AM_Gate_CASE_AttestationGate, SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq, SW_Impl_Instance_FLT_OR_CASE_Filter_OR, SW_Impl_Instance_FLT_LST_CASE_Filter_LST, SW_Impl_Instance_MON_REQ_CASE_Monitor_Req, SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes, SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo),

      connections = ISZ (Connection(from = SW_Impl_Instance_FC_UART_UARTDriver.AirVehicleState_WPM, to = SW_Impl_Instance_WPM_WaypointPlanManagerService.AirVehicleState),
                         Connection(from = SW_Impl_Instance_FC_UART_UARTDriver.AirVehicleState_UXAS, to = SW_Impl_Instance_UXAS_UxAS.AirVehicleState),
                         Connection(from = SW_Impl_Instance_RADIO_RadioDriver_Attestation.AutomationRequest, to = SW_Impl_Instance_AM_Gate_CASE_AttestationGate.AutomationRequest_in),
                         Connection(from = SW_Impl_Instance_RADIO_RadioDriver_Attestation.OperatingRegion, to = SW_Impl_Instance_AM_Gate_CASE_AttestationGate.OperatingRegion_in),
                         Connection(from = SW_Impl_Instance_RADIO_RadioDriver_Attestation.LineSearchTask, to = SW_Impl_Instance_AM_Gate_CASE_AttestationGate.LineSearchTask_in),
                         Connection(from = SW_Impl_Instance_RADIO_RadioDriver_Attestation.am_response, to = SW_Impl_Instance_AM_CASE_AttestationManager.attestation_response),
                         Connection(from = SW_Impl_Instance_FlyZones_FlyZonesDatabase.keep_in_zones, to = SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.keep_in_zones),
                         Connection(from = SW_Impl_Instance_FlyZones_FlyZonesDatabase.keep_out_zones, to = SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.keep_out_zones),
                         Connection(from = SW_Impl_Instance_UXAS_UxAS.AutomationResponse, to = SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes.filter_in),
                         Connection(from = SW_Impl_Instance_WPM_WaypointPlanManagerService.MissionCommand, to = SW_Impl_Instance_FC_UART_UARTDriver.MissionCommand),
                         Connection(from = SW_Impl_Instance_AM_CASE_AttestationManager.trusted_ids, to = SW_Impl_Instance_AM_Gate_CASE_AttestationGate.trusted_ids),
                         Connection(from = SW_Impl_Instance_AM_CASE_AttestationManager.attestation_request, to = SW_Impl_Instance_RADIO_RadioDriver_Attestation.am_request),
                         Connection(from = SW_Impl_Instance_AM_Gate_CASE_AttestationGate.AutomationRequest_out, to = SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq.filter_in),
                         Connection(from = SW_Impl_Instance_AM_Gate_CASE_AttestationGate.OperatingRegion_out, to = SW_Impl_Instance_FLT_OR_CASE_Filter_OR.filter_in),
                         Connection(from = SW_Impl_Instance_AM_Gate_CASE_AttestationGate.LineSearchTask_out, to = SW_Impl_Instance_FLT_LST_CASE_Filter_LST.filter_in),
                         Connection(from = SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq.filter_out_UXAS, to = SW_Impl_Instance_UXAS_UxAS.AutomationRequest),
                         Connection(from = SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq.filter_out_MON_REQ, to = SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.reference_1),
                         Connection(from = SW_Impl_Instance_FLT_OR_CASE_Filter_OR.filter_out, to = SW_Impl_Instance_UXAS_UxAS.OperatingRegion),
                         Connection(from = SW_Impl_Instance_FLT_LST_CASE_Filter_LST.filter_out, to = SW_Impl_Instance_UXAS_UxAS.LineSearchTask),
                         Connection(from = SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes.filter_out_MON_GEO, to = SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.observed),
                         Connection(from = SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes.filter_out_MON_REQ, to = SW_Impl_Instance_MON_REQ_CASE_Monitor_Req.observed),
                         Connection(from = SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.output, to = SW_Impl_Instance_WPM_WaypointPlanManagerService.AutomationResponse),
                         Connection(from = SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo.alert, to = SW_Impl_Instance_WPM_WaypointPlanManagerService.ReturnHome))
    )
  }
}