#ifndef CURSED_DISPLAY_HPP_
#define CURSED_DISPLAY_HPP_

#include <memory>

#include <cursed/device.hpp>
#include <cursed/rectangle.hpp>

namespace cursed
{
    class Display : public Device
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
    };
}

#endif
