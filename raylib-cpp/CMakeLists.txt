# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.5)

# Set the project name and languages
project(main C CXX)

# Set the C++ standard to 11
set(CMAKE_CXX_STANDARD 11)

# Set the OpenGL preference to GLVND
set(OpenGL_GL_PREFERENCE GLVND)

# Disable building examples and games
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(BUILD_GAMES OFF CACHE BOOL "" FORCE)

# Add the raylib library as a subdirectory
add_subdirectory(libs/raylib)

# Set the working directory to the current source directory
set(WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

# Get all the source files in the maghar-lib/src directory
file(GLOB SOURCES "${WORKING_DIRECTORY}/maghar-lib/src/*.cpp")

# Create an executable target with the project name and the source files
add_executable(${PROJECT_NAME} ${SOURCES}
	maghar/main.cpp
	maghar/scene01.cpp
	maghar/blob.cpp
	maghar/uielement.cpp
	maghar/player.cpp
)

# Add the maghar-lib/headers directory to the include directories for the target
target_include_directories(${PROJECT_NAME} PUBLIC ${WORKING_DIRECTORY}/maghar-lib/headers)

# Link the raylib library to the target
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

# Copy the assets directory to the build directory
file(
	COPY assets
	DESTINATION ${CMAKE_BINARY_DIR}
)
