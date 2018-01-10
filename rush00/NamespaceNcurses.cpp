#include "NamespaceNcurses.hpp"
#include "ClassPlayer.hpp"
#include "ClassEnemy.hpp"
#include <ctime>
#include <iostream>

void	Ncurses::init(void)
{
	initscr();
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	noecho();
	curs_set(0);
}

void	Ncurses::drawBorders(int w, int h)
{
	int	i = 0;
	int	j;

	while (i < h)
	{
		j = 0;
		while (j < w)
		{
			if (i == 0 && j == 0)
				mvaddch(i, j, ACS_ULCORNER);
			if (i == 0 && j == w - 1)
				mvaddch(i, j, ACS_URCORNER);
			if ((i == 0 || i == h - 1) && j != 0 && j != w - 1)
				mvaddch(i, j, ACS_HLINE);
			if (i == h - 1 && j == 0)
				mvaddch(i, j, ACS_LLCORNER);
			if (i == h - 1 && j == w - 1)
				mvaddch(i, j, ACS_LRCORNER);
			if (i != 0 && i != h - 1 && (j == 0 || j == w - 1))
				mvaddch(i, j, ACS_VLINE);
			j++;
		}
		i++;
	}
	return ;
}

void	Ncurses::render(void)
{
	int	key;
	int	h;
	int	w;
	clock_t	temp;
	Player	*player;
	Enemy	*enemy;

	getmaxyx(stdscr, h, w);
	player = new Player(w, h);
	enemy = new Enemy[w - 2];
	Enemy::setup(w, h);
	while ((key = getch()) != 27 && player->getAlive())
	{
		clear();
		Ncurses::drawBorders(w, h);
		player->action(key);
		player->render();
		Enemy::render(enemy, player);
		refresh();
		temp = clock() + 50000;
		while (clock() < temp)
		{
		}
	}
	endwin();
	delete player;
	delete [] enemy;
}
