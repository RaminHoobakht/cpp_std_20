/* using data() function in string_view class */

#include "../header/main.hpp"
#include <cstring>
#include <iostream>


int main() {

    LINEFEED;
    std::cout << "accessing viewed string through the data() function:" << NL;

    std::string_view sv1{"Hinata Chikao"};

    std::cout << "before remove prefix(7):" << NL;
    std::cout << "sv1: " << sv1 << NL;
    std::cout << "std::strlen(sv1.data): " << std::strlen(sv1.data()) << NL;
    std::cout << "sv1.data(): " << sv1.data() << NL;
    util::separator();

    sv1.remove_prefix(7);

    std::cout << "after remove prefix(7):" << NL;
    std::cout << "sv1: " << sv1 << NL;
    std::cout << "std::strlen(sv1.data): " << std::strlen(sv1.data()) << NL;
    std::cout << "sv1.data(): " << sv1.data() << NL;
    util::separator();


    std::cout << "\n #(12:23:51): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
