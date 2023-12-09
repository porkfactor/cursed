#ifndef CURSED_BUTTON_HPP_
#define CURSED_BUTTON_HPP_

#include <cursed/composite.hpp>

namespace cursed
{
    class Button : public Control
    {
    public:
        Button(Composite parent);

        void setAlignment(alignment a);
        void setText(std::string &&);
        std::string_view getText() const;

    private:
    };
}

#endif
