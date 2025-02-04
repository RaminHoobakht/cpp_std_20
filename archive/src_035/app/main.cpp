#include <iostream>
#include "../header/main.hpp"

int main() {
    size_t counter{};
    constexpr char thought[]{"C++ Programming Language is one of the most used on the Planet."};
    constexpr size_t length{std::size(thought)};
    char lower_msg[length]{};
    char upper_msg[length]{};

    for (const char item: thought) {
        lower_msg[counter] = static_cast<char>(std::tolower(item));
        upper_msg[counter] = static_cast<char>(std::toupper(item));
        ++counter;
    }

    const char *om = thought;
    const char *lm = lower_msg;
    const char *um = upper_msg;

    std::cout << " Original message     : " << om << NL;
    std::cout << " message in lower case: " << lm << NL;
    std::cout << " message in upper case: " << um << NL;


    std::cout << "\n #(19:24:01): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
