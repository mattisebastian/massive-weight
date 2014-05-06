cmake_minimum_required(VERSION 2.8)


project(cpp4cg3)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(${OPENGL_INCLUDE_DIR} ${GLUT_INCLUDE_DIRS} )

add_executable(cpp4cg3 main312.cpp)

target_link_libraries(cpp4cg3 ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )




# install(TARGETS cpp4cg3 RUNTIME DESTINATION bin)

add_subdirectory(controller)