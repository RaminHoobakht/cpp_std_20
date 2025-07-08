#include "main.hpp"
#include <ostream>


class raphael final {

private:
    friend std::ostream &operator<<(std::ostream &os,
                                    const raphael &lhs) noexcept(true) {
        return os << lhs.number_;
    }

private:
    int number_{};

public:
    raphael() noexcept(true) : raphael{0} {}
    raphael(const int number_param) noexcept(true) : number_{number_param} {}
    [[maybe_unused]] void set_number(const int number_param) noexcept(true) {
        number_ = number_param;
    }
    [[nodiscard]] int get_number() const noexcept(true) { return number_; }

public:
    raphael &operator--() noexcept(true) {
        --number_;
        return *this;
    }

    raphael operator--(int) noexcept(true) {
        raphael local_raphael{number_};
        --(*this);
        return local_raphael;
    }
};


int main() {

    raphael my_raphael{500};

    pout << "value of my_raphael is: " << my_raphael << NL;
    SEP;

    pout << "value of --my_raphael is: " << --my_raphael << NL;
    SEP;

    pout << "value of my_raphael-- is: " << my_raphael-- << NL;
    SEP;

    pout << "value of my_raphael is: " << my_raphael << NL;
    SEP;


    pout << "\n #(20:42:16): The End ..." << eln;
    return EXIT_SUCCESS;
}
