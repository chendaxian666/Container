cmake_minimum_required(VERSION 3.18)
project(Container)
include_directories(.)
File(GLOB SRC_LIST "*.cpp" ".h")

ADD_EXECUTABLE(Container ${SRC_LIST})