set(TIMBER_SRC timber/Timber.cpp)

include_directories(${PROJECT_SOURCE_DIR}/Sample/timber)

add_executable(timber Sample.cpp ${TIMBER_SRC})
