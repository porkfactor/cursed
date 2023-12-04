#ifndef CURSED_SCROLLABLE_HPP_
#define CURSED_SCROLLABLE_HPP_

#include <control.hpp>

namespace cursed
{
    class ScrollBar;

    class Scrollable : public Control
    {
    public:
        Scrollable(std::shared_ptr<Composite> parent) :
            Control(parent)
        {}

        Rectangle computeTrim() const noexcept;
        Rectangle getClientArea() const noexcept;

        std::shared_ptr<ScrollBar> getHorizontalScrollBar() const noexcept;
        std::shared_ptr<ScrollBar> getVerticalScrollBar() const noexcept;

    private:
    };
}

#endif
