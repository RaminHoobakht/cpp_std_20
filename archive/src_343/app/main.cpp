#include "main.hpp"

int main() {


    /* before removing virtual keyword */
    // pout << "sizeof(shape) is: " << sizeof(albert::shape) << NL; /* 40 */
    // pout << "sizeof(oval) is: " << sizeof(albert::oval) << NL; /* 56 */
    // pout << "sizeof(circle) is: " << sizeof(albert::circle) << NL; /* 64 */


    /* after removing virtual keyword */
    // pout << "sizeof(shape) is: " << sizeof(albert::shape) << NL; /* 32 */
    // pout << "sizeof(oval) is: " << sizeof(albert::oval) << NL; /* 48 */
    // pout << "sizeof(circle) is: " << sizeof(albert::circle) << NL; /* 56 */

    albert::circle my_circle{22.36, "Circle One"};
    albert::shape my_shape{my_circle};

    pout << "sizeof(my_circle): " << sizeof(my_circle) << NL; /* 64 */
    pout << "sizeof(my_shape): " << sizeof(my_circle) << NL; /* 64 */

    pout << "\n #(16:57:42): The End ..." << eln;
    return EXIT_SUCCESS;
}

//(19:23:37)
