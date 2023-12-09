#ifndef CURSED_CURSES_HPP_
#define CURSED_CURSES_HPP_

#include <cursed/detail/curses/display.hpp>
#include <cursed/detail/curses/shell.hpp>
#include <cursed/basic_display.hpp>
#include <cursed/basic_shell.hpp>

namespace cursed
{
    namespace curses
    {
        using Display = basic_display<detail::curses::display>;
        using Shell = basic_shell<detail::curses::shell>;
    }
}

#endif
