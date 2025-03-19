#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string str1{"Hello World"};
    std::string str2;
    std::string str3{};

    LINEFEED;
    std::cout << " usnig empty functoin: " << NL;
    std::cout << "\tstr1 is empty: " << std::boolalpha << str1.empty() << NL;
    std::cout << "\tstr2 is empty: " << std::boolalpha << str2.empty() << NL;
    std::cout << "\tstr3 is empty: " << std::boolalpha << str3.empty() << NL;

    LINEFEED;
    std::cout << " using size functoin: " << NL;
    std::cout << "\tstr1 contains " << str1.size() << " character." << NL;
    std::cout << "\tstr2 contains " << str2.size() << " character." << NL;
    std::cout << "\tstr3 contains " << str3.size() << " character." << NL;

    LINEFEED;
    std::cout << " using length functoin: " << NL;
    std::cout << "\tstr1 contains " << str1.length() << " character." << NL;
    std::cout << "\tstr2 contains " << str2.length() << " character." << NL;
    std::cout << "\tstr3 contains " << str3.length() << " character." << NL;


    std::cout << "\n #(13:43:56): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
