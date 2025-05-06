/* Subject: create Raphael object using rule of 5  */

#include "main.hpp"


int main() {

    LF;

    auto raphael_one{cpp::raphael{10}};
    auto raphael_two{cpp::raphael{20}};

    out << "value of Raphael one is: " << raphael_one.get_value() << NL;
    out << "value of Raphael two is: " << raphael_two.get_value() << NL;
    SEP;

    raphael_one = raphael_two;

    out << "value of Raphael one is: " << raphael_one.get_value() << NL;
    out << "value of Raphael two is: " << raphael_two.get_value() << NL;
    SEP;

    auto raphael_three{std::move(raphael_two)};
    out << "value of Raphael one   is: " << raphael_one.get_value() << NL;
    out << "value of Raphael two   is: " << raphael_two.get_value() << NL;
    out << "value of Raphael three is: " << raphael_three.get_value() << NL;
    SEP;

    auto raphael_temp{cpp::raphael{40}};
    cpp::raphael raphael_four{raphael_temp};

    out << "value of Raphael one   is: " << raphael_one.get_value() << NL;
    out << "value of Raphael two   is: " << raphael_two.get_value() << NL;
    out << "value of Raphael three is: " << raphael_three.get_value() << NL;
    out << "value of Raphael four  is: " << raphael_four.get_value() << NL;
    SEP;

    out << "\n #(06:29:46): The End ..." << eln;
    return EXIT_SUCCESS;
}
