/* using std::optional */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

std::optional<int> find_character(const str &message, char my_char) noexcept;


int main() {

    const str my_message{"I am a C/C++ Developer ..."};
    const char ch{'D'};

    std::optional<int> result{find_character(my_message, ch)};
    if (result.has_value()) {
        out << "the character was fined ..." << NL;
    } else {
        out << "specified character was not found ..." << NL;
    }


    std::cout << "\n #(20:52:12): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

std::optional<int> find_character(const str &message,
                                  const char my_char) noexcept {

    size_t size{message.size()};

    for (size_t i{util::zero}; i < size; ++i) {
        if (message[i] == my_char) {
            return i;
        }
    }

    return {};
}
