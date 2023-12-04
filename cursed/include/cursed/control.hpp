#ifndef CURSED_CONTROL_HPP_
#define CURSED_CONTROL_HPP_

#include <cursed/widget.hpp>
#include <cursed/color.hpp>
#include <cursed/rectangle.hpp>
#include <cursed/point.hpp>

namespace cursed
{
    class Composite;

    class Control : public Widget
    {
    public:
        Control(std::shared_ptr<Composite>);
        Control(Control const &) = delete;
        Control(Control &&);

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

#endif
