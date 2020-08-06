add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SW_Impl_Instance_RADIO_RadioDriver_Attestation
                        muslc)
endif()