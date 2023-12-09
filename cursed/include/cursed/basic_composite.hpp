#ifndef CURSED_COMPOSITE_HPP_
#define CURSED_COMPOSITE_HPP_

#include <cursed/basic_scrollable.hpp>

namespace cursed
{
    template<typename _Impl>
    class basic_composite : public basic_scrollable<_Impl>
    {
    public:
        basic_composite()
        {}

        basic_composite(std::shared_ptr<basic_composite<_Impl>> parent) :
            basic_scrollable<_Impl>(parent)
        {

        }
        
        basic_composite(basic_composite<_Impl> const &) = delete;
        basic_composite(basic_composite<_Impl> &&);

    private:
        
    };
}

#endif
