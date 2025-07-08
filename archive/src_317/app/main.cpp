/*
 *  Subject: unary increment prefix overloading
 *
 * * */

#include <ostream>
#include "main.hpp"


class integer final {

private:
    friend std::ostream &operator<<(std::ostream &os,
                                    const integer &rhs) noexcept {
        return os << rhs.num_;
    }

private:
    int num_{};

public:
    integer() noexcept : integer{0} {};
    integer(const int num_param) noexcept : num_{num_param} {};
    integer(const integer &rhs) noexcept = default;
    integer(integer &&rhs) noexcept = default;
    ~integer() noexcept = default;

    integer &operator++() noexcept {
        ++num_;
        return *this;
    }

    integer operator++(int) noexcept {
        integer local_integer{*this};
        ++(*this);
        return local_integer;
    }
};


int main() {

    integer a = 120;

    pout << "value of a is : " << a << NL;
    SEP;

    ++a;
    pout << "value of (++a) a is: " << a << NL;
    SEP;

    pout << "value of ++a is: " << ++a << NL;
    SEP;

    pout << "value fo a++ is: " << a++ << NL;
    SEP;

    pout << "value fo a is: " << a << NL;
    SEP;

    pout << "\n #(09:01:10): The End ..." << eln;
    return EXIT_SUCCESS;
}
