add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo
                        muslc)
endif()