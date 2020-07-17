add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SW_Impl_Instance_AM_Gate_CASE_AttestationGate
                        muslc)
endif()