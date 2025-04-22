/* function template: there is ambiguous to call function  */

#include "main.hpp"


int main() {


    int a{120};
    int b{320};

    /* because more than one instance of overloaded cpp::maximum 
       function matches with argument list, it is ambiguous to function
       invocation. both (template<typename T> T maximum(T a, T b) noexcept) and
       (template<typename T> const T &maximum(const T &a, const T &b) noexcept) 
       are suitable for both variables (a, b). */
    auto result{cpp::maximum(a, b)};

    out << "\n #(00:00:00): The End ..." << eln;
    return EXIT_SUCCESS;
}
