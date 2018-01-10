#ifndef CLASSBULLET_HPP
# define CLASSBULLET_HPP

class	Bullet
{
public	:
	Bullet(int pos_x, int pos_y);
	~Bullet(void);

	Bullet &	operator=(Bullet const & bullet);

	void	move(void);
	void	setShooted(int n);
	int	getPosX(void) const;
	int	getPosY(void) const;
	int	getShooted(void) const;

private	:
	Bullet(void);
	Bullet(Bullet const & bullet);

	int	_pos_x;
	int	_pos_y;
	int	_shooted;
};

#endif
