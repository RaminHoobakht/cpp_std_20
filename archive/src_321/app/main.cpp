/* has been made a copy */

#include "main.hpp"

class raphael final {

private:
    double x_{};
    double y_{};
    int *z_{};

public:
    raphael() noexcept(true) : raphael{0.0, 0.0, 0} {}
    raphael(const double x_param, const double y_param,
            int z_param) noexcept(true) : x_(x_param), y_(y_param) {
        delete z_;
        z_ = new int{z_param};
    }

    raphael(const raphael &lhs) noexcept(true) {
        if (this != &lhs) {
            delete z_;
            x_ = lhs.x_;
            y_ = lhs.y_;
            z_ = new int{*(lhs.z_)};
        }
    }

    ~raphael() noexcept(true) { delete z_; }

    [[maybe_unused]] void set_x(const double x_param) noexcept(true) {
        x_ = x_param;
    }

    [[maybe_unused]] void set_y(const double y_param) noexcept(true) {
        y_ = y_param;
    }

    [[maybe_unused]] void set_z(const int z_param) noexcept(true) {
        delete z_;
        z_ = new int{z_param};
    }

    [[nodiscard]] double get_x() const noexcept(true) { return x_; }

    [[nodiscard]] double get_y() const noexcept(true) { return y_; }

    [[nodiscard]] int *get_z() const noexcept(true) { return z_; }

    raphael &operator=(const raphael &lhs) noexcept(true) {
        if (this != &lhs) {
            delete z_;
            x_ = lhs.x_;
            y_ = lhs.y_;
            z_ = new int{*(lhs.z_)};
        }
        return *this;
    }

    void print_info() const noexcept(true) {
        pout << "value of x is: " << x_ << NL;
        pout << "value of y is: " << y_ << NL;
        pout << "value of z is: " << *z_ << NL;
    }
};


int main() {

    raphael raphael_one{120.36, 22.85, 660};
    raphael raphael_two{280.47, 72.91, 780};

    pout << "raphael one: " << NL;
    raphael_one.print_info();
    SEP;

    pout << "raphael two: " << NL;
    raphael_two.print_info();
    SEP;

    pout << "raphael_one = raphael_two" << NL;
    raphael_one = raphael_two;
    SEP;

    pout << "raphael one: " << NL;
    raphael_one.print_info();
    SEP;

    pout << "raphael two: " << NL;
    raphael_two.print_info();
    SEP;

    pout << "raphael_two.set_z(999) " << NL;
    raphael_two.set_z(999);
    SEP;

    pout << "raphael one: " << NL;
    raphael_one.print_info();
    SEP;

    pout << "raphael two: " << NL;
    raphael_two.print_info();
    SEP;


    pout << "\n #(05:46:46): The End ..." << eln;
    return EXIT_SUCCESS;
}

//(06:16:53)

//(06:17:35)
