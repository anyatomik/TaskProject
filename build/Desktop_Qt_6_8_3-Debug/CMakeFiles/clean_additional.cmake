# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/TaskProj_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/TaskProj_autogen.dir/ParseCache.txt"
  "TaskProj_autogen"
  )
endif()
