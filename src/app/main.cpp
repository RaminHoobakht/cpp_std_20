/* Subject: using concepts  */

#include "main.hpp"

int main() {

    int a{120};
    int b{320};

    /* as in concepts constraint specified add function
       must call only with integral data type. */
    const int result{cpp::add(a, b)};
    out << "result is: " << result << NL;


    out << "\n #(01:51:25): The End ..." << eln;
    return EXIT_SUCCESS;
}
