#include "../header/main.hpp"
#include <iostream>


int main() {

    enum comparison { equal = 0, one_gr = 1, two_gr = -1 };

    std::string word_one{"Hello"};
    const char *word_two{"Word"};


    /* 0 = equals, 1 = word_one is greater, -1 = word_two is greater */
    int result_one{word_one.compare(word_two)}; /* result is: -1 */

    if (result_one == comparison::equal) {
        std::cout << "both are equals ..." << NL;
    } else if (result_one == comparison::one_gr) {
        std::cout << "word one is greater than word two ..." << NL;
    } else if (result_one == comparison::two_gr) {
        std::cout << "word two is greater than word one ...";
    } else {
		std::cout << "wonderful result ..." << NL;
		std::cout << "result is: " << result_one << NL;
	}

    std::cout << "\n #(17:10:19): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
