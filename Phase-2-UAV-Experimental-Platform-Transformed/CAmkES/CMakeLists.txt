# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (SW_Impl_Instance C)

add_definitions(-DCAMKES)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_CakeMlOptions.cmake)

include(${CMAKE_CURRENT_LIST_DIR}/CMake_TranspilerOptions.cmake)

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_FC_UART_UARTDriver)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_RADIO_RadioDriver_Attestation)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_FlyZones_FlyZonesDatabase)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_UXAS_UxAS)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_WPM_WaypointPlanManagerService)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_AM_CASE_AttestationManager)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_AM_Gate_CASE_AttestationGate)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_FLT_OR_CASE_Filter_OR)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_FLT_LST_CASE_Filter_LST)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_MON_REQ_CASE_Monitor_Req)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SlangTypeLibrary)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(UARTDriver_Impl
  SOURCES components/UARTDriver_Impl/src/sb_UARTDriver_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/UARTDriver_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_FC_UART_UARTDriver
)

DeclareCAmkESComponent(RadioDriver_Attestation_thr_Impl
  SOURCES components/RadioDriver_Attestation_thr_Impl/src/sb_RadioDriver_Attestation_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/RadioDriver_Attestation_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_RADIO_RadioDriver_Attestation
)

DeclareCAmkESComponent(FlyZonesDatabase_thr_Impl
  SOURCES components/FlyZonesDatabase_thr_Impl/src/sb_FlyZonesDatabase_thr_Impl.c types/src/sp_union_art_DataContent.c types/src/sp_union_art_DataContent.c
  INCLUDES components/FlyZonesDatabase_thr_Impl/includes/ types/includes types/includes types/includes
  LIBS SW_Impl_Instance_FlyZones_FlyZonesDatabase
)

DeclareCAmkESComponent(UxAS_thr_Impl
  SOURCES components/UxAS_thr_Impl/src/sb_UxAS_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/UxAS_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_UXAS_UxAS
)

DeclareCAmkESComponent(WaypointPlanManagerService_thr_Impl
  SOURCES components/WaypointPlanManagerService_thr_Impl/src/sb_WaypointPlanManagerService_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/WaypointPlanManagerService_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_WPM_WaypointPlanManagerService
)

DeclareCAmkESComponent(CASE_AttestationManager_thr_Impl
  SOURCES components/CASE_AttestationManager_thr_Impl/src/sb_CASE_AttestationManager_thr_Impl.c types/src/sp_union_art_DataContent.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_AttestationManager_thr_Impl/includes/ types/includes types/includes
  LIBS SW_Impl_Instance_AM_CASE_AttestationManager
)

DeclareCAmkESComponent(CASE_AttestationGate_thr_Impl
  SOURCES components/CASE_AttestationGate_thr_Impl/src/sb_CASE_AttestationGate_thr_Impl_ffi.c components/CASE_AttestationGate_thr_Impl/src/sb_CASE_AttestationGate_thr_Impl.S components/CASE_AttestationGate_thr_Impl/src/sb_CASE_AttestationGate_thr_Impl.c types/src/sp_union_art_DataContent.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_AttestationGate_thr_Impl/includes/ types/includes types/includes
  LIBS SW_Impl_Instance_AM_Gate_CASE_AttestationGate
)

DeclareCAmkESComponent(CASE_Filter_AReq_thr_Impl
  SOURCES components/CASE_Filter_AReq_thr_Impl/src/sb_CASE_Filter_AReq_thr_Impl_ffi.c components/CASE_Filter_AReq_thr_Impl/src/sb_CASE_Filter_AReq_thr_Impl.S components/CASE_Filter_AReq_thr_Impl/src/sb_CASE_Filter_AReq_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_Filter_AReq_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq
)

DeclareCAmkESComponent(CASE_Filter_OR_thr_Impl
  SOURCES components/CASE_Filter_OR_thr_Impl/src/sb_CASE_Filter_OR_thr_Impl_ffi.c components/CASE_Filter_OR_thr_Impl/src/sb_CASE_Filter_OR_thr_Impl.S components/CASE_Filter_OR_thr_Impl/src/sb_CASE_Filter_OR_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_Filter_OR_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_FLT_OR_CASE_Filter_OR
)

DeclareCAmkESComponent(CASE_Filter_LST_thr_Impl
  SOURCES components/CASE_Filter_LST_thr_Impl/src/sb_CASE_Filter_LST_thr_Impl_ffi.c components/CASE_Filter_LST_thr_Impl/src/sb_CASE_Filter_LST_thr_Impl.S components/CASE_Filter_LST_thr_Impl/src/sb_CASE_Filter_LST_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_Filter_LST_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_FLT_LST_CASE_Filter_LST
)

DeclareCAmkESComponent(CASE_Monitor_Req_thr_Impl
  SOURCES components/CASE_Monitor_Req_thr_Impl/src/sb_CASE_Monitor_Req_thr_Impl_ffi.c components/CASE_Monitor_Req_thr_Impl/src/sb_CASE_Monitor_Req_thr_Impl.S components/CASE_Monitor_Req_thr_Impl/src/sb_CASE_Monitor_Req_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_Monitor_Req_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_MON_REQ_CASE_Monitor_Req
)

DeclareCAmkESComponent(CASE_Filter_ARes_thr_Impl
  SOURCES components/CASE_Filter_ARes_thr_Impl/src/sb_CASE_Filter_ARes_thr_Impl_ffi.c components/CASE_Filter_ARes_thr_Impl/src/sb_CASE_Filter_ARes_thr_Impl.S components/CASE_Filter_ARes_thr_Impl/src/sb_CASE_Filter_ARes_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_Filter_ARes_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes
)

DeclareCAmkESComponent(CASE_Monitor_Geo_thr_Impl
  SOURCES components/CASE_Monitor_Geo_thr_Impl/src/sb_CASE_Monitor_Geo_thr_Impl_ffi.c components/CASE_Monitor_Geo_thr_Impl/src/sb_CASE_Monitor_Geo_thr_Impl.S components/CASE_Monitor_Geo_thr_Impl/src/sb_CASE_Monitor_Geo_thr_Impl.c types/src/sp_union_art_DataContent.c types/src/sp_union_art_DataContent.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_Monitor_Geo_thr_Impl/includes/ types/includes types/includes types/includes
  LIBS SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo
)

DeclareCAmkESRootserver(SW_Impl_Instance.camkes)
