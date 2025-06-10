/*
 *  Subject: custom type conversion
 *
 * * */

#include "main.hpp"

namespace learn_cpp {

    class raphael final {

    private:
        int x_{};

    public:
        raphael() noexcept : raphael{0} {}
        explicit raphael(const int x_param) noexcept : x_{x_param} {}

        [[maybe_unused]] void set_x(const int x_param) noexcept {
            x_ = x_param;
        }

        [[nodiscard]] int get_x() const noexcept { return x_; }

        explicit operator double() const noexcept {
            return static_cast<double>(x_);
        }

        explicit operator entity::point4() const noexcept {
            return entity::point4(x_, 0.0);
        }
    };

} // namespace learn_cpp


int main() {
    /* code */

    learn_cpp::raphael raphael_one{120};

    pout << "raphael_one: " << NL;
    double result{static_cast<double>(raphael_one)};
    pout << "value of result is: " << result << NL;
    SEP;

    pout << "point_one: " << NL;
    entity::point4 point_one{static_cast<entity::point4>(raphael_one)};
    point_one.print_info();
    SEP;


    pout << "\n #(10:55:18): The End ..." << eln;
    return EXIT_SUCCESS;
}
