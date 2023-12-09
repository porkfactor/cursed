#ifndef CURSED_DETAIL_CURSES_SHELL_HPP_
#define CURSED_DETAIL_CURSES_SHELL_HPP_

#include <cursed/detail/curses/curses.hpp>
#include <cursed/detail/curses/display.hpp>

namespace cursed
{
    namespace detail
    {
        namespace curses
        {
            class shell
            {
            public:
                using handle_type = unique_window::pointer;
                using display_type = display;

                shell(display &d);
                ~shell();

                inline handle_type handle() const noexcept { return handle_.get(); }

            private:
                unique_window handle_;
            };
        }
    }
}

#include <cursed/detail/curses/impl/shell.cpp>

#endif
