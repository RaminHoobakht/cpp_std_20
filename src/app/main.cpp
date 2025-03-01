#include "../header/main.hpp"
#include <iostream>

// #define __YES__

int main() {

    const char *app_msg{"str after append: "};
    std::string str{};

    const char *message1{"this message one ..."};
    const char *const message2{"this is message two ... "};

#ifdef __YES__
    /* encountre with error */
    char *const message3{"this is message three ... "};

    /* encountre with error */
    char *message4{"this is message three ... "};
#endif

    char message5[]{"this is message four ... "};
    const char message6[]{"this is message five ..."};

    std::cout << "message one  : " << message1 << NL;
    std::cout << "message two  : " << message2 << NL;

#ifdef __YES__
    std::cout << "message three: " << message3 << NL;
    std::cout << "message four : " << message4 << NL;
#endif

    std::cout << "message five : " << message5 << NL;
    std::cout << "message six  : " << message6 << NL;

    /* -------------------------------- */

    str.clear();
    str.append(app_msg).append(message1);
    std::cout << "str append with message1: " << str << NL;

    str.clear();
    str.append(app_msg).append(message2);
    std::cout << "str append with message2: " << str << NL;

#ifdef __YES__

    str.clear();
    str.append(app_msg).append(message3);
    std::cout << "str append with message3: " << str << NL;

    str.clear();
    str.append(app_msg).append(message4);
    std::cout << "str append with message4: " << str << NL;

#endif

    str.clear();
    str.append(app_msg).append(message5);
    std::cout << "str append with message5: " << str << NL;

    str.clear();
    str.append(app_msg).append(message6);
    std::cout << "str append with message6: " << str << NL;

    std::cout << "\n #(20:05:12): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
