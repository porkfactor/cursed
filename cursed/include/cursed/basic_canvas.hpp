#ifndef CURSED_CANVAS_HPP_
#define CURSED_CANVAS_HPP_

#include <cursed/composite.hpp>

namespace cursed
{
    class Canvas : public Composite
    {
    public:
        Canvas(std::shared_ptr<Composite> parent) :
            Composite(parent)
        {}

    private:
    };
}

#endif
