

int add(int a, int b) noexcept;

int add(int a, int b) noexcept {
    /* code */
    return a + b;
}

#include "../util/util.hpp"


class raphael final {

private:
    int x_{};

public:
    raphael(const int x_param) noexcept : x_(x_param) {
        pout << "Hello Raphael ..." << NL;
    }

    int get_x() const noexcept { return x_; }
};
