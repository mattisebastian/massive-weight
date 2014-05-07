cmake_minimum_required(VERSION 2.8)
add_subdirectory(controller)

project(cpp4cg3)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(${OPENGL_INCLUDE_DIR} ${GLUT_INCLUDE_DIRS} )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11 -Wall -pedantic")

add_executable(cpp4cg3 main32.cpp controller/glut_engine.cpp)

target_link_libraries(cpp4cg3 ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )




# install(TARGETS cpp4cg3 RUNTIME DESTINATION bin)
