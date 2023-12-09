#include <unistd.h>

#include <cursed/curses.hpp>

int main(int argc, char const *argv[])
{
	auto d = std::make_shared<cursed::curses::Shell>();

	while(1) sleep(1);

	d->close();

	return 0;
}
