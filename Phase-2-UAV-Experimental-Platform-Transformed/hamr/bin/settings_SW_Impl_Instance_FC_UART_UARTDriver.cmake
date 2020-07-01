add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SW_Impl_Instance_FC_UART_UARTDriver
                        muslc)
endif()