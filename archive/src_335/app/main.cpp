#include <ostream>
#include <utility>
#include "main.hpp"


namespace entity {

    class person {

    private:
        inline friend std::ostream &
        operator<<(std::ostream &os, const person &other) noexcept(true) {
            return os << "{ "
                      << "first_name_:" << other.first_name_ << ", "
                      << "last_name_:" << other.last_name_ << " }";
        }

    private:
        std::string first_name_{};
        std::string last_name_{};

    public:
        person() noexcept(true) : person{"", ""} {}
        person(std::string fn_param, std::string ln_param) noexcept(true) :
            first_name_{std::move(fn_param)}, last_name_{std::move(ln_param)} {}
        person(const person &other) noexcept(true) :
            person{other.first_name_, other.last_name_} {}
        person(person &&other) noexcept(true) :
            person{std::exchange(other.first_name_, ""),
                   std::exchange(other.last_name_, "")} {}
        ~person() noexcept(true) = default;

        [[maybe_unused]] void
        set_first_name(const std::string &fn_param) noexcept(true) {
            first_name_ = fn_param;
        }

        [[maybe_unused]] void
        set_last_name(const std::string &ln_param) noexcept(true) {
            last_name_ = ln_param;
        }

        [[nodiscard]] const std::string &get_first_name() const noexcept(true) {
            return first_name_;
        }

        [[nodiscard]] const std::string &get_last_name() const noexcept(true) {
            return last_name_;
        }

        person &operator=(const person &other) noexcept(true) {
            if (this != &other) {
                first_name_ = other.first_name_;
                last_name_ = other.last_name_;
            }
            return *this;
        }

        person &operator=(person &&other) noexcept(true) {
            if (this != &other) {
                first_name_ = std::exchange(other.first_name_, "");
                last_name_ = std::exchange(other.last_name_, "");
            }
            return *this;
        }

        bool operator==(const person &other) noexcept(true) {
            return ((first_name_ == other.first_name_) &&
                    (last_name_ == other.last_name_));
        }

        bool operator!=(const person &other) noexcept(true) {
            return !(*this == other);
        }
    };


    class player : public person {

    private:
        inline friend std::ostream &
        operator<<(std::ostream &os, const player &other) noexcept(true) {
            return os << "{ "
                      << "first_name:" << other.get_first_name() << ", "
                      << "last_name:" << other.get_last_name() << ", "
                      << "game_name:" << other.game_name_ << " }";
        }

    private:
        std::string game_name_{};

    public:
        player() noexcept(true) : player{"", "", ""} {}

        player(std::string fn_param, std::string ln_param,
               std::string gn_param) noexcept(true) :
            person{std::move(fn_param), std::move(ln_param)},
            game_name_{std::move(gn_param)} {}

        player(const player &other) noexcept(true) :
            player{other.get_first_name(), other.get_last_name(),
                   other.game_name_} {}

        player(player &&other) noexcept(true) :
            player{other.get_first_name(), other.get_last_name(),
                   std::exchange(other.game_name_, "")} {}

        ~player() noexcept(true) = default;

        [[maybe_unused]] void
        set_game_name(const std::string &gn_param) noexcept(true) {
            game_name_ = gn_param;
        }

        [[nodiscard]] const std::string &get_game_name() const noexcept(true) {
            return game_name_;
        }

        player &operator=(const player &other) noexcept(true) {
            if (this != &other) {
                set_first_name(other.get_first_name());
                set_last_name(other.get_last_name());
                game_name_ = other.game_name_;
            }
            return *this;
        }

        player &operator=(player &&other) noexcept(true) {
            if (this != &other) {
                person left{static_cast<person>(*this)};
                person right{static_cast<person>(other)};
                left = right;
                game_name_ = std::exchange(other.game_name_, "");
            }
            return *this;
        }

    };


} // namespace entity

int main() {

    entity::player ramin{};
    ramin.set_first_name("ramin");
    ramin.set_last_name("hoobakht");
    ramin.set_game_name("Group of Attack");

    pout << ramin << NL;

    pout << "\n #(17:29:22): The End ..." << eln;
    return EXIT_SUCCESS;
}
