#ifndef CURSED_COMPOSITE_HPP_
#define CURSED_COMPOSITE_HPP_

#include <scrollable.hpp>

namespace cursed
{
    class Scrollable;

    class Composite : public Scrollable
    {
    public:
        Composite(std::shared_ptr<Composite> parent) :
            Scrollable(parent)
        {

        }
        
        Composite(Composite const &) = delete;
        Composite(Composite &&);

        std::shared_ptr<Scrollable> horizontal_scroll() const;
        std::shared_ptr<Scrollable> vertifical_scroll() const; 

    private:
        
    };
}

#endif
