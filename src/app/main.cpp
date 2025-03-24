/* using of find function in string class  */

#include "../header/main.hpp"
#include <iostream>


int main() {

    const std::string message{"an apple a day, keeps the doctor away"};
    const char *word1{"doctor"};
    const char *word2{"keep"};

    size_t result{message.find(word1)};

    if (result == std::string::npos) {
        std::cout << "the word of 'doctor' was not found ... " << NL;
    } else {
        std::cout << "the word of 'doctor' was found in position of ";
        std::cout << result << " ..." << NL;
    }

    /* ------------------ */

    result = message.find(word2, 22);

    if (result == std::string::npos) {
        std::cout << "the word of 'keep' was not found ... " << NL;
    } else {
        std::cout << "the word of 'keep' was found in position of ";
        std::cout << result << " ..." << NL;
    }


    std::cout << "\n #(17:53:01): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
