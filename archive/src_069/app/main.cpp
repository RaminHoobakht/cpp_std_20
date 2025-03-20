#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string name{"12345678901234567890"};
    const char *text{"I am C++ Developer..."};

    name.insert(5, text, 18);
    std::cout << "value of name is: " << name << NL;

    LINEFEED;
    util::separator();

    name.clear();
    name = "12345678901234567890";
    name.insert(5, text);

    std::cout << "value of name is: " << name << NL;


    std::cout << "\n #(16:08:36): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
