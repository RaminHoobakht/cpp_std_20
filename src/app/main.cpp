/* Subject:   */

#include "main.hpp"


int main() {

    enum class kevin { one, two, three };

    int a{2025};

    /* encounter with compile time error  */
    // kevin a{kevin::one};

    cpp::func(a);

    out << "\n #(23:25:49): The End ..." << eln;
    return EXIT_SUCCESS;
}
