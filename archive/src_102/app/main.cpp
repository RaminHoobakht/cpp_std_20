/* using string_view */

#include "../header/main.hpp"
#include <iostream>
#include <string_view>


int main() {

    LINEFEED;

    const char *c_string{"the animals have left the region"};
    std::string_view sv1{c_string};

    std::cout << "sv1: " << sv1 << NL;
    util::separator();

    sv1.remove_prefix(4);
    std::cout << "sv1 (remove prefix(4)) : " << sv1 << NL;
    util::separator();

    sv1.remove_suffix(10);
    std::cout << "sv1 (remove suffix(10)): " << sv1 << NL;
    util::separator();

    std::cout << "c_string: " << c_string << NL;
    util::separator();


    std::cout << "\n #(11:11:21): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
