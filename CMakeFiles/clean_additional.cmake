# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\FScope_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FScope_autogen.dir\\ParseCache.txt"
  "FScope_autogen"
  )
endif()
