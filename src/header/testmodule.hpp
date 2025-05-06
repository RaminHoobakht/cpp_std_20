#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <compare>
#include <utility>
#include "utillib.hpp"

/* declaration */
namespace cpp {

    class raphael final {

    private:
        int value_{};

    public:
        raphael() noexcept;
        explicit raphael(int value_param) noexcept;
        raphael(const raphael &rhs) noexcept;
        raphael(raphael &&rhs) noexcept;
        ~raphael() noexcept;

        void set_value(int value_param) noexcept;
        [[nodiscard]] int get_value() const noexcept;

        raphael &operator=(const raphael &rhs) noexcept;
        raphael &operator=(raphael &&rhs) noexcept;

        auto operator<=>(const raphael &rhs) const noexcept = default;
    };

} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
