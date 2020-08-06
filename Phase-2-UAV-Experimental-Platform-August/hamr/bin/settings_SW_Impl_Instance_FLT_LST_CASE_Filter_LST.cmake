add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SW_Impl_Instance_FLT_LST_CASE_Filter_LST
                        muslc)
endif()