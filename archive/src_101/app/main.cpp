/* using string_view */

#include "../header/main.hpp"
#include <iostream>
#include <string_view>


int main() {

    std::string str1{"Regular std::string"};
    const char *c_string{"Regular c-string"};
    const char char_array[]{"char array"}; /* null terminated */
    char char_array2[]{'H', 'u', 'g', 'e'}; /* not null terminated*/

    std::string_view sv1{"string literal"};
    std::string_view sv2{str1};
    std::string_view sv3{c_string};
    std::string_view sv4{char_array};
    std::string_view sv5{sv3};
    /* not null terminated char array. need to pass size info */
    std::string_view sv6{char_array2, std::size(char_array2)};

    std::cout << "sv1: " << sv1 << NL;
    std::cout << "sv2: " << sv2 << NL;
    std::cout << "sv3: " << sv3 << NL;
    std::cout << "sv4: " << sv4 << NL;
    std::cout << "sv5 (constructed from other string view): " << sv5 << NL;
    std::cout << "sv6 (not null terminated string with string view): " << sv6
              << NL;

    std::cout << "\n #(18:53:45): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
