/*
 *  Subject: operator overloading
 *
 * * */

#include "main.hpp"

namespace learn_cpp {

    class number final {

    private:
        int x_{};

    public:
        number() noexcept = default;
        explicit number(const int num_param) noexcept : x_(num_param) {}

        [[maybe_unused]] void set_x(const int x_param) noexcept {
            x_ = x_param;
        }

        [[nodiscard]] int get_x() const noexcept { return x_; }

        operator double() const noexcept { return static_cast<double>(x_); }
        operator entity::point4() const noexcept {
            return entity::point4(x_, 0.0);
        }
    };
} // namespace learn_cpp


int main() {
    /* code */

    learn_cpp::number my_number{120};
    pout << "value of number class is: " << my_number.get_x() << NL;
    SEP;

    double dbl_num{static_cast<double>(my_number)};
    pout << "value of dbl_num is: " << dbl_num << NL;
    SEP;

    entity::point4 my_point{static_cast<entity::point4>(my_number)};
    my_point.print_info();
    SEP;

    pout << "\n #(10:22:14): The End ..." << eln;
    return EXIT_SUCCESS;
}
