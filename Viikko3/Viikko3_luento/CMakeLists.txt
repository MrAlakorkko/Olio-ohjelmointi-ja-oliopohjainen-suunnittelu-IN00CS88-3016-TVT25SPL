cmake_minimum_required(VERSION 3.16)

project(Viikko3_luento LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Viikko3_luento main.cpp
    perintaharjoitus.h perintaharjoitus.cpp
    son.h son.cpp)

include(GNUInstallDirs)
install(TARGETS Viikko3_luento
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
