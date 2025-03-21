#include "../header/main.hpp"
#include <iostream>


int main() {
	
	/*
		0 -> both are equals.
		1 -> first is greater.
	   -1 -> second is greater.
	
	*/

    std::string word_one{"Hinata"};
    std::string word_two{"Hinata"};

	LINEFEED;
	util::separator();

	std::cout << "word one is: " << word_one << NL;
	std::cout << "word two is: " << word_two << NL;
    int result1{word_one.compare(word_two)};
    std::cout << "result one is: " << result1 << NL;

    LINEFEED;
    util::separator();

    word_one.clear();
    word_two.clear();

    word_one = "Jinata";
    word_two = "Hinata";

	std::cout << "word one is: " << word_one << NL;
	std::cout << "word two is: " << word_two << NL;
    int result2{word_one.compare(word_two)};
    std::cout << "result two is: " << result2 << NL;

    LINEFEED;
    util::separator();

    word_one.clear();
    word_two.clear();

    word_one = "Hinata";
    word_two = "Jinata";

	std::cout << "word one is: " << word_one << NL;
	std::cout << "word two is: " << word_two << NL;
    int result3{word_one.compare(word_two)};
    std::cout << "result two is: " << result3 << NL;

    std::cout << "\n #(22:14:30): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
