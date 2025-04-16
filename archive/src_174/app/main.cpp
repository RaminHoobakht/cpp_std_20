/* function overloading by default value */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout << SP
#define log std::clog << SP
#define err std::cerr << SP

namespace cpp {

    void print_age(int age = 33) noexcept;
    void print_age(long age = 54) noexcept;

    void print_age(int age) noexcept {
        out << "int: your age is : " << age << NL;
    }

    void print_age(long age) noexcept {
        out << "long: your age is: " << age << NL;
    }


} // namespace cpp


int main() {

    /* call to ambiguous */
    // cpp::print_age();

    int age1{54};
    long age2{54};


    cpp::print_age(age1);
    cpp::print_age(age2);


    std::cout << "\n #(17:47:24): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
