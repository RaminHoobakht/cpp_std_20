/*  */

#include "../header/main.hpp"
#include <iostream>


int main() {

    LINEFEED;

    const std::string message1{R"(
			this is line one.
		this is line two.
	this is line three.
	)"};

    std::cout << message1 << NL;

    std::string message2{};

    message2 = R"(
		I am
		a
		C
		and 
		C++
		Developer.
	)";

    util::separator();
    LINEFEED;

    std::cout << message2 << NL;

    std::cout << "\n #(13:43:07): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
