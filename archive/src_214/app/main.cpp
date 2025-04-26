/* Subject: using default argument in function template  */

#include "main.hpp"


int main() {

    LF;

    int a{780};
    char b{'a'};

    const auto result{cpp::maximum(a, b)};
    out << "value of result is: " << result << NL;
    out << "result data type name: " << util::data_type_name(result) << NL;
    SEP;

    out << "\n #(14:42:13): The End ..." << eln;
    return EXIT_SUCCESS;
}
