//
// Created by Administrator on 7/9/2024.
//

#ifndef CXX_LANG_NSHEADER_H
#define CXX_LANG_NSHEADER_H

#include <iostream>
#include "fmt/core.h"

namespace Test {
    namespace old_ns {
        std::string Func() {
            return fmt::format("Hello from old");
        }
    }

    namespace new_ns {
        std::string Func() {
            return fmt::format("Hello from new");
        }
    }
}


#endif //CXX_LANG_NSHEADER_H
