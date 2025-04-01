/* As always, I should do my stubborn struggle */
/*  */

#include <iostream>
#include "../header/utillib.hpp"

void max_str(const std::string &input_one, const std::string &input_two,
             std::string &out_put) noexcept;


int main() {

    std::string name_one{"Hinata"};
    std::string name_two{"Chikao"};
    std::string output{};

    max_str(name_one, name_two, output);

    std::cout << "output is: " << output << NL;

    std::cout << "\n #(19:33:12): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

void max_str(const std::string &input_one, const std::string &input_two,
             std::string &out_put) noexcept {

    if (input_one > input_two) {
        out_put = input_one;
    } else {
        out_put = input_two;
    }
}
