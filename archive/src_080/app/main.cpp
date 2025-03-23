#include "../header/main.hpp"
#include <iostream>
#include <string>

int main() {

    std::string message{"Hello world"};
    std::string word{"Iran"};

    std::cout << "before replace: " << message << NL;
    LINEFEED;
    util::separator();

    std::basic_string<char> &result{message.replace(6, 10, word)};

    std::cout << "after replace : " << message << NL;
    std::cout << "output of the replace function: " << result << NL;

    LINEFEED;
    util::separator();

    message.insert(6, "... ");

    std::cout << "after insert : " << message << NL;
    std::cout << "output of the replace function: " << result << NL;

    std::cout << "\n #(17:52:44): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
