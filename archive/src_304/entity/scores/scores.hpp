#ifndef HEADER_SCORES_HPP
#define HEADER_SCORES_HPP

#pragma once

#include "scores_headers.hpp"

namespace entity {

    class scores final {

    private:
        std::string course_name_{};
        double scores_[20]{};

    public:
        scores() noexcept = delete;
        explicit scores(const std::string &course_name_param) noexcept;
        ~scores() noexcept = default;

        void print_info() const noexcept;

        double &operator[](size_t index) noexcept;
        const double &operator[](size_t index) const noexcept;
    };


} // namespace entity


#endif /* HEADER_SCORE_HPP */
