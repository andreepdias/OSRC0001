### Set the versions
cmake_minimum_required(VERSION 3.0.0)
project(Regras VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
file(GLOB rules_src
    "Noncompliant/**/*.c"
)

### Create project
add_executable(Regras ${rules_src})

find_package(PNG REQUIRED)
include_directories(${PNG_INCLUDE_DIR})
target_link_libraries(Regras ${PNG_LIBRARY})

### CPack stuff
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
