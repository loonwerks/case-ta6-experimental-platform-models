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

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_UXAS_UxAS)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_AM_Gate_CASE_AttestationGate)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SW_Impl_Instance_FLT_OR_CASE_Filter_OR)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/slang_libraries/SlangTypeLibrary)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(UxAS_thr_Impl
  SOURCES components/UxAS_thr_Impl/src/sb_UxAS_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/UxAS_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_UXAS_UxAS
)

DeclareCAmkESComponent(CASE_AttestationGate_thr_Impl
  SOURCES components/CASE_AttestationGate_thr_Impl/src/sb_CASE_AttestationGate_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_AttestationGate_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_AM_Gate_CASE_AttestationGate
)

DeclareCAmkESComponent(CASE_Filter_OR_thr_Impl
  SOURCES components/CASE_Filter_OR_thr_Impl/src/basis_ffi.c components/CASE_Filter_OR_thr_Impl/src/sb_CASE_Filter_OR_thr_Impl_ffi.c components/CASE_Filter_OR_thr_Impl/src/sb_CASE_Filter_OR_thr_Impl.S components/CASE_Filter_OR_thr_Impl/src/sb_CASE_Filter_OR_thr_Impl.c types/src/sb_queue_union_art_DataContent_1.c types/src/sb_queue_union_art_DataContent_1.c
  INCLUDES components/CASE_Filter_OR_thr_Impl/includes/ types/includes
  LIBS SW_Impl_Instance_FLT_OR_CASE_Filter_OR
)

DeclareCAmkESRootserver(SW_Impl_Instance.camkes)
