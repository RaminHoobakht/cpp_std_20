/* Subject: named template parameters for lambdas  */

#include "main.hpp"


int main() {

    LF;

    auto func1 = [=](auto a, auto b) {
        return a + b;
    };

    auto func2 = [=]<typename T>(T a, T b) {
        return a + b;
    };

    int a{120};
    int ab{220};
    double b{25.36};

    const auto result_one{func1(a, b)};
    out << "value of result is: " << result_one << NL;
    out << "result data type name is: " << util::data_type_name(result_one) << NL;
    SEP;

    const auto result_two{func2(a, ab)};
    out << "value of result is: " << result_two << NL;
    out << "result data type name is: " << util::data_type_name(result_two) << NL;
    SEP;

    out << "\n #(19:07:20): The End ..." << eln;
    return EXIT_SUCCESS;
}
