option(CAKEML_DUMP_BUFFERS
       "Print the contents of byte-arrays being sent to CakeML"
       OFF)

if(CAKEML_DUMP_BUFFERS OR "$ENV{CAKEML_DUMP_BUFFERS}" STREQUAL "ON")
   add_definitions(-DCAKEML_DUMP_BUFFERS)
endif()

option(CAKEML_CHECK_AND_REPORT_BUFFER_OVERRUNS
       "Print warning messages if byte-arrays being sent to CakeML are larger than expected"
       OFF)

if(CAKEML_CHECK_AND_REPORT_BUFFER_OVERRUNS OR "$ENV{CAKEML_CHECK_AND_REPORT_BUFFER_OVERRUNS}" STREQUAL "ON")
   add_definitions(-DCAKEML_CHECK_AND_REPORT_BUFFER_OVERRUNS)
endif()

option(CAKEML_ASSEMBLIES_PRESENT
       "Enable if CakeML assembly files have been included"
       OFF)

if(CAKEML_ASSEMBLIES_PRESENT OR "$ENV{CAKEML_ASSEMBLIES_PRESENT}" STREQUAL "ON")
   add_definitions(-DCAKEML_ASSEMBLIES_PRESENT)
endif()

option(CAKEML_FLT_OR_ASSEMBLIES_PRESENT
       "Enable if CakeML OperatingRegion filter assembly files have been included"
       OFF)

if(CAKEML_FLT_OR_ASSEMBLIES_PRESENT OR "$ENV{CAKEML_FLT_OR_ASSEMBLIES_PRESENT}" STREQUAL "ON")
   add_definitions(-DCAKEML_FLT_OR_ASSEMBLIES_PRESENT)
endif()

option(CAKEML_FLT_LST_ASSEMBLIES_PRESENT
       "Enable if CakeML LineSearchTask filter assembly files have been included"
       OFF)

if(CAKEML_FLT_LST_ASSEMBLIES_PRESENT OR "$ENV{CAKEML_FLT_LST_ASSEMBLIES_PRESENT}" STREQUAL "ON")
   add_definitions(-DCAKEML_FLT_LST_ASSEMBLIES_PRESENT)
endif()