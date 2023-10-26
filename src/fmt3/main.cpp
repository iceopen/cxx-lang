#include <iostream>
#include <fmt/core.h>
#include <fmt/color.h>

int main() {
    fmt::println("Hello World!\n");
    std::string s1 = fmt::format("The answer is {}.", 42);
    std::string s2 = fmt::format("I'd rather be {1} than {0}.", "right", "happy");
    fmt::println(s1);
    fmt::println(s2);
    fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, "Hello, {}!\n", "world");
    fmt::print(fg(fmt::color::floral_white) | bg(fmt::color::slate_gray) | fmt::emphasis::underline, "Olá, {}!\n",
               "Mundo");
    fmt::print(fg(fmt::color::steel_blue) | fmt::emphasis::italic, "你好{}！\n", "世界");
    return 0;
}
