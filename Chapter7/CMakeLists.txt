cmake_minimum_required(VERSION 3.23)
project(Chapter7)

set(CMAKE_CXX_STANDARD 14)
## add multiple executables
##  in same file(eg: filename Listing7_2)
##      add_executable(Calling Listing7_2/calling.cpp)
##  in different file(eg: filename Listing7_2)
##      add_executable(Listing7_1 Listing7_1/calling.cpp)
add_executable(Listing7_1 Listing7_1/calling.cpp)
add_executable(Protos Listing7_2/protos.cpp)
add_executable(Twoarg Listing7_3/twoarg.cpp)
add_executable(Lotto Listing7_4/lotto.cpp)
add_executable(Chapter7 main.cpp)
