#ifndef CURSED_SHELL_HPP_
#define CURSED_SHELL_HPP_

#include <cursed/composite.hpp>
#include <cursed/display.hpp>

namespace cursed
{
    class Shell : public Composite
    {
        Shell();
        Shell(std::shared_ptr<Display> parent);
    };
}

#endif
