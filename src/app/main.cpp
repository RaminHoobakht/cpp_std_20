/* function overloading  */

#include <iostream>
#include "../header/utillib.hpp"

#define out std::cout
#define log std::clog
#define err std::cerr

namespace cpp {

    void say_my_name(std::string &name) noexcept;
    void say_my_name(std::string name) noexcept;

    void say_my_name(std::string &name) noexcept {
        out << " (std::string &) function was invoked" << NL;
        out << " your name is: " << name << NL;
    }

    void say_my_name(std::string name) noexcept {
        out << " (std::string name) function was invoked" << NL;
        out << " your name is: " << name << NL;
    }

} // namespace cpp


int main() {

    LF;


    std::string name{"Daniel"};

    /* ambiguous call function occur */
    cpp::say_my_name(name);

    cpp::say_my_name("Daniel");

    std::cout << "\n #(13:08:24): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
