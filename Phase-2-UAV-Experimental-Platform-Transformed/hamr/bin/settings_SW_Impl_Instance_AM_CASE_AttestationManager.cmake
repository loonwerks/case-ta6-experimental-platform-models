add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SW_Impl_Instance_AM_CASE_AttestationManager
                        muslc)
endif()