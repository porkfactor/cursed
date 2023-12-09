#ifndef CURSED_DETAIL_CURSES_DISPLAY_HPP_
#define CURSED_DETAIL_CURSES_DISPLAY_HPP_

#include <cursed/detail/curses/curses.hpp>
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
                using handle_type = SCREEN *;

                display();
                ~display();

                inline handle_type handle() const noexcept { return screen_; }

            private:
                SCREEN *screen_;
            };
        }
    }
}

#include <cursed/detail/curses/impl/display.cpp>

#endif
