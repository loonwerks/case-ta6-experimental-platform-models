add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SW_Impl_Instance_FLT_OR_CASE_Filter_OR
                        muslc)
endif()