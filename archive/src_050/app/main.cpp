#include "../header/main.hpp"
#include <iostream>


int main() {

    // const std::string str1{"Hello " + "World! ..."}; /* enconuter with error
    // */ std::cout << "valu eof str1 is: " << str1 << NL;

    std::string str2{};
    {
        using namespace std::string_literals;

        /* "Hello "s convert to the std::string data type */
        str2 = "Hello "s + "world ...";
    }

    std::cout << "value of str2 is: " << str2 << NL;


    std::cout << "\n #(16:23:49): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
