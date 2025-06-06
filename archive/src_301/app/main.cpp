/*
 *  Subject: inline function
 *
 * */

#include "main.hpp"

using point = entity::point3;

/* using inline function in structural programming */
inline int add(int a, int b) noexcept;


int main() {

    LF;

    /* lambda can not be inline. encounter with compile time error */
    // auto inline func_add = [](int a, int b) {
    //     /* code */
    //     return a + b;
    // };

    auto func_add = [](int a, int b) {
        /* code */
        return a + b;
    };


    auto result{add(50, 60)};
    pout << "value of result is: " << result << NL;
    SEP;

    auto result2{func_add(60, 70)};
    pout << "value of result2 is: " << result2 << NL;

    pout << "\n #(03:16:52): The End ..." << eln;
    return EXIT_SUCCESS;
}

/* using inline function in structural programming */
inline int add(int a, int b) noexcept {
    /* code */
    return a + b;
}
