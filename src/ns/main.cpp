#include <iostream>
#include <fmt/core.h>
#include "nsHeader.h"

using namespace std;
// 第一个命名空间
namespace first_space {
    void func() {
        cout << "Inside first_space" << endl;
    }
}
// 第二个命名空间
namespace second_space {
    void func() {
        cout << "Inside second_space" << endl;
    }
}

int main() {
    fmt::println("namespace demo");
    first_space::func();
    second_space::func();

    using namespace Test;
    using namespace std;

    string s = new_ns::Func();
    std::cout << s << std::endl; // "Hello from new"
    return 0;
}
