/* Subject: auto function template  */

#include "main.hpp"


int main() {

    LF;

    const int a {120};
    const double b{320.369};

    const auto result{cpp::sum(a, b)};
    out << "value of result is: " << result << NL;
    out << "result data type name is: " << util::data_type_name(result) << NL;

    out << "\n #(18:50:26): The End ..." << eln;
    return EXIT_SUCCESS;
}
