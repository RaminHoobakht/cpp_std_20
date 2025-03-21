#include "../header/main.hpp"
#include <iostream>

int main() {

    const char word[]{'H', 'e', 'l', 'l', 'o', '-', 'H', 'e', 'l', 'l', 'o'};
    const size_t size{sizeof(word) / sizeof(*word)};

    std::cout << "size of word is: " << size << NL;
    std::cout << "value of word is: " << word << NL;


    for (size_t i{util::zero}; i < size; ++i) {
        std::cout << i << " - " << word[i] << " : " << int(word[i]) << NL;
    }


    LINEFEED;

    std::cout << "\n #(06:50:31): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
