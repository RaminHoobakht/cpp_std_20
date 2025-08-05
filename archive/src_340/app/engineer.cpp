#include "engineer.hpp"

namespace albert {

    /*

        engineer::engineer(const engineer &other) noexcept(true) :
            person{other}, contract_count_{other.contract_count_} {}
    */

    engineer::engineer() noexcept(true) {}


    engineer::engineer(const std::string_view full_name_param,
                       const unsigned int age_param,
                       const std::string_view address_param,
                       const unsigned int contract_count_param) noexcept(true) :
        person{full_name_param, age_param, address_param},
        contract_count_{contract_count_param} {
        std::cout << "Hello, I am engineer constructor class ..." << '\n';
    }

    engineer::~engineer() noexcept(true) {
        std::cout << "Goodbye Engineer ... " << '\n';
    }

    void engineer::set_contract_count(unsigned int cc_param) noexcept(true) {
        contract_count_ = cc_param;
    }

    unsigned int engineer::get_contract_count() const noexcept(true) {
        return contract_count_;
    }


    void engineer::build_something() noexcept(true) {
        m_full_name_ = "John Snow";
        m_age_ = 23;
        // m_address_ = "";
    }

    std::ostream &operator<<(std::ostream &out,
                             const engineer &other) noexcept(true) {
        return out << "{ "
                   << "m_full_name_:" << other.get_full_name() << ", "
                   << "m_address_:" << other.get_address() << ", "
                   << "m_age_:" << other.get_age() << ", "
                   << "contract_count_:" << other.get_contract_count() << " }";
    }


} // namespace albert
