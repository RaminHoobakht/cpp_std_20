#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <string>


/* declaration */
namespace cpp {

    class person final {

    private:
        signed long long int person_id_{};
        std::string first_name_{};
        std::string last_name_{};
        unsigned int age{};

    public:
        person() noexcept;
        person(const signed long long int person_id,
               std::string_view first_name, std::string_view last_name,
               unsigned int age) noexcept;
        ~person() noexcept;
    };

} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
