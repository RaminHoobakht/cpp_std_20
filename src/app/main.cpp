#include "../header/main.hpp"
#include <iostream>
#include <string>

int main() {

    std::string str1{"Hello"};
    std::string str2{"World"};
    std::string str3{str1 + " my " + str2};

    std::cout << "value of str3 is: " << str3 << NL;

    /* encounter with error. because can not be add
       string literals to gether. */
    // std::string str4{"Hello" + " World"};

    std::string str4{"Hello"
                     " World"};

    std::string str5{std::string{"Hello"} + " World"};
    std::string str6{};
    {
        using namespace std::string_literals;
        str6 = "Hello"s + " World";
    }

    std::cout << "str1 is: " << str1 << NL;
    std::cout << "str2 is: " << str2 << NL;
    std::cout << "str3 is: " << str3 << NL;
    std::cout << "str5 is: " << str5 << NL;
    std::cout << "str6 is: " << str6 << NL;

    std::cout << "\n #(19:20:06): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
