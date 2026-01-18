cmake_minimum_required(VERSION 3.16)

project(olio-ohjelmointi_kotitehtava2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olio-ohjelmointi_kotitehtava2 main.cpp
    homework_week_2.h homework_week_2.cpp)

include(GNUInstallDirs)
install(TARGETS olio-ohjelmointi_kotitehtava2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
