/* Subject: one function is getter and setter
   if the object be const, it must all getter-setter
   function overload with const for output and definition
   of function  */

#include "main.hpp"

int main() {

    LF;


    // cpp::person hinata{};
    const cpp::person hinata{};

    hinata.display_info();
    SEP;

    //    hinata.person_id() = 1001LLU;
    //    hinata.fist_name() = "Hinata";
    //    hinata.last_name() = "Chikao";
    //    hinata.age() = 54;

    hinata.display_info();
    SEP;

    out << "\n #(07:22:24): The End ..." << eln;
    return EXIT_SUCCESS;
}
