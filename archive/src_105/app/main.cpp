/* using data() on modified view (BAD) */

#include "../header/main.hpp"
#include <cstring>
#include <iostream>


int main() {

    LINEFEED;

    std::string_view message_sv{"Life is a light in the wind"};

    std::cout << "before update or modifying message_sv string view: " << NL;
    std::cout << "message_sv has " << std::strlen(message_sv.data())
              << " characters. " << NL;
    util::separator();

    message_sv.remove_prefix(15);
    message_sv.remove_suffix(10);

    /* length information is lost when you modify the view */
    std::cout << "after update or modifying message_sv string view: " << NL;
    std::cout << "message_sv has " << std::strlen(message_sv.data())
              << " characters. " << NL;
    std::cout << "message_sv.data() is: " << message_sv.data() << NL;
    std::cout << "message_sv is: " << message_sv << NL;
    util::separator();

    std::cout << "\n #(13:08:43): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
