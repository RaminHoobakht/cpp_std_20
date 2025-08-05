#ifndef HEADER_MY_ENTITY_HPP
#define HEADER_MY_ENTITY_HPP

#pragma once

#include <ostream>
#include <string>
#include <utility>


namespace entity {

    constexpr std::string str_null{};


    class person {

    private:
        inline friend std::ostream &
        operator<<(std::ostream &out, const person &other) noexcept(true) {
            return out << "{ "
                       << "first_name_:" << other.first_name_ << ", "
                       << "last_name_:" << other.last_name_ << " }";
        }


    protected:
        std::string first_name_{};
        std::string last_name_{};

    public:
        person() noexcept(true) : person{str_null, str_null} {}
        explicit person(const std::string_view fn_param) noexcept(true) :
            person{fn_param, str_null} {}
        person(const std::string_view fn_param,
               const std::string_view lnv_param) noexcept(true) :
            first_name_{fn_param}, last_name_{lnv_param} {}
        person(const person &other) noexcept(true) :
            person{other.first_name_, other.last_name_} {}
        person(person &&other) noexcept(true) :
            person{std::exchange(other.first_name_, str_null),
                   std::exchange(other.last_name_, str_null)} {}
        ~person() noexcept(true) = default;


        [[maybe_unused]] void
        set_first_name(const std::string_view fn_param) noexcept(true) {
            first_name_ = fn_param;
        }

        [[maybe_unused]] void
        set_last_name(const std::string_view ln_param) noexcept(true) {
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
                first_name_ = std::exchange(other.first_name_, str_null);
                last_name_ = std::exchange(other.last_name_, str_null);
            }
            return *this;
        }

        bool operator==(const person &other) noexcept(true) {
            return (first_name_ == other.first_name_) &&
                   (last_name_ == other.last_name_);
        }

        bool operator!=(const person &other) noexcept(true) {
            return !((first_name_ == other.first_name_) &&
                     (last_name_ == other.last_name_));
        }
    };


    class player : protected person {


    private:
        inline friend std::ostream &
        operator<<(std::ostream &out, const player &other) noexcept(true) {
            return out << "{ "
                       << "first_name_:" << other.first_name_ << ", "
                       << "last_name_:" << other.last_name_ << ", "
                       << "game_name_:" << other.game_name_ << " }";
        }

    private:
        std::string game_name_{};

    public:
        player() noexcept(true) : player{str_null, str_null, str_null} {}
        explicit player(const std::string_view gn_param) noexcept(true) :
            player{str_null, str_null, gn_param} {}
        player(const std::string_view fn_param,
               const std::string_view ln_param) noexcept(true) :
            player{fn_param, ln_param, str_null} {}
        player(const std::string_view fn_param, const std::string_view ln_param,
               const std::string_view gn_param) noexcept(true) :
            person{fn_param, ln_param}, game_name_{gn_param} {}

        player(const player &other) noexcept(true) :
            player{other.first_name_, other.last_name_, other.game_name_} {}
        player(player &&other) noexcept(true) :
            player{std::exchange(other.first_name_, str_null),
                   std::exchange(other.last_name_, str_null),
                   std::exchange(other.game_name_, str_null)} {}
        ~player() noexcept(true) = default;

        [[maybe_unused]] void
        set_game_name(const std::string_view gn_param) noexcept(true) {
            game_name_ = gn_param;
        }

        [[nodiscard]] const std::string &get_game_name() const noexcept(true) {
            return game_name_;
        }

        player &operator=(const player &other) noexcept(true) {
            if (this != &other) {
                first_name_ = other.first_name_;
                last_name_ = other.last_name_;
                game_name_ = other.game_name_;
            }
            return *this;
        }

        player &operator=(player &&other) noexcept(true) {
            if (this != &other) {
                first_name_ = std::exchange(other.first_name_, str_null);
                last_name_ = std::exchange(other.last_name_, str_null);
                game_name_ = std::exchange(other.game_name_, str_null);
            }
            return *this;
        }

        bool operator==(const player &other) noexcept(true) {
            return (first_name_ == other.first_name_) &&
                   (last_name_ == other.last_name_) &&
                   (game_name_ == other.game_name_);
        }

        bool operator!=(const player &other) noexcept(true) {
            return !((first_name_ == other.first_name_) &&
                     (last_name_ == other.last_name_) &&
                     (game_name_ == other.game_name_));
        }
    };


} // namespace entity


#endif
