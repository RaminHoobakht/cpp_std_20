/* Subject: decltype and trailing return types  */

#include "main.hpp"


int main() {

    int a{25};
    double b{13.36};

    decltype((a > b) ? a : b) c{};

    auto result = util::data_type_name(c);
    out << "data type is: " << result << NL;


    out << "\n #(02:49:14): The End ..." << eln;
    return EXIT_SUCCESS;
}
