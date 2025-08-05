#include "main.hpp"

namespace inh {

    class person {

    protected:
        std::string m_first_name{};
        std::string m_last_name{};
        unsigned int m_age{};
        unsigned int padding{};

    public:
        person() noexcept(true) {
            pout << "this is default constructor for person class ..." << NL;
        }
    };


    class engineer : public person {

    protected:
        std::string m_engineer_name{};

    public:
        engineer() noexcept(true) {
            pout << "this is default constructor for engineer class ..." << NL;
        }
    };


    class civil_engineer : public engineer {


    private:
        std::string ce_name{};

    public:
        civil_engineer() noexcept(true) {
            pout << "this is default constructor for civil_engineer class ..." << NL;
        }
    };


} // namespace inh


int main() {

    inh::civil_engineer ce{};

    /*
     *  this is default constructor for person class ...
     *  this is default constructor for engineer class ...
     *  this is default constructor for civil_engineer class ...
     *
     * */  

    pout << "\n #(11:34:43): The End ..." << eln;
    return EXIT_SUCCESS;
}
