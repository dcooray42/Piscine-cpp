#ifndef CLASSPLAYER_HPP
# define CLASSPLAYER_HPP

# include <ncurses.h>
# include "ClassBullet.hpp"

class	Player
{
public	:
	Player(int x, int y);
	virtual	~Player(void);

	typedef struct	_s_list
	{
		Bullet	*content;
		_s_list	*next;
	}		_t_list;

	void	action(int key);
	void	render(void);
	int	getAlive(void) const;
	void	setAlive(void);
	int	getPosX(void) const;
	int	getPosY(void) const;
	Player::_t_list *	getBullet(void);

private	:
	Player(void);
	Player(Player const & player);
	Player &	operator=(Player const & player);

	int	_pos_x;
	int	_pos_y;
	int	_w;
	int	_h;
	int	_alive;

	void	_initBullet(void);
	void	_moveBullet(void);
	void	_renderBullet(void) const;
	void	_destroyBullet(void);

	_t_list	*_bullet;
};

#endif
