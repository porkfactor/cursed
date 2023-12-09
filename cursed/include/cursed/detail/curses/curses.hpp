#ifndef CURSED_DETAIL_CURSES_CURSES_HPP_
#define CURSED_DETAIL_CURSES_CURSES_HPP_

#include <memory>

#include <curses.h>

namespace cursed
{
    namespace detail
    {
        namespace curses
        {
            struct screen_deleter
            {
                void operator()(SCREEN *s) { ::delscreen(s); }
            };

            struct window_deleter
            {
                void operator()(WINDOW *w) { ::delwin(w); }
            };

            using unique_screen = std::unique_ptr<SCREEN, screen_deleter>;
            using unique_window = std::unique_ptr<WINDOW, window_deleter>;
        }
    }
}

#endif
