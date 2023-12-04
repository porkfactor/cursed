#ifndef CURSED_POINT_HPP_
#define CURSED_POINT_HPP_

namespace cursed
{
    class Point
    {
    public:
        using value_type = unsigned int;

        Point() : Point(0, 0) {}
        Point(value_type lx, value_type ly) : x_(lx), y_(ly) {}

        inline value_type x() const noexcept { return x_; }
        inline value_type y() const noexcept { return y_; }

    private:
        value_type x_;
        value_type y_;
    };
}

#endif
