# @file CMakeLists.txt
#
# CMake files for the output list

cmake_minimum_required(VERSION 3.28)

# project
project(OutputList)

# cohesion application
add_executable(output)

# cohesion sources
target_sources(output PRIVATE OutputList.cpp Leaf.cpp List.cpp)
target_compile_features(output PRIVATE cxx_std_17)
set_target_properties(output PROPERTIES
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)
# warnings
target_compile_options(output PRIVATE
     $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>: -Wall -Wno-unused-variable>
     $<$<CXX_COMPILER_ID:MSVC>: /W4>
)

# run
add_custom_target(run
        COMMENT "Run"
        COMMAND $<TARGET_FILE:output>
        DEPENDS output
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
