#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string name{"hinata chikao"};

    std::cout << "vaule of name is   : " << name << NL;

    const char *my_name{name.c_str()};

    std::cout << "value of my_name is: " << my_name << NL;

    /* ------------------------------ */
    LINEFEED;
    LINEFEED;

    char *my_name2{name.data()};

    std::cout << "before change-> value of my_name2 is: " << my_name2 << NL;

    my_name2[3] = 'o';
    my_name2[5] = 'o';

    std::cout << "after change -> value fo my_name2 is: " << my_name2 << NL;

    std::cout << "\n #(12:42:11): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
