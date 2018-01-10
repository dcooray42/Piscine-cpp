#include "NamespaceNcurses.hpp"

int	main(void)
{
	Ncurses::init();
	Ncurses::render();
	while (1) {}
	return (0);
}
