#include <cursed/detail/console/device.hpp>

namespace cursed
{
    namespace detail
    {
        namespace console
        {
            DWORD old_console_mode;
            static CONSOLE_SCREEN_BUFFER_INFO orig_scr;
            static CONSOLE_SCREEN_BUFFER_INFOEX console_infoex;

            device::device()
            {
                CONSOLE_SCREEN_BUFFER_INFO csbi;

                hOutput_ = stdout_ = GetStdHandle(STD_OUTPUT_HANDLE);
                stdin_ = GetStdHandle(STD_INPUT_HANDLE);

                GetConsoleScreenBufferInfo(stdout_, &csbi);
                GetConsoleScreenBufferInfo(stdout_, &orig_scr);
                GetConsoleMode(stdin_, &old_console_mode);

                hOutput_ = CreateConsoleScreenBuffer(
                    GENERIC_READ | GENERIC_WRITE,
                    FILE_SHARE_READ | FILE_SHARE_WRITE,
                    NULL,
                    CONSOLE_TEXTMODE_BUFFER,
                    NULL);
            }

            device::~device()
            {
                if (SP->visibility != 1)
                    curs_set(1);

                PDC_reset_shell_mode();

                /* Position cursor to the bottom left of the screen. */

                if (SP->_restore == PDC_RESTORE_NONE)
                {
                    SMALL_RECT win;

                    win.Left = orig_scr.srWindow.Left;
                    win.Right = orig_scr.srWindow.Right;
                    win.Top = 0;
                    win.Bottom = orig_scr.srWindow.Bottom - orig_scr.srWindow.Top;
                    SetConsoleWindowInfo(hOutput_, TRUE, &win);
                    PDC_gotoyx(win.Bottom, 0);
                }
            }
        }
    }
}