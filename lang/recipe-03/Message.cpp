//
// Created by iceinto on 22-10-31.
//
#include "Message.h"
#include <string>
#include <iostream>

std::ostream &Message::printObject(std::ostream &os) {
    os << "This is my very nice message：" << std::endl;
    os << message_;
    return os;
}