#ifndef CURSED_DISPLAY_HPP_
#define CURSED_DISPLAY_HPP_

#include <memory>

#include <cursed/rectangle.hpp>

#include <cursed/basic_device.hpp>

namespace cursed
{
    template<typename _Impl>
    class basic_display : public basic_device
    {
    public:
        basic_display();

        static std::shared_ptr<basic_display<_Impl>> getCurrent();
        static std::shared_ptr<basic_display<_Impl>> getDefault();

        void beep(void);
        void close(void);
        void destroy();

        Rectangle getBounds();

        inline _Impl &impl() { return impl_; }
        inline _Impl const &impl() const { return impl_; }

    private:
        _Impl impl_;
    };
}

#include <cursed/impl/basic_display.cpp>

#endif
