#include "../header/main.hpp"
#include <iostream>


int main() {

    char string_data1[]{"I am a C/C++ Develoepr ..."};
    std::cout << "message is: " << string_data1 << NL;

    /* encounter with error. because string_data1 can not
       point to another place*/
    // string_data1 = "I am a C/C++ Develoepr ...";
    // std::cout << "message is: " << string_data1 << NL;

    std::cout << "---------------------------------" << NL;

    const char *string_data2{"just do it ..."};
    std::cout << "message is: " << string_data2 << NL;

    /* no compile time error. because string_data2 can point 
       to another place */
    string_data2 = "calm down ..........................";
    std::cout << "message is: " << string_data2 << NL;


    std::cout << "\n #(11:12:45): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
