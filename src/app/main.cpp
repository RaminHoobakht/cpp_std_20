#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string name{"Hinata Chikao"};

    std::cout << "size of name is     : " << name.size() << NL;
    std::cout << "length of name is   : " << name.length() << NL;
    std::cout << "capacity of name is : " << name.capacity() << NL;
    std::cout << "max size of name is : " << name.max_size() << NL;

    LINEFEED;
    util::separator();

    name.clear();

    std::cout << "size of name is     : " << name.size() << NL;
    std::cout << "length of name is   : " << name.length() << NL;
    std::cout << "capacity of name is : " << name.capacity() << NL;
    std::cout << "max size of name is : " << name.max_size() << NL;

    std::cout << "\n #(23:46:10): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
