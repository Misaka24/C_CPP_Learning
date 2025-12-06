cmake_minimum_required(VERSION 3.10)

# 项目名称
project(HelloWorld)

# 指定编译器（可选）
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# 使用 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 指定 src/main.cpp 为源文件
add_executable(HelloWorld ${CMAKE_SOURCE_DIR}/src/main.cpp)
