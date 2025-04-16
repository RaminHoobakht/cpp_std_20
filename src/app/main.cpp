/* lambda function */

#include <iostream>
#include "../header/utillib.hpp"


int main() {

    /* below lambda function has no effect */
    [](double a, double b) noexcept(true) {
        LF;
        return (a + b);
    }(120.36, 56.69);

    /* below lambda function print out the result add operation */
    out << "result is: " <<
            [](double a, double b) noexcept(true) {
                /* code */
                return (a + b);
            }(120.36, 56.69)
        << NL;

    out << "\n #(21:25:23): The End ..." << end;
    return EXIT_SUCCESS;
}
