/* using find function in string class */

#include "../header/main.hpp"
#include <cstddef>
#include <iostream>


int main() {

    const std::string message{"the weather is very cold ..."};

    size_t r1{message.find("wea")};
    std::cout << "result one is: " << r1 << NL;

    size_t r2{message.find("gold")};
    std::cout << "result two is: " << r2 << NL;

    util::separator();

    std::cout << "value of nopos is: " << std::string::npos << NL;

    util::separator();

    size_t larg{size_t(-1)};
    std::cout << "value of larg is : " << larg << NL;

    std::cout << "\n #(16:21:49): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
