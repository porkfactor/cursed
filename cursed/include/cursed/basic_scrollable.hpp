#ifndef CURSED_SCROLLABLE_HPP_
#define CURSED_SCROLLABLE_HPP_

#include <cursed/basic_control.hpp>

namespace cursed
{
    template<typename _Impl>
    class basic_scrollbar;

    template<typename _Impl>
    class basic_composite;

    template<typename _Impl>
    class basic_scrollable : public basic_control<_Impl>
    {
    public:
        using scrollbar_type = basic_scrollbar<_Impl>;

        basic_scrollable()
        {}
        
        basic_scrollable(std::shared_ptr<basic_composite<_Impl>> parent) :
            basic_control<_Impl>(parent)
        {}

        Rectangle computeTrim() const noexcept;
        Rectangle getClientArea() const noexcept;

        std::shared_ptr<scrollbar_type> getHorizontalScrollBar() const noexcept;
        std::shared_ptr<scrollbar_type> getVerticalScrollBar() const noexcept;

    private:
    };
}

#endif
