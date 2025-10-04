#ifndef SRC_APP_INDEX_OUT_OF_RANGE_HPP_
#define SRC_APP_INDEX_OUT_OF_RANGE_HPP_

#pragma once

#include <exception>
#include <ostream>
#include <string>
#include <string_view>


namespace my_exp {

    class index_out_of_range : public std::exception {


    private:
        std::string message_{};

    public:
        index_out_of_range() noexcept(true) : message_{"index is out of range ..."} {}

        explicit index_out_of_range(const std::string_view msg_param) noexcept(true) :
            message_{msg_param} {}

        index_out_of_range(const index_out_of_range &other) = delete;

        index_out_of_range(index_out_of_range &&other) = delete;

        _GLIBCXX_NODISCARD const char *what() const noexcept(true) override {
            return message_.c_str();
        }
    };

} // namespace my_exp


#endif /* SRC_APP_INDEX_OUT_OF_RANGE_HPP_ */
