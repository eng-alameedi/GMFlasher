cmake_minimum_required(VERSION 3.20..3.30)

project(GMFlasher
        VERSION 1.0.0
        LANGUAGES CXX
)

set(CMAKE_TOOLCHAIN_FILE "/home/alameedi/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

file(GLOB SOURCES
     src/main.cpp
     src/lib/*.cpp
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

#include_directories(src/include)

find_package(Curses REQUIRED)

if(NOT(CMAKE_BUILD_TYPE))
  set(CMAKE_BUILD_TYPE Debug)
endif()

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/src/include)

# Link the ncurses library
target_include_directories(${PROJECT_NAME} PRIVATE ${CURSES_INCLUDE_DIRS})
target_compile_options(${PROJECT_NAME} PRIVATE ${CURSES_CFLAGS})
target_link_libraries(${PROJECT_NAME} PRIVATE ${CURSES_LIBRARIES})
