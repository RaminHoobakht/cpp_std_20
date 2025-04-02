/* compiler optimization to return by reference */

#include <iostream>
#include "../header/utillib.hpp"

std::string add_string(std::string word_one, std::string word_two) noexcept;

int main() {

    LINEFEED;

    std::string word_one{"Hinata"};
    std::string word_two{"Chikao"};

    std::string main_result{add_string(word_one, word_two)};
    util::separator();

    std::cout << "reference of the main_result is: " << &main_result << NL;
    std::cout << "value of the main_result is: " << main_result << NL;


    std::cout << "\n #(21:56:11): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

/* -------------------------------- */

std::string add_string(std::string word_one, std::string word_two) noexcept {
    std::string local_result{word_one + word_two};
    std::cout << "reference of the local_result is: " << &local_result << NL;
    return local_result;
}
