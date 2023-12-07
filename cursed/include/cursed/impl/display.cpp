#include <cursed/display.hpp>

namespace cursed
{
    std::shared_ptr<Display> Display::getDefault()
    {
        return std::shared_ptr<Display>(new Display());
    }

    std::shared_ptr<Display> Display::getCurrent()
    {
        return std::shared_ptr<Display>(new Display());
    }

    Display::Display()
    {

    }

    void Display::beep()
    {
        
    }

    void Display::close()
    {

    }
}