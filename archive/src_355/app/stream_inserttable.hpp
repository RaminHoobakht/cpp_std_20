#ifndef HEADER_STREAM_INSERTTABLE
#define HEADER_STREAM_INSERTTABLE

#include <ostream>

#include <ostream>

namespace ramin {

    class stream_inserttable {

    private:
        friend std::ostream &
        operator<<(std::ostream &out, const stream_inserttable &other) noexcept(true);

        virtual void init_stream(std::ostream &out) const noexcept(true) = 0;

    public:
        virtual ~stream_inserttable() noexcept(true);
    };


} // namespace ramin


#endif
