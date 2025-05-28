/*
 *  Subject: multiple definition
 *
 * */

#include "main.hpp"

int add(int a, int b) noexcept;

class raphael final {

private:
    int x_{};

public:
    raphael(const int x_param) noexcept : x_(x_param) {
        pout << "Hello Raphael ..." << NL;
    }

    int get_x() const noexcept { return x_; }
};


int main() {

    int result{add(150, 600)};
    pout << "value of result is: " << result << NL;
    SEP;

    raphael raphael_one{120};
    pout << "value of raphael is: " << raphael_one.get_x() << NL;
    SEP;


    pout << "\n #(23:19:08): The End ..." << eln;
    return EXIT_SUCCESS;
}


int add(int a, int b) noexcept {
    /* code */
    return a + b;
}
