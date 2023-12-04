#ifndef CURSED_DETAIL_CONSOLE_DEVICE_HPP_
#define CURSED_DETAIL_CONSOLE_DEVICE_HPP_

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

namespace cursed
{
    namespace detail
    {
        namespace console
        {
            class device
            {
            public:
                device();

            private:
                HANDLE stdin_;
                HANDLE stdout_;
                HANDLE hOutput_;
            };
        }
    }
}

#include <cursed/detail/console/impl/device.cpp>

#endif
