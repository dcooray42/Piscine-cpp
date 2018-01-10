#include "ClassBullet.hpp"

Bullet::Bullet(void) : _pos_x(0), _pos_y(0), _shooted(0)
{
	return ;
}

Bullet::Bullet(int pos_x, int pos_y) : _pos_x(pos_x), _pos_y(pos_y), _shooted(0)
{
	return ;
}

Bullet::Bullet(Bullet const & bullet)
{
	*this = bullet;
}

Bullet::~Bullet(void)
{
	return ;
}

Bullet &	Bullet::operator=(Bullet const & bullet)
{
	this->_pos_x = bullet._pos_x;
	this->_pos_y = bullet._pos_y;
	return (*this);
}

void	Bullet::move(void)
{
	this->_pos_y -= 1;
	return ;
}

int	Bullet::getPosX(void) const
{
	return (this->_pos_x);
}

int	Bullet::getPosY(void) const
{
	return (this->_pos_y);
}

int	Bullet::getShooted(void) const
{
	return (this->_shooted);
}

void	Bullet::setShooted(int n)
{
	this->_shooted = n;
	return ;
}
