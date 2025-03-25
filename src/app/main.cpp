/* using string_view class */

#include "../header/main.hpp"
#include <iostream>
#include <string_view>

void my_print(std::string_view sv) noexcept;


int main() {

    LINEFEED;

    /* from a c-string (null terminated)  */
    std::string_view sv1{"Hello, World ..."};
    my_print(sv1);
    util::separator();

    /* from std::string */
    std::string str1{"C++ is awesome ..."};
    std::string_view sv2{str1};
    my_print(sv2);
    util::separator();

    /* from substring (without copying)*/
    std::string_view sv3{sv2.substr(0, 3)};
    my_print(sv3);

    str1[0] = 'D';

    /* modifying the original string effect the view */
    std::cout << "modified view: " << sv2 << NL;

    std::cout << "\n #(18:34:53): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

void my_print(std::string_view sv) noexcept {
    std::cout << "string view  : " << sv << NL;
    std::cout << "string length: " << sv.length() << NL;
    std::cout << "substr(2, 4) : " << sv.substr(2, 4) << NL;
}
