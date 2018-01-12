#ifndef NAMESPACENCURSES_HPP
# define NAMESPACENCURSES_HPP

# include <ncurses.h>
# include "ClassPlayer.hpp"
# include "ClassEnemy.hpp"

namespace	Ncurses
{
	void	init(void);
	void	render(void);
	void	drawBorders(int w, int h);
};

#endif
