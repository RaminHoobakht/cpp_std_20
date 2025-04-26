/* Subject: type traits  */

#include "main.hpp"


int main() {

    [[maybe_unused]] int a{45};

    out << "is integral<int>: " << std::is_integral<int>::value << NL;
    out << "is integral<double>: " << std::is_integral<double>::value << NL;
    out << "is_floating_point<int>: " << std::is_floating_point<int>::value
        << NL;
    out << "is_floating_pint<double>: " << std::is_floating_point<double>::value
        << NL;

    /* encounter with compile time error. only data type should be pass */
    // out << "is_floating_point<a>: " << std::is_floating_point<a>::value <<
    // NL;


    out << "\n #(21:51:16): The End ..." << eln;
    return EXIT_SUCCESS;
}
