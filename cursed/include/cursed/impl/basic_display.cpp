#ifndef CURSED_IMPL_BASIC_DISPLAY_IPP_
#define CURSED_IMPL_BASIC_DISPLAY_IPP_

#include <cursed/basic_display.hpp>

namespace cursed
{
    template<typename _Impl>
    std::shared_ptr<basic_display<_Impl>> basic_display<_Impl>::getDefault()
    {
        static auto default_ = std::make_shared<basic_display>();
        return default_;
    }

    template<typename _Impl>
    std::shared_ptr<basic_display<_Impl>> basic_display<_Impl>::getCurrent()
    {
        return std::shared_ptr<basic_display>(new basic_display());
    }

    template<typename _Impl>
    basic_display<_Impl>::basic_display() :
        basic_device(),
        impl_()
    {

    }

    template<typename _Impl>
    void basic_display<_Impl>::beep()
    {
        
    }

    template<typename _Impl>
    void basic_display<_Impl>::close()
    {

    }
}

#endif
