#ifndef CURSED_WIDGET_HPP_
#define CURSED_WIDGET_HPP_

#include <memory>

#include <cursed/basic_display.hpp>

namespace cursed
{	class Listener;
	class Event;

	template<typename _Impl>
	class basic_widget
	{
	public:
		basic_widget();
		basic_widget(std::shared_ptr<basic_widget> parent);
		basic_widget(basic_widget const &) = delete;
		basic_widget(basic_widget &&);

		std::shared_ptr<basic_display<_Impl>> getDisplay() const { return parent_->getDisplay(); }

		void notify(Event const &e);
		void addListener(std::shared_ptr<Listener>);

		void setData(void *p) { data_ = p; };
		void *getData() const noexcept { return data_; };

	private:
		std::shared_ptr<basic_widget> parent_;
		void *data_;
	};
}

#include <cursed/impl/basic_widget.cpp>

#endif
