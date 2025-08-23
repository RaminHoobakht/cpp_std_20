#include "main.hpp"


int main() {

    nelson::shape shape_one{"Shape One"};
    pout << "shape count is: " << nelson::shape::m_count << NL;

    nelson::shape shape_two{"Shape two"};
    pout << "shape count is: " << nelson::shape::m_count << NL;

    nelson::shape shape_three{"Shape three"};
    pout << "shape count is: " << nelson::shape::m_count << NL;

    SEP;

    nelson::ellipse ellipse_one{12.36, 36.21, "Ellipse One"};
    pout << "shape count is: " << nelson::shape::m_count << NL;
    pout << "ellipse count is: " << nelson::ellipse::m_count << NL;

    SEP;

    for (nelson::shape *shapes_one[]{&shape_one, &ellipse_one};
         nelson::shape *item: shapes_one) {
        pout << "cout is: " << item->get_count() << NL;
    }


    pout << "\n #(21:56:04): The End ..." << eln;
    return EXIT_SUCCESS;
}
