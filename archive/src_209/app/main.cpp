/* Subject: decltype and trailing return types  */

#include "main.hpp"


int main() {

    int a{2500};
    double b{103};

    auto result{(a > b) ? a : b};
    out << "value of result is: " << result << NL;

    /* return data-type is (double) */
    out << "result is: " << util::data_type_name(result) << NL;


    out << "\n #(00:45:03): The End ..." << eln;
    return EXIT_SUCCESS;
}
