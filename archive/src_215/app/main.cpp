/* Subject: Non type template parameters  */

#include "main.hpp"


int main() {

    double temperatures[]{10.36, 1.32, 12.23, 23.11, 12.20, 32.11, 3, 6, 42.23};

    const bool valid{cpp::is_valid<200.5, double>(temperatures, std::size(temperatures))};
    out << std::boolalpha << "is valid? " << valid << NL;

    out << "\n #(15:29:30): The End ..." << eln;
    return EXIT_SUCCESS;
}
