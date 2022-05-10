
#Auto Genrated C++ file by newton CLI
cmake_minimum_required(VERSION 3.1)
add_library(bc ./BoxContainer/src/BoxContainer.cxx)
include_directories(./BoxContainer/include)
project(Box-Container)
add_executable(${PROJECT_NAME} ./src/main.cc)
target_link_libraries(${PROJECT_NAME} bc)
