/* using std::optional */

#include <iostream>
#include <optional>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

std::optional<int> find_character(crstr message,
                                  std::optional<char> my_char) noexcept;


int main() {

    cstr message{"I am a Junior C/C++ Developer."};

    std::optional<int> result{find_character(message, std::nullopt)};

    if (result.has_value()) {
        out << " I found the the character ..." << NL;
        out << " That index is: " << result.value() << NL;
    } else {
        out << " Sorry, I cann't see it ..." << NL;
    }


    std::cout << "\n #(23:42:12): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

std::optional<int> find_character(crstr message,
                                  std::optional<char> my_char) noexcept {

    const char the_char{my_char.value_or('D')};
    size_t size{message.size()};

    for (size_t i{util::zero}; i < size; ++i) {
        if (message[i] == the_char) {
            return i;
        }
    }
    return {std::nullopt};
}
