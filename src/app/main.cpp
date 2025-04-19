/* Dacltype and triling return types  */

#include "main.hpp"


int main() {


    int a{120};
    double b{100};


    auto r1{(a > b) ? a : b};
    out << "max is: " << r1 << NL;
    out << "type  : " << typeid(r1).name() << NL;
    SEP;

    auto r2{sizeof(decltype((a > b) ? a : b))};
    out << "max is: " << r2 << NL;
    out << "type  : " << typeid(r2).name() << NL;
    SEP;

    // out << "max : " << ((a > b) ? a : b) << NL;
    // out << "size: " << sizeof(decltype((a > b) ? a : b)) << NL;


    out << "\n #(05:49:33): The End ..." << eln;
    return EXIT_SUCCESS;
}
