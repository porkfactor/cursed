#ifndef CURSED_TABLE_HPP_
#define CURSED_TABLE_HPP_

#include <cursed/composite.hpp>

namespace cursed
{
    class Table : public Composite
    {
    public:
        using index_type = unsigned int;

        Table(std::shared_ptr<Composite> parent) :
            Composite(parent)
        {

        }

        void clear();
        void setSelection(cursed::span<index_type> indices);
        void setSelection(index_type start, index_type end);

    private:
    };
}

#endif
