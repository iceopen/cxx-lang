cmake_minimum_required(VERSION 3.10)

project(cxx_lang)
# 基础
include(${PROJECT_SOURCE_DIR}/cmake/base.cmake)
# 设置
set(CMAKE_CXX_STANDARD 11)
## 设置第三方
add_subdirectory(3rd)
add_subdirectory(src)
