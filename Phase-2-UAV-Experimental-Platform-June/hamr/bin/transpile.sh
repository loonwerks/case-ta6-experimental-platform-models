#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e

if [ -z "${SIREUM_HOME}" ]; then
  echo "SIREUM_HOME not set. Refer to https://github.com/sireum/kekinian/#installing"
  exit 1
fi

PATH_SEP=":"
if [ -n "$COMSPEC" -a -x "$COMSPEC" ]; then
  PATH_SEP=";"
fi

SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
OUTPUT_DIR="${SCRIPT_HOME}/../src/c/nix"

${SIREUM_HOME}/bin/sireum slang transpilers c \
  --sourcepath "${SCRIPT_HOME}/../src/main" \
  --output-dir "${OUTPUT_DIR}" \
  --name "main" \
  --apps "hamr.SW_Impl_Instance_FC_UART_UARTDriver_App,hamr.SW_Impl_Instance_RADIO_RadioDriver_Attestation_App,hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App,hamr.SW_Impl_Instance_UXAS_UxAS_App,hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService_App,hamr.SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App,hamr.SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App,hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App,hamr.SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App,hamr.Main" \
  --fingerprint 3 \
  --bits 32 \
  --string-size 256 \
  --sequence-size 45 \
  --sequence "MS[Z,art.Bridge]=9;MS[Z,MOption[art.Bridge]]=9;IS[Z,art.UPort]=7;IS[Z,art.UConnection]=20;IS[Z,B]=262144" \
  --constants "art.Art.maxComponents=9;art.Art.maxPorts=45" \
  --forward "art.ArtNative=hamr.ArtNix,hamr.Platform=hamr.PlatformNix" \
  --stack-size "16*1024*1024" \
  --stable-type-id \
  --exts "${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/UARTDriver_Impl_Impl/UARTDriver_Impl_Impl_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/UARTDriver_Impl_Impl/UARTDriver_Impl_Impl_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/UARTDriver_Impl_Impl/UARTDriver_Impl_Impl.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/RadioDriver_Attestation_thr_Impl_Impl/RadioDriver_Attestation_thr_Impl_Impl_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/RadioDriver_Attestation_thr_Impl_Impl/RadioDriver_Attestation_thr_Impl_Impl_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/RadioDriver_Attestation_thr_Impl_Impl/RadioDriver_Attestation_thr_Impl_Impl.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/FlyZonesDatabase_thr_Impl_Impl/FlyZonesDatabase_thr_Impl_Impl_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/FlyZonesDatabase_thr_Impl_Impl/FlyZonesDatabase_thr_Impl_Impl_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/FlyZonesDatabase_thr_Impl_Impl/FlyZonesDatabase_thr_Impl_Impl.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/UxAS_thr_Impl_Impl/UxAS_thr_Impl_Impl_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/UxAS_thr_Impl_Impl/UxAS_thr_Impl_Impl_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/UxAS_thr_Impl_Impl/UxAS_thr_Impl_Impl.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/WaypointPlanManagerService_thr_Impl_Impl/WaypointPlanManagerService_thr_Impl_Impl_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/WaypointPlanManagerService_thr_Impl_Impl/WaypointPlanManagerService_thr_Impl_Impl_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/WaypointPlanManagerService_thr_Impl_Impl/WaypointPlanManagerService_thr_Impl_Impl.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_AttestationGate_thr_Impl_Impl/CASE_AttestationGate_thr_Impl_Impl_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_AttestationGate_thr_Impl_Impl/CASE_AttestationGate_thr_Impl_Impl_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_AttestationGate_thr_Impl_Impl/CASE_AttestationGate_thr_Impl_Impl.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_Filter_LST_thr_Impl_Impl/CASE_Filter_LST_thr_Impl_Impl_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_Filter_LST_thr_Impl_Impl/CASE_Filter_LST_thr_Impl_Impl_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_Filter_LST_thr_Impl_Impl/CASE_Filter_LST_thr_Impl_Impl.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_Monitor_Req_thr_Impl_Impl/CASE_Monitor_Req_thr_Impl_Impl_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_Monitor_Req_thr_Impl_Impl/CASE_Monitor_Req_thr_Impl_Impl_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_Monitor_Req_thr_Impl_Impl/CASE_Monitor_Req_thr_Impl_Impl.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_Monitor_Geo_thr_Impl_Impl/CASE_Monitor_Geo_thr_Impl_Impl_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_Monitor_Geo_thr_Impl_Impl/CASE_Monitor_Geo_thr_Impl_Impl_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/CASE_Monitor_Geo_thr_Impl_Impl/CASE_Monitor_Geo_thr_Impl_Impl.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ipc.c" \
  --exclude-build "hamr.Drivers.UARTDriver_Impl_Impl,hamr.SW.RadioDriver_Attestation_thr_Impl_Impl,hamr.SW.FlyZonesDatabase_thr_Impl_Impl,hamr.SW.UxAS_thr_Impl_Impl,hamr.SW.WaypointPlanManagerService_thr_Impl_Impl,hamr.SW.CASE_AttestationGate_thr_Impl_Impl,hamr.SW.CASE_Filter_LST_thr_Impl_Impl,hamr.SW.CASE_Monitor_Req_thr_Impl_Impl,hamr.SW.CASE_Monitor_Geo_thr_Impl_Impl" \
  --verbose