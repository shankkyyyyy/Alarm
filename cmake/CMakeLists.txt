cmake_minimum_required(VERSION 3.10)

project(Alarm)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if(MSVC)
    add_compile_options(/W4 /WX /permissive-)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

add_executable(Alarm ../src/main.cc)

target_include_directories(Alarm 
    PRIVATE 
        ../include
)

find_package(PkgConfig REQUIRED)
pkg_check_modules(RAYLIB REQUIRED raylib)

# 4. Include raylib's system paths discovered by pkg-config
target_include_directories(Alarm PRIVATE ${RAYLIB_INCLUDE_DIRS})

# 5. Link the actual raylib binary flags to your executable
target_link_libraries(Alarm PRIVATE ${RAYLIB_LIBRARIES})