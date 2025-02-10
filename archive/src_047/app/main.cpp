#include "../header/main.hpp"
#include <iostream>
#include <string>

int main() {

    std::string message1(5, 'e');
    std::cout << "message one is: " << message1 << NL;

    /* ------------------------------------------------------ */

    std::string message2{"Hello World!"};
    std::string message3{message2, 6, 5};
    std::cout << "message three is: " << message3 << NL;

    /* ------------------------------------------------------ */

    std::string planet{"Earth, where the sky is blue."};
    std::cout << "planet message is: " << planet << NL;

    planet = "Earth, where the sky is blue. Earth, where the sky is blue. "
             "Earth, where the sky is blue. Earth, where the sky is blue.";
    std::cout << "new planet message is: " << planet << NL;

    /* ------------------------------------------------------ */

    const char *raw_planet{"Earth, where the sky is blue."};
    std::cout << "raw planet is: " << raw_planet << NL;

    raw_planet = "Earth, where the sky is blue. Earth, where the sky is blue. "
                 "Earth, where the sky is blue. Earth, where the sky is blue.";
    std::cout << "new raw planet is: " << raw_planet << NL;

    std::cout << "\n #(18:13:51): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
