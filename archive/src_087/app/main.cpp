/* using find function in string class */

#include "../header/main.hpp"
#include <iostream>


int main() {

    const std::string message{"an apple a day, keeps the doctor away"};

    size_t result{message.find("doctor", 16)};

    if (result == std::string::npos) {
        std::cout << "the 'doctor' word was not found ..." << NL;
    } else {
        std::cout << "the 'doctor' word was found in ";
        std::cout << "position of " << result << NL;
    }

    result = message.find("keep", 22);

    if (result == std::string::npos) {
        std::cout << "the 'keep' word was not found ..." << NL;
    } else {
        std::cout << "the 'keep' word was found in ";
        std::cout << "position of " << result << NL;
    }


    std::cout << "\n #(17:20:02): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
