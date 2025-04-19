/* decltype and trailing return types  */

#include "main.hpp"


int main() {

    LF;

    int a{120};
    double b{110};

    auto result{(a > b) ? a : b};
    out << "value of result is: " << result << NL;
    SEP;
    LF;

    /* as matter of fact decltype is a data-type qualifier for c variable.
       decltype return a data-type relevant of its expresion. */
    decltype((a > b) ? a : b) c{30};
    out << "value of c is: " << c << NL;
    out << "size of c is: " << sizeof(c) << NL;
    out << "type name of c is: " << typeid(c).name() << NL;
    SEP;
    LF;

    out << "\n #(06:09:58): The End ..." << eln;
    return EXIT_SUCCESS;
}
