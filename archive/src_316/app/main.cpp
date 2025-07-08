/*
 *  Subject: unary increment prefix overloading
 *
 * * */

#include <ostream>
#include "main.hpp"

class daniel final {

private:
    friend std::ostream &operator<<(std::ostream &os,
                                    const daniel &rhs) noexcept {
        return os << rhs.num_;
    }

    friend daniel &operator++(daniel &rhs) noexcept {
        ++rhs.num_;
        return rhs;
    }


private:
    int num_{};

public:
    daniel() = delete;
    daniel(int num_param) noexcept : num_(num_param) {}

    daniel operator++(int rhs) noexcept { return daniel(rhs + num_++); }
};


int main() {

    daniel my_daniel{1320};

    pout << "value of my_daniel is: " << my_daniel << NL;
    SEP;

    pout << "value of ++my_daniel is: " << ++my_daniel << NL;
    SEP;

    pout << "value of my_daniel++ is: " << my_daniel++ << NL;
    SEP;

    pout << "value of my_daniel is: " << my_daniel << NL;
    SEP;

    pout << "\n #(07:08:04): The End ..." << eln;
    return EXIT_SUCCESS;
}
