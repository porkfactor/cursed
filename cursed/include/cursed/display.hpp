#ifndef CURSED_DISPLAY_HPP_
#define CURSED_DISPLAY_HPP_

#include <memory>

#include <cursed/device.hpp>
#include <cursed/rectangle.hpp>

#include <cursed/detail/curses/display.hpp>

namespace cursed
{
    template<typename _Impl>
    class basic_display : public basic_device
    {
    public:
        Display();

        static std::shared_ptr<Display> getCurrent();
        static std::shared_ptr<Display> getDefault();

        void beep(void);
        void close(void);
        void destroy();

        Rectangle getBounds();

    private:
        _Impl impl_;
    };
}

#include <cursed/impl/display.cpp>

#endif
