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
            }

            display::~display()
            {
                ::endwin_sp(screen_);
            }
        }
    }
}
