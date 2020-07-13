#ifndef SIREUM_H_hamr_SW_CASE_Monitor_Geo_thr_Impl_seL4Nix
#define SIREUM_H_hamr_SW_CASE_Monitor_Geo_thr_Impl_seL4Nix

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_seL4Nix_output_Send(STACK_FRAME art_DataContent d);

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_seL4Nix_alert_Send(STACK_FRAME art_DataContent d);

void hamr_SW_CASE_Monitor_Geo_thr_Impl_seL4Nix_keep_in_zones_Receive(STACK_FRAME Option_8E9F45 result);

void hamr_SW_CASE_Monitor_Geo_thr_Impl_seL4Nix_keep_out_zones_Receive(STACK_FRAME Option_8E9F45 result);

void hamr_SW_CASE_Monitor_Geo_thr_Impl_seL4Nix_observed_Receive(STACK_FRAME Option_8E9F45 result);

#ifdef __cplusplus
}
#endif

#endif