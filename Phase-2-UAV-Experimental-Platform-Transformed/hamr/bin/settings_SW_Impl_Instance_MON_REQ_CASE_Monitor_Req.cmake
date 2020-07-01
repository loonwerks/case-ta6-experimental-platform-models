add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SW_Impl_Instance_MON_REQ_CASE_Monitor_Req
                        muslc)
endif()