#ifndef CURSED_DETAIL_CURSES_SHELL_IPP_
#define CURSED_DETAIL_CURSES_SHELL_IPP_

#include <cursed/detail/curses/shell.hpp>

namespace cursed
{
    namespace detail
    {
        namespace curses
        {
            shell::shell(display &d) :
                handle_(::newwin_sp(d.handle(), 0, 0, 0, 0))
            {
                // ::box(handle_.get(), 0, 0);
                ::box(handle_.get(), 0, 0);
                ::wrefresh(handle_.get());
            }

            shell::~shell()
            {

            }
        }
    }
}

#endif
