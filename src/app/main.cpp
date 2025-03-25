/* using string_view class */

#include "../header/main.hpp"
#include <iostream>
#include <string_view>


int main() {


    std::string message{"Hello World ..."};
    std::string_view message_copy{message};

    LINEFEED;

    std::cout << "before change message:> " << NL;
    std::cout << "value of message     : " << message << NL;
    std::cout << "value of message copy: " << message_copy << NL;
    util::separator();

    message.append(" add new word ...");

    std::cout << "after  change message:> " << NL;
    std::cout << "value of message     : " << message << NL;
    std::cout << "value of message copy: " << message_copy << NL;
    util::separator();


    std::cout << "\n #(17:42:24): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
