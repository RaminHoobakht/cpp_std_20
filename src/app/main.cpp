#include "../header/main.hpp"
#include <iostream>

int main() {
    /* code */

    const std::string str1{"Hello World"};
    const std::string str2{
        "Hello"
        " World"
    };
    const std::string str3{std::string{"Hello"} + " World"};

    /* how great! I did not know anything about it before. */
    /* using suffix 's' to convert character array to string */
    std::string str4{}; {
        using namespace std::string_literals;
        str4 = "Hello"s + " World";
    }

    std::string str5{}; {
        constexpr char msg[]{"Hello"};
        constexpr size_t length{std::size(msg) - 1LLU};
        str5 = std::string_literals::operator ""s(msg, length) + " World";
    }

    std::cout << "str1: " << str1 << NL;
    std::cout << "str2: " << str2 << NL;
    std::cout << "str3: " << str3 << NL;
    std::cout << "str4: " << str4 << NL;
    std::cout << "str5: " << str5 << NL;

    std::cout << "\n #(08:04:36): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
