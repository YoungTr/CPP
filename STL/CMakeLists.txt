set(APP_SRC MySTL.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
include_directories(${PROJECT_SOURCE_DIR}/STL/include)
add_executable(stl ${APP_SRC})