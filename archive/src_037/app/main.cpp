#include <iostream>
#include <cstring>
#include "../header/main.hpp"


int main() {
    /* code */

    /* (constexpr auto) is evaluate (const char * const) or
       (char const * const) data-type at compile time.  */
    constexpr auto string_data1{"Alabama"};
    constexpr auto string_data2{"Alabama"};

    // constexpr auto string_data1{"Alabama"};
    // constexpr auto string_data2{"Blabama"};

    // constexpr auto string_data1{"Blabama"};
    // constexpr auto string_data2{"Alabama"};

    /*
     * result =  0: string_data1 = string_data_2
     * result =  1: string_data1 > string_data_2
     * result = -1: string_data1 < string_data_2
     */
    const int result1{std::strcmp(string_data1, string_data2)};
    std::cout << "result is: " << result1 << NL;

    constexpr auto string_data3{"Alabcd"};
    constexpr auto string_data4{"Alaefg"};

    const int result2{std::strncmp(string_data3, string_data4, 3LLU)};
    std::cout << "result is: " << result2 << NL;

    std::cout << "\n #(12:42:11): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
