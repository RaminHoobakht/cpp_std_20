#include "../header/main.hpp"
#include <ios>
#include <iostream>


int main() {

    const std::string word_one{"Hello"};
    const char *word_two{"World"};

    std::cout << std::boolalpha;
    std::cout << "word_one == word_two: " << (word_one == word_two) << NL;
    std::cout << "word_one > word_two : " << (word_one > word_two) << NL;
    std::cout << "word_one < word_two : " << (word_one < word_two) << NL;
    std::cout << "word_one >= word_two: " << (word_one >= word_two) << NL;
    std::cout << "word_one <= word_two: " << (word_one <= word_two) << NL;
    std::cout << "word_one != word_two: " << (word_one != word_two) << NL;


    std::cout << "\n #(23:32:12): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
