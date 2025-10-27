cmake_minimum_required(VERSION 3.10)

# 项目名称
project(Number-Distinguish)

# 指定编译器（可选）
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# 使用 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 设置源文件路径
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src-${SRC_VERSION}")
set(SRC_FILE "${SRC_DIR}/main.c")

# 设置可执行文件名
set(EXECUTABLE_NAME "NumberDistinguish-${SRC_VERSION}")

# 添加可执行文件
add_executable(${EXECUTABLE_NAME} ${SRC_FILE})

# 链接数学库
target_link_libraries(NumberDistinguish-${SRC_VERSION} m)