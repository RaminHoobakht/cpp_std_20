/* using string_view */

#include "../header/main.hpp"
#include <iostream>


int main() {

    std::string_view sv1{};

    {
        std::string message{"an apple a day, keeps the doctor away."};
        sv1 = message;

        std::cout << "(within block) message: " << message << NL;
        std::cout << "(within block) sv1    : " << sv1 << NL;
        util::separator();
    }

    /* here is out of block and the message variable was removed from memory */
    // std::cout << "(out of block) message: " << message << NL;

    /* because hear is out of block, content of the sv1 was erased */
    std::cout << "(out of block) sv1    : " << sv1 << NL;


    std::cout << "\n #(12:00:47): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
