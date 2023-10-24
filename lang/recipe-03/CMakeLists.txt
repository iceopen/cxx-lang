add_library(message
        STATIC
        Message.h
        Message.cpp
        )

add_executable(hello-word hello-word.cpp)
target_link_libraries(hello-word message)