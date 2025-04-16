/* lambda function */

#include <iostream>
#include "../header/utillib.hpp"


int main() {

    auto result = [](double a, double b) noexcept(true) {
        LF;
        return (a + b);
    }(36.52, 47.96);

    out << "value of result is: " << result << NL;


    []() {
        LF;
        out << "I am a C/C++ Developer ..." << NL;
    }();

    auto hello = []() {
        LF;
        out << "I am a C/C++ Developer ..." << NL;
    };

    hello();


    out << "\n #(20:43:24): The End ..." << end;
    return EXIT_SUCCESS;
}
