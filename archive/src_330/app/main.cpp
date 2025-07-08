#include "main.hpp"


int main() {

    int a{55};
    int b{77};

    auto result{a <=> b};

    pout << "a == b: " << (result == 0) << NL;
    pout << "a > b : " << (result > 0) << NL;
    pout << "a >= b: " << (result >= 0) << NL;
    pout << "a < b : " << (result < 0) << NL;
    pout << "a <= b: " << (result <= 0) << NL;
    pout << "a != b: " << (result != 0) << NL;
    SEP;

    pout << "a == b: " << (result == nullptr) << NL;
    pout << "a > b : " << (result > nullptr) << NL;
    pout << "a >= b: " << (result >= nullptr) << NL;
    pout << "a < b : " << (result < nullptr) << NL;
    pout << "a <= b: " << (result <= nullptr) << NL;
    pout << "a != b: " << (result != nullptr) << NL;
    SEP;

    pout << "a == b: " << ((a <=> b) == nullptr) << NL;
    pout << "a > b : " << ((a <=> b) > nullptr) << NL;
    pout << "a >= b: " << ((a <=> b) >= nullptr) << NL;
    pout << "a < b : " << ((a <=> b) < nullptr) << NL;
    pout << "a <= b: " << ((a <=> b) <= nullptr) << NL;
    pout << "a != b: " << ((a <=> b) != nullptr) << NL;
    SEP;


    pout << "a == b: " << std::is_eq(a <=> b) << NL;
    pout << "a > b : " << std::is_gt(a <=> b) << NL;
    pout << "a >= b: " << std::is_gteq(a <=> b) << NL;
    pout << "a < b : " << std::is_lt(a <=> b) << NL;
    pout << "a <= b: " << std::is_lteq(a <=> b) << NL;
    pout << "a != b: " << std::is_neq(a <=> b) << NL;
    SEP;


    pout << "\n #(07:36:09): The End ..." << eln;
    return EXIT_SUCCESS;
}
