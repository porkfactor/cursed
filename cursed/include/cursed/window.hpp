#ifndef CURSED_BASIC_WINDOW_HPP_
#define CURSED_BASIC_WINDOW_HPP_

#include <utility>

namespace cursed
{
	class basic_window
	{
	public:
		using location_type = point<int>;

		location_type const &location(void) const { return location_; }

	private:
		location_type location_;
	};
}

#endif
