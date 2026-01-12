cmake_minimum_required(VERSION 3.16)

project(Vikkotehtavat_arvauspeli_3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vikkotehtavat_arvauspeli_3 main.cpp)

include(GNUInstallDirs)
install(TARGETS Vikkotehtavat_arvauspeli_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
