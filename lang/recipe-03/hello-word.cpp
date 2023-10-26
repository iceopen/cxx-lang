//
// Created by iceinto on 22-10-31.
//
#include "Message.h"

#include <cstdlib>
#include <iostream>


int main() {
    Message say_hello("Hello, CMake World!");
    std::cout << say_hello << std::endl;

    Message say_goodbye("GoodBye, CMake World!");
    std::cout << say_goodbye << std::endl;
    
    return EXIT_SUCCESS;
}