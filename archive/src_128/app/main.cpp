/* using type aliases */

#include <iostream>
#include "../header/utillib.hpp"

/* the old way to type definition */
typedef unsigned long long int my_llu_old;

/* the new way to type definition */
using my_llu_new = unsigned long long int;

int main() {

    my_llu_old x{1'203'699};
    my_llu_new y{6'546'549'879};

    std::cout << "value of x is: " << x << NL;
    std::cout << "value of x is: " << y << NL;

    std::cout << "\n #(16:41:16): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
