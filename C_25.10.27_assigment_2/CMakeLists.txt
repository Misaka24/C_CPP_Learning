cmake_minimum_required(VERSION 3.10)

# 项目名称
project(Number-Distinguish)

# 指定编译器（可选）
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# 使用 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 可选变量 SRC_VERSION，例如：cmake .. -DSRC_VERSION=v1
if(DEFINED SRC_VERSION)
    message(STATUS "Building specific version: ${SRC_VERSION}")
    set(SRC_DIRS "src-${SRC_VERSION}")
else()
    message(STATUS "No version specified, building all versions under project root...")
    # 自动查找所有匹配 src-* 的文件夹
    file(GLOB SRC_DIRS RELATIVE ${CMAKE_SOURCE_DIR} "src-*")
endif()

# 遍历所有版本文件夹
foreach(SRC_DIR ${SRC_DIRS})
    set(SRC_FILE "${CMAKE_SOURCE_DIR}/${SRC_DIR}/main.c")

    if(EXISTS "${SRC_FILE}")
        # 去掉前缀 src-，生成版本标签
        string(REPLACE "src-" "" VERSION_NAME "${SRC_DIR}")
        set(EXECUTABLE_NAME "NumberDistinguish-${VERSION_NAME}")

        message(STATUS "Adding target: ${EXECUTABLE_NAME} from ${SRC_FILE}")
        add_executable(${EXECUTABLE_NAME} "${SRC_FILE}")
    else()
        message(WARNING "Skipping ${SRC_DIR}: ${SRC_FILE} not found.")
    endif()
endforeach()
