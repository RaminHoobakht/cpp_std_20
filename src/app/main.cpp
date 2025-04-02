/* compiler optimized to return by reference */

#include <iostream>
#include "../header/utillib.hpp"


str add_string1(str word_one, str word_two) noexcept;
str add_string2(cstr word_one, cstr word_two) noexcept;
rstr add_string3(cstr word_one, cstr word_two) noexcept;
crstr add_string4(cstr word_one, cstr word_two) noexcept;

int main() {

    str word_one{" Hinata"};
    str word_two{" Chikao"};

    str main_result1{add_string1(word_one, word_two)};
    util::separator();
    std::cout << "address of the main_result1 is: " << &main_result1 << NL;
    std::cout << "value   of the main_result1 is: " << main_result1 << NL;
    util::separator(64, '*');

    str main_result2{add_string2(word_one, word_two)};
    util::separator();
    std::cout << "address of the main_result2 is: " << &main_result2 << NL;
    std::cout << "value   of the main_result2 is: " << main_result2 << NL;
    util::separator(64, '*');

    rstr main_result3{add_string3(word_one, word_two)};
    util::separator();
    std::cout << "address of the main_result3 is: " << &main_result3 << NL;
    std::cout << "value   of the main_result3 is: " << main_result3 << NL;
    util::separator(64, '*');

    /* encounter with error */
    crstr main_result4{add_string4(word_one, word_two)};
    util::separator();
    std::cout << "address of the main_result4 is: " << &main_result4 << NL;
    std::cout << "value   of the main_result4 is: " << main_result4 << NL;
    util::separator(64, '*');


    std::cout << "\n #(17:30:12): The End ..." << std::endl;
    return EXIT_SUCCESS;
}

/* ---------------------------------- */

str add_string1(str word_one, str word_two) noexcept {
    str local_result{word_one + word_two};
    std::cout << "address of the local_result1 is: " << &local_result << NL;
    std::cout << "value   of the local_result1 is: " << local_result << NL;
    return local_result;
}

str add_string2(cstr word_one, cstr word_two) noexcept {
    str local_result{word_one + word_two};
    std::cout << "address of the local_result2 is: " << &local_result << NL;
    std::cout << "value   of the local_result2 is: " << local_result << NL;
    return local_result;
}

rstr add_string3(cstr word_one, cstr word_two) noexcept {
    static str local_result{word_one + word_two};
    std::cout << "address of the local_result3 is: " << &local_result << NL;
    std::cout << "value   of the local_result3 is: " << local_result << NL;
    return local_result;
}

crstr add_string4(cstr word_one, cstr word_two) noexcept {
    static str local_result{word_one + word_two};
    std::cout << "address of the local_result4 is: " << &local_result << NL;
    std::cout << "value   of the local_result4 is: " << local_result << NL;
    return local_result;
}
