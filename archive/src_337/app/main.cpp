#include "main.hpp"

namespace inh {

    constexpr auto str_null{""};
    constexpr auto zero{0U};


    class person {

    private:
        inline friend std::ostream &
        operator<<(std::ostream &out, const person &other) noexcept(true) {
            return out << "{ " << "m_first_name:" << other.m_first_name << ", "
                       << "m_last_name:" << other.m_last_name << ", "
                       << "m_age:" << other.m_age << " }";
        }

    protected:
        std::string m_first_name{};
        std::string m_last_name{};
        unsigned int m_age{};
        [[maybe_unused]] unsigned int m_padding{};


    public:
        person() noexcept(true) : person{str_null, str_null, zero} {}

        explicit person(const std::string_view fn_param) noexcept(true) :
            person{fn_param, str_null, zero} {};

        person(const std::string_view fn_param,
               const std::string_view ln_param) noexcept(true) :
            person{fn_param, ln_param, zero} {}

        person(const std::string_view fn_param, const std::string_view ln_param,
               unsigned int age_param) noexcept(true) :
            m_first_name{fn_param}, m_last_name{ln_param}, m_age{age_param} {}

        person(const person &other) noexcept(true) :
            person{other.m_first_name, other.m_last_name, other.m_age} {}

        person(person &&other) noexcept(true) :
            person{std::exchange(other.m_first_name, str_null),
                   std::exchange(other.m_last_name, str_null),
                   std::exchange(other.m_age, zero)} {}

        ~person() noexcept(true) = default;

        [[maybe_unused]] void
        set_first_name(const std::string_view fn_param) noexcept(true) {
            m_first_name = fn_param;
        }
        [[maybe_unused]] void
        set_last_name(std::string_view ln_param) noexcept(true) {
            m_last_name = ln_param;
        }
        [[maybe_unused]] void
        set_age(const unsigned int age_param) noexcept(true) {
            m_age = age_param;
        }

        [[nodiscard]] const std::string &get_first_name() const noexcept(true) {
            return m_first_name;
        }

        [[nodiscard]] const std::string &get_last_name() const noexcept(true) {
            return m_last_name;
        }

        [[nodiscard]] unsigned int get_age() const noexcept(true) {
            return m_age;
        }

        person &operator=(const person &other) noexcept(true) {
            if (this != &other) {
                m_first_name = other.m_first_name;
                m_last_name = other.m_last_name;
                m_age = other.m_age;
            }
            return *this;
        }


        person &operator=(person &&other) noexcept(true) {
            if (this != &other) {
                m_first_name = std::exchange(other.m_first_name, str_null);
                m_last_name = std::exchange(other.m_last_name, str_null);
                m_age = std::exchange(other.m_age, zero);
            }
            return *this;
        }

        bool operator==(const person &other) noexcept(true) {
            return ((m_first_name == other.m_first_name) &&
                    (m_last_name == other.m_last_name) &&
                    (m_age == other.m_age));
        }

        bool operator!=(const person &other) noexcept(true) {
            return !(*this == other);
        }
    };


    class raphael : private person {

    private:
        inline friend std::ostream &
        operator<<(std::ostream &out, const raphael &other) noexcept(true) {
            return out << static_cast<person>(other);
        }

    public:
        using person::m_age;
        using person::m_first_name;
        using person::m_last_name;
    };

} // namespace inh


int main() {


    inh::raphael my_raphael{};

    my_raphael.m_first_name = "first name";
    my_raphael.m_last_name = "last name";
    my_raphael.m_age = 100;

    pout << "raphael info: " << my_raphael << NL;

    pout << "\n #(11:34:43: The End ..." << eln;
    return EXIT_SUCCESS;
}
