project(HugeInt)
cmake_minimum_required(VERSION 3.7)
include_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(Automata_run TEST_RUN/TEST.cpp lib/AUTOMATA.cpp)
