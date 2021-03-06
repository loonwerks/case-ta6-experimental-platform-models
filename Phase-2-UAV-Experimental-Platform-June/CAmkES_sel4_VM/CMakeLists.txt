# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (SW_Impl_Instance C)

add_definitions(-DCAMKES)

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

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_AM_Gate_CASE_AttestationGate)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_FLT_LST_CASE_Filter_LST)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_MON_REQ_CASE_Monitor_Req)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SlangTypeLibrary)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/VM)

DeclareCAmkESComponent(UARTDriver_Impl
  SOURCES components/UARTDriver_Impl/src/sb_UARTDriver_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/UARTDriver_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_FC_UART_UARTDriver
)

DeclareCAmkESComponent(FlyZonesDatabase_thr_Impl
  SOURCES components/FlyZonesDatabase_thr_Impl/src/sb_FlyZonesDatabase_thr_Impl.c types/src/sp_union_art_DataContent.c types/src/sp_union_art_DataContent.c
  INCLUDES components/FlyZonesDatabase_thr_Impl/includes/ types/includes types/includes types/includes
  LIBS SW_Impl_Instance_FlyZones_FlyZonesDatabase
)

DeclareCAmkESComponent(WaypointPlanManagerService_thr_Impl
  SOURCES components/WaypointPlanManagerService_thr_Impl/src/sb_WaypointPlanManagerService_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/WaypointPlanManagerService_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_WPM_WaypointPlanManagerService
)

DeclareCAmkESComponent(CASE_AttestationGate_thr_Impl
  SOURCES components/CASE_AttestationGate_thr_Impl/src/sb_CASE_AttestationGate_thr_Impl.c types/src/sp_union_art_DataContent.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_AttestationGate_thr_Impl/includes/ types/includes types/includes
  LIBS SW_Impl_Instance_AM_Gate_CASE_AttestationGate
)

DeclareCAmkESComponent(CASE_Filter_LST_thr_Impl
  SOURCES components/CASE_Filter_LST_thr_Impl/src/sb_CASE_Filter_LST_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_Filter_LST_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_FLT_LST_CASE_Filter_LST
)

DeclareCAmkESComponent(CASE_Monitor_Req_thr_Impl
  SOURCES components/CASE_Monitor_Req_thr_Impl/src/sb_CASE_Monitor_Req_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_Monitor_Req_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_MON_REQ_CASE_Monitor_Req
)

DeclareCAmkESComponent(CASE_Monitor_Geo_thr_Impl
  SOURCES components/CASE_Monitor_Geo_thr_Impl/src/sb_CASE_Monitor_Geo_thr_Impl.c types/src/sp_union_art_DataContent.c types/src/sp_union_art_DataContent.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_Monitor_Geo_thr_Impl/includes/ types/includes types/includes types/includes
  LIBS SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo
)

DeclareCAmkESComponent(Pacer
  SOURCES components/Pacer/src/Pacer.c
  LIBS SB_Type_Library SlangTypeLibrary
)

DeclareCAmkESRootserver(SW_Impl_Instance.camkes)
