/*
    function overloading
    overload can be occur by:

    - parameters ordering.
    - difference number parameters.
    - changing data-type.

*/

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

namespace cpp {

    void say_my_name(const std::string &my_name) noexcept;
    void say_my_name(std::string my_name) noexcept;

    /* ------------------ */

    void say_my_name(const std::string &my_name) noexcept {
        out << "your name is: " << my_name << NL;
    }

    void say_my_name(const std::string my_name) noexcept {
        out << "your name is: " << my_name << NL;
    }


} // namespace cpp

int main() {

    /* call proper function is ambiguous */
    cpp::say_my_name("Hinata Chikao");

    std::cout << "\n #(17:39:54): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
