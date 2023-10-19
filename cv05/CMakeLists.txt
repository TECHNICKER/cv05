# CMakeList.txt : CMake project for cv05, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (cv05 "cv05.cpp" "cv05.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cv05 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
