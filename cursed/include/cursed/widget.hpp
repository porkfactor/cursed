#ifndef CURSED_WIDGET_HPP_
#define CURSED_WIDGET_HPP_

#include <memory>
#include <cursed/cursed.hpp>

namespace cursed
{	class Listener;
	class Event;

	class Widget
	{
	public:
		using pointer_type = std::shared_ptr<Widget>;

		Widget(pointer_type parent);
		Widget(Widget const &) = delete;
		Widget(Widget &&);

		pointer_type parent() const { return parent_; }
		virtual pointer_type display() const { return parent_->display(); }

		void notify(Event const &e);
		void addListener(std::shared_ptr<Listener>);

		void setData(void *p) { data_ = p; };
		void *getData() const noexcept { return data_; };

	private:
		pointer_type parent_;
		void *data_;
	};
}

#endif
