#ifndef CURSED_DETAIL_CURSES_DISPLAY_HPP_
#define CURSED_DETAIL_CURSES_DISPLAY_HPP_

#include <cursed/detail/curses/device.hpp>

namespace cursed
{
    namespace detail
    {
        namespace curses
        {
            class display
            {
            public:
                display();
                ~display();

            private:
                SCREEN *screen_;
                WINDOW *window_;
            };
        }
    }
}

#include <cursed/detail/curses/impl/display.cpp>

#endif
