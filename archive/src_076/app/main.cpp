#include "../header/main.hpp"
#include <ios>
#include <iostream>


int main() {

    const std::string word_one{"Hello"};
    const char word_two[]{'B', 'e', 'l', 'l', 'o', '\0'};

    std::cout << word_one << NL;
    std::cout << word_two << NL;

    LINEFEED;
    util::separator();

    std::cout << std::boolalpha;
    std::cout << "word_one == word_two: " << (word_one == word_two) << NL;
    std::cout << "word_one >  word_two: " << (word_one > word_two) << NL;
    std::cout << "word_one <  word_two: " << (word_one < word_two) << NL;
    std::cout << "word_one >= word_two: " << (word_one >= word_two) << NL;
    std::cout << "word_one <= word_two: " << (word_one <= word_two) << NL;
    std::cout << "word_one != word_two: " << (word_one != word_two) << NL;

    std::cout << "\n #(20:38:57): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
