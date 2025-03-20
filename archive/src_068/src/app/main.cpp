#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string name{"Hinata Chikao"};

    std::cout << "before insert : " << name << NL;

    name.insert(6, 1, ',');

    std::cout << "after insert  : " << name << NL;

    LINEFEED;
    util::separator();

    name.clear();
    name = "Hinata Chikao";
    const char *text{" is my friend."};

    name.insert(13, text);

    std::cout << "after insert a text at the end of name: " << NL;
    std::cout << "result is: " << name << NL;


    std::cout << "\n #(15:44:00): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
