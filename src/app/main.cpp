#include "../header/main.hpp"
#include <iostream>


int main() {

    const std::string word_one{"Hello"};
    const std::string word_two{"Iello"};

    std::cout << std::boolalpha;

    std::cout << "word_one is: " << word_one << NL;
    std::cout << "word_two is: " << word_two << NL;
    util::separator();

    std::cout << "word_one == word_two: " << (word_one == word_two) << NL;
    util::separator();

    std::cout << "word_one > word_two : " << (word_one > word_two) << NL;
    std::cout << "word_one < word_two : " << (word_one < word_two) << NL;
    util::separator();

    std::cout << "word_one >= word_two: " << (word_one >= word_two) << NL;
    std::cout << "word_one <= word_two: " << (word_one <= word_two) << NL;
    util::separator();

    std::cout << "word_one != word_two: " << (word_one != word_two) << NL;

    std::cout << "\n #(19:22:45): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
