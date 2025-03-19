#include "../header/main.hpp"
#include <iostream>
#include <string>

int main() {

    std::string name{"hinata chikao"};

    std::cout << "before change -> value of name is: " << name << NL;

    name[3] = 'o';
    name.at(5) = 'o';

    std::cout << "after change -> value of name is : " << name << NL;

    std::cout << "front character is: " << name.front() << NL;
    std::cout << "back character is : " << name.back() << NL;

    char ch_front = name.front();
    char ch_back = name.back();

    std::cout << "front character is: " << ch_front << NL;
    std::cout << "back character is : " << ch_back << NL;

    ch_front = '-';
    ch_back = '/';

    std::cout << "value of name is: " << name << NL;

    char &ch_front2 = name.front();
    char &ch_back2 = name.back();

    ch_front2 = '*';
    ch_back2 = '&';

    std::cout << "value of name is: " << name << NL;


    std::cout << "\n #(12:10:18): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
