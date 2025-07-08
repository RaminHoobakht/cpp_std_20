/*
 *  Subject: unary increment prefix overloading
 *
 * * */

#include "main.hpp"

int main() {

    entity::number2 my_number_one{9};

    entity::number2 my_number_two{3};

    pout << "value of my_number_one is: " << my_number_one << NL;
    pout << "value of my_number_two is: " << my_number_two << NL;
    SEP;
        
    entity::number2 my_number_three{my_number_one + my_number_two};
    pout << "(add): value of my_number_three: " << my_number_three << NL;
    SEP;

    
    entity::number2 my_number_four{my_number_one - my_number_two};
    pout << "(subtract) value of my_number_three: " << my_number_four << NL;
    SEP;

    
    entity::number2 my_number_five{my_number_one / my_number_two};
    pout << "(divide) value of my_number_three: " << my_number_five << NL;
    SEP;

    entity::number2 my_number_six{my_number_one * my_number_two};
    pout << "(multiply) value of my_number_three: " << my_number_six << NL;
    SEP;
    SEP;
    
    pout << "value of ++my_number_six is: " << ++my_number_six << NL; 
    SEP;

    my_number_six++;
    pout << "value of my_number_six++ is: " << my_number_six << NL; 
    SEP;


    pout << "\n #(20:26:36): The End ..." << eln;
    return EXIT_SUCCESS;
}
