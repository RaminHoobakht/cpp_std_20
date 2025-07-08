#include "main.hpp"
#include <ostream>
#include <utility>

class raphael final {

private:
    friend bool operator>(const raphael &lhs,
                          const raphael &rhs) noexcept(true) {
        return lhs.num_ > rhs.num_;
    }

    friend bool operator>(const int lhs, const raphael &rhs) noexcept(true) {
        return lhs > rhs.num_;
    }

    friend bool operator>(const raphael &lhs, const int rhs) noexcept(true) {
        return lhs.num_ > rhs;
    }


private:
    friend std::ostream &operator<<(std::ostream &os,
                                    const raphael &lhs) noexcept(true) {
        return os << lhs.num_;
    }

private:
    int num_{};

public:
    raphael() noexcept(true) : raphael{0} {}

    explicit raphael(int num_param) noexcept(true) : num_{num_param} {}

    raphael(const raphael &rhs) noexcept(true) : raphael{rhs.num_} {}

    raphael(raphael &&rhs) noexcept(true) :
        raphael{std::exchange(rhs.num_, 0)} {}

    /* -------- */

    [[maybe_unused]] void set_raphael(const int num_param) noexcept(true) {
        num_ = num_param;
    }

    [[nodiscard]] int get_raphael() const noexcept(true) { return num_; }

    /* -------- */

    raphael &operator=(const raphael &rhs) noexcept(true) {
        if (this != &rhs) {
            num_ = rhs.num_;
        }
        return *this;
    }

    raphael &operator=(raphael &&rhs) noexcept(true) {
        if (this != &rhs) {
            num_ = std::exchange(rhs.num_, 0);
        }
        return *this;
    }

    /* -------- */

    // bool operator>(const raphael &lhs) const noexcept(true) {
    //     return num_ > lhs.num_;
    // }
};


int main() {

    raphael raphael_one{120};
    raphael raphael_two{520};

    pout << "value of raphael one is: " << raphael_one << NL;
    SEP;

    pout << "value of raphael two is: " << raphael_two << NL;
    SEP;

    pout << "raphael_one > raphael_two: " << (raphael_one > raphael_two) << NL;
    SEP;

    pout << "raphael_one > 15: " << (raphael_one > 15) << NL;
    SEP;

    pout << "15 > raphael_two " << (25 > raphael_two) << NL;
    SEP;


    pout << "\n #(06:36:38): The End ..." << eln;
    return EXIT_SUCCESS;
}
