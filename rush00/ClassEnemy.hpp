#ifndef CLASSENEMY_HPP
# define CLASSENEMY_HPP

# include <ncurses.h>
# include <cstdlib>
# include <ctime>
# include "ClassPlayer.hpp"

class	Enemy
{
public	:
	Enemy(void);
	virtual ~Enemy(void);

	static void	render(Enemy *enemy, Player *player);
	static void	setup(int w, int h);

private	:
	Enemy(Enemy const & enemy);
	Enemy &	operator=(Enemy const & enemy);

	int	_pos_x;
	int	_pos_y;
	static int	_width, _height;

	void	_randomAppearance(int i);
	void	_renderEnemy(void);
	void	_move(void);
	void	_destroyEnemy(void);
	void	_checkCollision(Player *player);
};

#endif
