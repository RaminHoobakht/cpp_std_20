#ifndef SRC_APP_STREAM_INSERTABLE_HPP_
#define SRC_APP_STREAM_INSERTABLE_HPP_

#pragma once

#include <ostream>

namespace si {


    class stream_insertable {

    private:
        friend std::ostream &
        operator<<(std::ostream &out,
                   stream_insertable &other) noexcept(true);

    public:
        virtual ~stream_insertable() noexcept(true);

        virtual void init_stream(std::ostream &out) noexcept(true) = 0;
    };


} // namespace si

#endif /* SRC_APP_STREAM_INSERTABLE_HPP_ */
