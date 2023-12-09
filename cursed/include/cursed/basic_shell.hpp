#ifndef CURSED_SHELL_HPP_
#define CURSED_SHELL_HPP_

#include <cursed/basic_composite.hpp>
#include <cursed/basic_display.hpp>

namespace cursed
{
    class string_view;

    template<typename _Impl>
    class basic_shell : public basic_composite<_Impl>
    {
    public:
        using display_type = cursed::basic_display<typename _Impl::display_type>;

        basic_shell();
        basic_shell(std::shared_ptr<display_type>);
        basic_shell(std::shared_ptr<basic_shell>);

        void close();

        Rectangle computeTrim(Rectangle) const noexcept;
        Rectangle getClientArea(void) const noexcept;

        cursed::string_view getText(void) const noexcept;
        void setText(cursed::string_view);

        inline _Impl &impl() { return impl_; }
        inline _Impl const &impl() const { return impl_; }

    private:
        _Impl impl_;
    };
}

#include <cursed/impl/basic_shell.cpp>

#endif
