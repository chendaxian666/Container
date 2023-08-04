cmake_minimum_required(VERSION 3.18)
project(NetProxy)
include_directories(.)
File(GLOB SRC_LIST "*.cpp" ".h")

ADD_LIBRARY(NetProxy ${SRC_LIST})