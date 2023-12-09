#ifndef CURSED_CONTROL_HPP_
#define CURSED_CONTROL_HPP_

#include <cursed/basic_widget.hpp>
#include <cursed/color.hpp>
#include <cursed/rectangle.hpp>
#include <cursed/point.hpp>

namespace cursed
{
    template<typename _Impl>
    class basic_composite;

    template<typename _Impl>
    class basic_control : public basic_widget<_Impl>
    {
    public:
        basic_control();
        basic_control(std::shared_ptr<basic_composite<_Impl>>);
        basic_control(basic_control const &) = delete;
        basic_control(basic_control &&) = delete;

        Color getBackground() const noexcept;
        void setBackground(Color);
        Color getForeground() const noexcept;
        void setForeground(Color);

        Rectangle const getBounds() const noexcept;
        void setBounds(Rectangle const &);

        Point getLocation() const noexcept;
        Point getSize() const noexcept;

        void pack(bool changed = false);
        void redraw();

        void setSize();


    private:
        Rectangle bounds_;
    };
}

#include <cursed/impl/basic_control.cpp>

#endif
