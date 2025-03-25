/* using string_view class */

#include "../header/main.hpp"
#include <iostream>
#include <string_view>


int main() {

    std::string_view sv1{"Hello"};
    std::string_view sv2{sv1};
    std::string_view sv3{sv1};

    LINEFEED;

    std::cout << "size of string view: " << sizeof(std::string_view) << NL;
    util::separator();

    std::cout << "value of sv1: " << sv1 << NL;
    std::cout << "value of sv2: " << sv2 << NL;
    std::cout << "value of sv3: " << sv3 << NL;
    util::separator();

    std::cout << "address of &sv1: " << &sv1 << NL;
    std::cout << "address of &sv2: " << &sv2 << NL;
    std::cout << "address of &sv3: " << &sv3 << NL;
    util::separator();


    std::cout << "\n #(17:14:42): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
