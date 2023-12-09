#ifndef CURSED_LABEL_HPP_
#define CURSED_LABEL_HPP_

#include <cursed/control.hpp>

namespace cursed
{
    class Label : public Control
    {
    public:
        Label() : Control(parent) {}

        void setAlignment(alignment a);
        alignment getAlignment() const noexcept;

        void setText(std::string_view);
        void setText(std::string &&);
        std::string_view getText() const noexcept;

    private:
    };
}

#endif
