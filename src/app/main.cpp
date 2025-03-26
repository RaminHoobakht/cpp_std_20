/* viewing non null terminated string (BAD) */

#include "../header/main.hpp"
#include <cstring>
#include <iostream>


int main() {

    char char_array[]{'H', 'l', 'l', 'o'};
    std::string_view sv{char_array};


    /* encounter with compile error */
    std::cout << "sv has " << std::strlen(sv.data()) << sv << NL;

    /* encounter with compile error */
    std::cout << "sv.data(): " << sv.data() << NL;

    std::cout << "\n #(13:27:45): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
