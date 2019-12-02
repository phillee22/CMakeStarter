# CMakeList.txt : CMake project for CMakeStarter, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# set the project name
project(CMakeStarter VERSION 1.0)

# Add source to this project's executable.
add_executable (CMakeStarter "Box.h" "Box.cpp" 
	"CMakeStarter.h" "CMakeStarter.cpp" 
	"DoubleLink.h" "DoubleLink.cpp" 
	"DoubleList.h" "DoubleList.cpp"
	"global.h" "global.cpp" 
	"IList.h" "IList.cpp"
	"Link.h" "Link.cpp" 
	"ListManager.h" "ListManager.cpp"
	"SingleList.h" "SingleList.cpp"
	)

# TODO: Add tests and install targets if needed.
