/* optional output from function */

#include <cstddef>
#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

int optional_output_v0(const str &message, char input_char) noexcept;

int main() {

    const str my_message{"I am a C/C++ Developer ..."};

    int result{optional_output_v0(my_message, 'D')};

    if (result != -1) {
        out << "I find the character ..." << NL;
    } else {
        out << "I do not found the character ..." << NL;
    }


    std::cout << "\n #(17:03:00): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

int optional_output_v0(const str &message, const char input_char) noexcept {

    int not_find{-1};
    size_t size{message.size()};

    for (size_t i{util::zero}; i < size; ++i) {
        if (message.at(i) == input_char) {
            return (static_cast<int>(i));
        }
    }
    return (not_find);
}
