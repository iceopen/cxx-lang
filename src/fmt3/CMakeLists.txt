## 设置代码目录
aux_source_directory(. SRC)
## 设置执行文件
add_executable(fmt3 main.cpp)
## 设置依赖
target_link_libraries(fmt3 PRIVATE fmt)