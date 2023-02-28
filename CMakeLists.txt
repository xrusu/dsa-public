cmake_minimum_required(VERSION 3.24)
project(dsa_public)

set(CMAKE_CXX_STANDARD 17)

add_executable(clean_code clean-code/demo.cpp clean-code/model/toDo.cpp clean-code/model/toDo.h clean-code/util/utils.cpp clean-code/util/utils.h clean-code/util/dbUtils.cpp clean-code/util/dbUtils.h)

add_executable(lab1 lab1/lab.c)
