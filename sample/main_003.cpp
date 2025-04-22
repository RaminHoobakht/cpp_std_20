/*  what is difference between:
    syntax: func(int &a, int &b) call: func(a, b) and
    syntax: func(int a, int b)   call: func(&a, &b)? */

#include "main.hpp"

namespace cpp {

    template<typename T>
    void func_one(T a, T b) noexcept;

    template<typename T>
    void func_two(T &a, T &b) noexcept;


} // namespace cpp


int main() {

    int x{120};
    int y{320};

    out << "main before: value of x is: " << x << NL;
    out << "main before: value of y is: " << y << NL;
    SEP;

    out << "main before: address of x is: " << &x << NL;
    out << "main before: address of y is: " << &y << NL;
    SEP;

    /* x and y passe into the func_one as a address */
    cpp::func_one(&x, &y);
    SEP;


    out << "main after: value of x is: " << x << NL;
    out << "main after: value of y is: " << y << NL;
    SEP;

    out << "main after: address of x is: " << &x << NL;
    out << "main after: address of y is: " << &y << NL;
    SEP;

    /* x and y variables pass into func_two as an native object */
    cpp::func_two(x, y);
    SEP;

    out << "main after: value of x is: " << x << NL;
    out << "main after: value of y is: " << y << NL;
    SEP;

    out << "main after: address of x is: " << &x << NL;
    out << "main after: address of y is: " << &y << NL;
    SEP;


    out << "\n #(12:56:31): The End ..." << eln;
    return EXIT_SUCCESS;
}


namespace cpp {

    template<typename T>
    void func_one(T a, T b) noexcept {

        /* refer to the function invocation, a inputs to func_one
           as &a. so in below statement, a is equals to &a */
        out << "inside: value of a is: " << a << NL;

        /* refer to the function invocation, b inputs to func_one
           as &a. so in below statement, b is equals to &b */
        out << "inside: value of b is: " << b << NL;

        ++(*a);
        ++(*b);

        /* refer to the function invocation, a input to func_one
           as &a. so in below statement, &a is equals to &&a */
        out << "inside:  address of a: " << &a << NL;

        /* refer to the function invocation, b input to func_one
        as &a. so in below statement, &b is equals to &&b */
        out << "inside:  address of b: " << &b << NL;
    }

    template<typename T>
    void func_two(T &a, T &b) noexcept {
        ++a;
        ++b;
        out << "inside: address of a: " << &a << NL;
        out << "inside: address of b: " << &b << NL;
    }

} // namespace cpp
