#ifndef NAMESPACENCURSES_HPP
# define NAMESPACENCURSES_HPP

# include <ncurses.h>

namespace	Ncurses
{
	void	init(void);
	void	render(void);
	void	drawBorders(int w, int h);
};

#endif
