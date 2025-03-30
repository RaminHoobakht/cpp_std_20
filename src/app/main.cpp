/* using consteval */

#include <iostream>
#include "../header/utillib.hpp"

consteval int get_value(int value) noexcept {
    /* code */
    return 3 * value;
}


int main() {


    int result{get_value(50)};
    std::cout << "result is: " << result << NL;

    int number{70};
    // int result2{get_value(number)}; /* compile time error */


    std::cout << "\n #(02:57:21): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
