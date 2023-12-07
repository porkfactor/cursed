#include <unistd.h>

#include <cursed/display.hpp>

int main(int argc, char const *argv[])
{
	auto d = cursed::Display::getCurrent();

	while(1) sleep(1);

	d->close();

	return 0;
}
