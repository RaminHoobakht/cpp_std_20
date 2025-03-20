#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string word{};

    word.push_back('H');
    word.push_back('e');
    word.push_back('l');
    word.push_back('l');
    word.push_back('o');

    std::cout << "value of world is: " << word << NL;

    std::cout << "back character is : " << word.back() << NL;
    std::cout << "front character is: " << word.front() << NL;

    LINEFEED;
    util::separator();

    word.pop_back();
    std::cout << "after pop back one  : " << word << NL;

    word.pop_back();
    std::cout << "after pop back two  : " << word << NL;

    word.pop_back();
    std::cout << "after pop back three: " << word << NL;

    std::cout << "\n #(18:37:33): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
