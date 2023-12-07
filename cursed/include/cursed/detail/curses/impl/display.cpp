#include <cursed/detail/curses/display.hpp>

namespace cursed
{
    namespace detail
    {
        namespace curses
        {
            display::display()
            {
                screen_ = ::newterm("xterm", stdout, stdin);
                window_ = ::stdscr;
                ::box(stdscr, 0, 0);
                ::wrefresh(stdscr);
            }

            display::~display()
            {
                ::endwin_sp(screen_);
            }
        }
    }
}
