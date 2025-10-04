#include "../util/util.hpp"
#include "box_container.hpp"
#include "point.hpp"
#include <string>

int main() {
	LF;

	/* int */
	std::cout << "box container of int: " << NL;
	raphael::box_container<int> box_int { };
	box_int.add_item(33);
	box_int.add_item(44);
	std::cout << "box_int: " << box_int << NL;
	SEP;

	/* double */
	std::cout << "box container of double: " << NL;
	raphael::box_container<double> box_dbl { };
	box_dbl.add_item(100.11);
	box_dbl.add_item(200.22);
	std::cout << "box_dbl: " << box_dbl << NL;
	SEP;

	/* point */
	std::cout << "box container of point: " << NL;
	raphael::box_container<raphael::point> box_pnt { };
	box_pnt.add_item(raphael::point { 20.1, 20.2 });
	box_pnt.add_item(raphael::point { 200.22, 300.33 });
	std::cout << "box_pnt: " << box_pnt << NL;
	SEP;

	/* string */
	std::cout << "box container of string: " << NL;
	raphael::box_container<std::string> box_str { };
	box_str.add_item(static_cast<std::string>("Hello"));
	box_str.add_item(static_cast<std::string>("World"));
	std::cout << "box_str: " << box_str << NL;
	SEP;

	/* char */
	std::cout << "box container of char: " << NL;
	raphael::box_container<char> box_chr { };
	box_chr.add_item('H');
	box_chr.add_item('e');
	box_chr.add_item('l');
	box_chr.add_item('l');
	box_chr.add_item('o');
	std::cout << "box_chr: " << box_chr << NL;
	SEP;

	std::cout << "\n #(Fri Sep 26 15:30:36): The End ..." << std::endl;
	return (EXIT_SUCCESS);
}
