## 设置代码目录
aux_source_directory(. SRC)
## 设置执行文件
add_executable(${PROJECT_NAME} main.cpp)
## 设置依赖
target_link_libraries(${PROJECT_NAME} PRIVATE fmt)