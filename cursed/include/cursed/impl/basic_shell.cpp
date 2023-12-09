#ifndef CURSED_BASIC_SHELL_IPP_
#define CURSED_BASIC_SHELL_IPP_

namespace cursed
{
    template<typename _Impl>
    basic_shell<_Impl>::basic_shell() :
        basic_shell(basic_shell<_Impl>::display_type::getDefault())
    {

    }

    template<typename _Impl>
    basic_shell<_Impl>::basic_shell(std::shared_ptr<basic_shell<_Impl>::display_type> display) :
        impl_(display->impl())
    {

    }
}

#endif
