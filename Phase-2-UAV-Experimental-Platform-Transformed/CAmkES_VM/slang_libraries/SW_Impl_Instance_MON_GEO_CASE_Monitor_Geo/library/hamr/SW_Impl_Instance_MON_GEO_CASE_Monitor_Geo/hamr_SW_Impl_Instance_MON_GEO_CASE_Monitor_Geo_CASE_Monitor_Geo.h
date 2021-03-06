#ifndef SIREUM_H_hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo
#define SIREUM_H_hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init(STACK_FRAME_ONLY);

hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_CASE_Monitor_GeoBridge(STACK_FRAME_ONLY);
art_Bridge_EntryPoints hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_entryPoints(STACK_FRAME_ONLY);
Option_8E9F45 hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_noData(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_keep_in_zones_id(STACK_FRAME_ONLY);
Option_8E9F45 hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_keep_in_zones_port(STACK_FRAME_ONLY);
void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_keep_in_zones_port_a(STACK_FRAME Option_8E9F45 p_keep_in_zones_port);
Z hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_keep_out_zones_id(STACK_FRAME_ONLY);
Option_8E9F45 hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_keep_out_zones_port(STACK_FRAME_ONLY);
void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_keep_out_zones_port_a(STACK_FRAME Option_8E9F45 p_keep_out_zones_port);
Z hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_observed_id(STACK_FRAME_ONLY);
Option_8E9F45 hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_observed_port(STACK_FRAME_ONLY);
void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_observed_port_a(STACK_FRAME Option_8E9F45 p_observed_port);
Z hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_output_id(STACK_FRAME_ONLY);
Option_8E9F45 hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_output_port(STACK_FRAME_ONLY);
void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_output_port_a(STACK_FRAME Option_8E9F45 p_output_port);
Z hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_alert_id(STACK_FRAME_ONLY);
Option_8E9F45 hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_alert_port(STACK_FRAME_ONLY);
void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_alert_port_a(STACK_FRAME Option_8E9F45 p_alert_port);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_main_printDataContent(STACK_FRAME art_DataContent a);

Z hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_main(STACK_FRAME IS_948B60 args);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_initialiseArchitecture(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_initialiseEntryPoint(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_computeEntryPoint(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_finaliseEntryPoint(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_run(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_logInfo(STACK_FRAME String title, String msg);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_logDebug(STACK_FRAME String title, String msg);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_logError(STACK_FRAME String title, String msg);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_putValue(STACK_FRAME Z portId, art_DataContent data);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_CASE_Monitor_GeoBridge(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_entryPoints(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_noData(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_keep_in_zones_id(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_keep_in_zones_port(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_keep_out_zones_id(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_keep_out_zones_port(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_observed_id(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_observed_port(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_output_id(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_output_port(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_alert_id(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_CASE_Monitor_Geo_init_alert_port(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif