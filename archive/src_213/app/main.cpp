/* Subject: using decltype auto */

#include "main.hpp"


int main() {

    LF;

    const int a{25};
    const double b{13.36};

    const auto result{cpp::maximum(a, b)};
    out << "result data type name: " << util::data_type_name(result) << NL;
    out << "value of result is: " << result << NL;
    SEP;


    out << "\n #(14:30:05): The End ..." << eln;
    return EXIT_SUCCESS;
}
