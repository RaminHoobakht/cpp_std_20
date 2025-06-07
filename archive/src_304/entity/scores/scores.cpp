#include "scores.hpp"

namespace entity {


    double &scores::operator[](size_t index) noexcept {
        assert(index < 20UL);
        return scores_[index];
    }

    const double &scores::operator[](size_t index) const noexcept {
        assert(index < 20UL);
        return scores_[index];
    }


    scores::scores(const std::string &course_name_param) noexcept :
        course_name_(course_name_param) {}

    void scores::print_info() const noexcept {
        std::cout << course_name_ << ": [ ";
        for (size_t i{util::zero}; i < 20; ++i) {
            std::cout << scores_[i] << SP;
        }
        std::cout << " ]" << NL;
    }


} // namespace entity
