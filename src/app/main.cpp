/* using decltype in function template auto type deduction  */

#include "main.hpp"

namespace cpp {

    template<typename T, typename P>
    auto maximum(T a, P b) -> decltype((a == b) ? a : b);


    template<typename T, typename P>
    auto maximum(T a, P b) -> decltype((a == b) ? a : b) {
        return (a > b) ? a : b;
    }


} // namespace cpp


int main() {


    int a{120};
    double b{2.1124};

    auto result{cpp::maximum(a, b)};

    out << "value of result is: " << result << NL;
    out << "data type is: " << typeid(result).name() << NL;


    out << "\n #(08:00:31): The End ..." << eln;
    return EXIT_SUCCESS;
}
