#include "main.hpp"
#include <cmath>

namespace {
    bool is_double_equal(double a, double b) noexcept(true);

    auto is_double_equal(const double a, const double b) noexcept(true) -> bool {
        return std::fabs(a - b) <= static_cast<double>(4) * std::numeric_limits<double>::epsilon();
    }
}


int main() {
    constexpr int a{10};
    constexpr int b{20};

    const std::strong_ordering result{a <=> b};

    pout << (result == 0) << NL;
    pout << (result > 0) << NL;
    pout << (result < 0) << NL;
    pout << (result >= 0) << NL;
    pout << (result <= 0) << NL;
    pout << (result != 0) << NL;
    SEP;

    pout << ((a <=> b) == nullptr) << NL;
    pout << ((a <=> b) > nullptr) << NL;
    pout << ((a <=> b) < nullptr) << NL;
    pout << ((a <=> b) >= nullptr) << NL;
    pout << ((a <=> b) <= nullptr) << NL;
    pout << ((a <=> b) != nullptr) << NL;
    SEP;

    constexpr double a2{0.1 + 0.1 + 0.1};
    constexpr double b2{0.3};

    const auto result2{a2 <=> b2};
    pout << is_eq(result2) << NL;

    pout << "value of a is: " << a2 << NL;
    pout << "value of b is: " << b2 << NL;
    SEP;

    pout << "((a <=> b) == 0): " << std::is_eq(a2 <=> b2) << NL;
    pout << "((a <=> b) > 0): " << std::is_gt(a2 <=> b2) << NL;
    pout << "((a <=> b) < 0): " << std::is_lt(a2 <=> b2) << NL;
    pout << "((a <=> b) >= 0): " << std::is_gteq(a2 <=> b2) << NL;
    pout << "((a <=> b) <= 0): " << std::is_lteq(a2 <=> b2) << NL;
    pout << "((a <=> b) != 0): " << std::is_neq(a2 <=> b2) << NL;
    SEP;

    if (is_double_equal(a2, b2)) {
        pout << "a and b are equals ..." << NL;
    } else {
        pout << "a and b are not equals ..." << NL;
    }

    pout << "\n #(11:25:16): The End ..." << eln;
    return EXIT_SUCCESS;
}
