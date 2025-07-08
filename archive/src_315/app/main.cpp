/*
 *  Subject: unary increment prefix overloading
 *
 * * */

#include <ostream>
#include "main.hpp"

class raphael final {

private:
    friend std::ostream &operator<<(std::ostream &os,
                                    const raphael &rhs) noexcept {
        return os << rhs.num_;
    }

private:
    int num_{120};

public:
    raphael() noexcept = default;

    raphael(int num_param) noexcept : num_{num_param} {}

    raphael &operator++() noexcept {
        ++num_;
        return *this;
    }

    raphael operator++(int lhs) noexcept {
        lhs++;
        return raphael{num_++};
    }
};


int main() {

    raphael my_raphael{};

    pout << "value of my_raphael is: " << my_raphael << NL;
    SEP;

    pout << "value of ++my_raphael is: " << ++my_raphael << NL;
    SEP;

    pout << "value of my_raphael++ is: " << my_raphael++ << NL;
    pout << "value of my_raphael++ is: " << my_raphael << NL;
    SEP;

    pout << "\n #(06:52:20): The End ..." << eln;
    return EXIT_SUCCESS;
}
