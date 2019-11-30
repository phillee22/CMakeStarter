# CMakeList.txt : CMake project for CMakeStarter, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# set the project name
project(CMakeStarter VERSION 1.0)

# Add source to this project's executable.
add_executable (CMakeStarter "Box.cpp" "Box.h" 
	"CMakeStarter.cpp" "CMakeStarter.h" 
	"DoubleLink.cpp" "DoubleLink.h" 
	"global.h" "global.cpp" 
	"Link.cpp" "Link.h" 
	"ListManager.cpp" "ListManager.h" )

# TODO: Add tests and install targets if needed.
