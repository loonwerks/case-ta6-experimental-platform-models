add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SW_Impl_Instance_WPM_WaypointPlanManagerService
                        muslc)
endif()