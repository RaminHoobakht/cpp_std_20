#include "main.hpp"

int main() {

    ramin::shape shape_one{"Shape One"};
    shape_one.draw();
    shape_one.draw(120);
    SEP;

    ramin::oval oval_one{12.36, 45.69, "Oval One"};
    oval_one.draw();
    oval_one.draw(41);
    SEP;

    ramin::circle circle_one{87.99, "circle One"};
    circle_one.draw();
    circle_one.draw(800);
    SEP;

    pout << "\n #(03:19:01): The End ..." << eln;
    return EXIT_SUCCESS;
}