#include <iomanip>
#include <iostream>

int main() {

    constexpr long double pi{3.1415926535897932384626433832795};
    // 3.141592653589793115997963468544185161590576171875
    std::cout << std::setprecision(5000);
    std::cout << "PI is: " << pi << '\n';


    std::cout << "\n #STD20(13:17:46): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
