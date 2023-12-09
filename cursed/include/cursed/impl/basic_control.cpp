#ifndef CURSED_BASIC_CONTROL_IPP_
#define CURSED_BASIC_CONTROL_IPP_

namespace cursed
{
    template<typename _Impl>
    basic_control<_Impl>::basic_control()
    {}

    template<typename _Impl>
    basic_control<_Impl>::basic_control(std::shared_ptr<basic_composite<_Impl>> parent) :
        basic_widget<_Impl>(parent)
    {

    }
}

#endif
