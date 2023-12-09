#ifndef CURSED_TEXT_HPP_
#define CURSED_TEXT_HPP_

#include <cursed/scrollable.hpp>

namespace cursed
{
    class Text : public Scrollable
    {
        Text(std::shared_ptr<Composite> parent) :
            Scrollable(parent)
        {
            void setText(std::string_view);
            std::string_view getText();
            std::string_view getText(std::size_t start, std::size_t end);
        }


    };
}

#endif
