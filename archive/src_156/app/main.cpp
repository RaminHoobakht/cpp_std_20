/* optional output from function */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

void optional_output_v1(const str &message, char my_char,
                        bool &success) noexcept;


int main() {

    LF;

    const str my_message{"I am a C/C++ Developer ..."};
    const char ch{'+'};
    bool result{false};

    optional_output_v1(my_message, ch, result);

    if (result) {
        out << "I found the '" << ch << "' character in the message ..." << NL;
    } else {
        out << "I did not found '" << ch << "' character int the message ..."
            << NL;
    }


    std::cout << "\n #(17:31:30): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

void optional_output_v1(const str &message, const char my_char,
                        bool &success) noexcept {

    size_t size{message.size()};

    for (size_t i{util::zero}; i < size; ++i) {
        if (message.at(i) == my_char) {
            success = true;
            return;
        }
    }
    success = false;
}
