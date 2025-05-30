/*
 *  Subject: passing object by value into the function.
 *
 * */

#include "main.hpp"


/* input an object to a function and return it in step 2 */
class raphael final {

private:
    int code_{636};
    inline static int counter_{0};

public:
    raphael(int code_param) noexcept : code_(code_param) {
        raphael::counter_++;
        pout << "Hello Raphael (" << raphael::counter_ << ") " << this << NL;
    }

    ~raphael() noexcept {
        pout << "Goodby Raphael (" << raphael::counter_ << ") " << this << NL;
        raphael::counter_--;
    }

    long get_code() const noexcept {
        /* code */
        return code_;
    }
};

raphael some_raphael_function(raphael rhs) noexcept;

/* -------------------------------------- */

int main() {

    /* create raphael counter is equals 1 */
    SEP;
    pout << "create my_raphael ..." << NL;
    raphael my_raphael{120};
    pout << "value of raphael: " << my_raphael.get_code()
         << " address: " << &my_raphael << NL;
    SEP;

    /* pass by value. create another raphael without calling constructor
       counter is equals 1 */
    pout << "some_raphael_function invocation ..." << NL;
    auto result{some_raphael_function(my_raphael)};
    SEP;

    pout << "print code ..." << NL;
    pout << "value of raphael: " << result.get_code() << " address: " << &result
         << NL;
    SEP;

    pout << "\n #(09:43:14): The End ..." << eln;
    return EXIT_SUCCESS;
}

raphael some_raphael_function(raphael rhs) noexcept {
    /* code */
    pout << "value of raphael: " << rhs.get_code() << " address: " << &rhs
         << NL;
    return rhs;
}
