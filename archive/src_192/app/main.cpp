/* function template return type deduction with auto  */

#include "main.hpp"

namespace cpp {

    auto maximum(auto a, auto b) noexcept;

    auto maximum(auto a, auto b) noexcept { return (a > b) ? a : b; }

} // namespace cpp


int main() {

    double a{10.23};
    int b{20};

    /* result deduced to the (double) data-type. because it larger than int. 
     * so value of b variable is returned with double data-type. */
    auto result{cpp::maximum(a, b)};
    out << "value of result is: " << result << NL;
    out << "result type name: " << typeid(result).name() << NL;

    out << "\n #(04:57:10): The End ..." << eln;
    return EXIT_SUCCESS;
}
