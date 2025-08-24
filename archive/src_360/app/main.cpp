#include <iostream>
#include <string>
#include <string_view>

namespace mariam {

    class SomethingIsWrong {

    protected:
        std::string m_error_message_{};

    public:
        explicit SomethingIsWrong(
                const std::string_view err_msg_param) noexcept(true) :
            m_error_message_{err_msg_param} {}

        virtual ~SomethingIsWrong() noexcept(true) {}

    public:
        __attribute_maybe_unused__ _GLIBCXX_NODISCARD virtual const std::string
        what() const noexcept(true) {
            return m_error_message_ + " (SomethingIsWring) ";
        }
    };

    /* ------------ */

    class Warning : public SomethingIsWrong {

    public:
        explicit Warning(const std::string_view err_msg_param) noexcept(true) :
            SomethingIsWrong{err_msg_param} {}

    public:
        __attribute_maybe_unused__ _GLIBCXX_NODISCARD virtual const std::string
        what() const noexcept(true) override {
            return m_error_message_ + " (Warning) ";
        }
    };

    /* ------------ */

    class SmallError : public Warning {

    public:
        explicit SmallError(const std::string_view err_msg_param) noexcept(
                true) : Warning{err_msg_param} {}

    public:
        __attribute_maybe_unused__ _GLIBCXX_NODISCARD virtual const std::string
        what() const noexcept(true) override {
            return m_error_message_ + " (SmallError) ";
        }
    };

    /* ------------ */

    class CriticalError : public SmallError {

    public:
        explicit CriticalError(const std::string_view err_msg_param) noexcept(
                true) : SmallError{err_msg_param} {}

    public:
        __attribute_maybe_unused__ _GLIBCXX_NODISCARD virtual const std::string
        what() const noexcept(true) override {
            return m_error_message_ + " (CriticalError) ";
        }
    };


} // namespace mariam

namespace yasamin {

    __attribute_maybe_unused__ void
    do_something(int error_code) noexcept(false);

    __attribute_maybe_unused__ void
    do_something(int error_code) noexcept(false) {

        if (error_code == 3) {
            throw mariam::CriticalError{"error code is 3"};
        } else if (error_code == 4) {
            throw mariam::SmallError{"error code is 4"};
        } else if (error_code == 5) {
            throw mariam::Warning{"error code is 5"};
        } else if (error_code == 6) {
            throw mariam::SomethingIsWrong{"error code is 6"};
        }

        std::cout << "Do something at iteration: " << error_code << std::endl;
    }
} // namespace yasamin


int main() {

    /*  java finally block is in heart of the object in C++.
        refer to (RAII) discussion. */

    for (size_t i{0UL}; i < 10; ++i) {

        try {

            yasamin::do_something(static_cast<int>(i));

        } /* catch (mariam::CriticalError &ex) {
            std::cerr << "Critical exception was caught: " << ex.what()
                      << std::endl;

        } catch (mariam::SmallError &ex) {
            std::cerr << "SmallError exception was caught: " << ex.what()
                      << std::endl;
        } catch (mariam::Warning &ex) {
            std::cerr << "Warning exception was caught: " << ex.what()
                      << std::endl;

        } */ catch (mariam::SomethingIsWrong &ex) {
            std::cerr << "SomethingIsWrong exception was caught: " << ex.what()
                      << std::endl;
        }
    }


    std::cout << "\n #(00:14:56): The End ..." << std::endl;
    return EXIT_SUCCESS;
}
