//
// Created by iceinto on 22-10-27.
//
#include <iostream>

std::string say_hell() { return std::string("Hello, CMake world!"); }

int main() {
    std::cout << say_hell() << std::endl;
    return EXIT_SUCCESS;
}
