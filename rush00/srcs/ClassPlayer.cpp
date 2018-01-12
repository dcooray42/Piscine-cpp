#include "ClassPlayer.hpp"
#include <iostream>

Player::Player(void) : _pos_x(0), _pos_y(0), _w(0), _h(0), _alive(1), _bullet(NULL)
{
	return ;
}

Player::Player(int w, int h) : _pos_x(w / 2 + 1), _pos_y(h - 3), _w(w), _h(h), _alive(1), _bullet(NULL)
{
	return ;
}

Player::Player(Player const & player)
{
	*this = player;
	return ;
}

Player::~Player(void)
{
	_t_list	*tmp;

	while (_bullet)
	{
		tmp = _bullet->next;
		delete _bullet->content;
		delete _bullet;
		_bullet = tmp;
	}
	return ;
}

Player &	Player::operator=(Player const & player)
{
	this->_pos_x = player._pos_x;
	this->_pos_y = player._pos_y;
	this->_w = player._w;
	this->_h = player._h;
	return (*this);
}

void	Player::action(int key)
{
	if (key == KEY_UP && _pos_y - 1)
		_pos_y--;
	if (key == KEY_DOWN && _pos_y + 1 != _h - 1)
		_pos_y++;
	if (key == KEY_LEFT && _pos_x - 1)
		_pos_x--;
	if (key == KEY_RIGHT && _pos_x + 1 != _w - 1)
		_pos_x++;
	if (key == ' ' && _pos_y - 1)
		_initBullet();
	return ;
}

void	Player::_initBullet(void)
{
	_t_list	*newBullet = new _t_list;
	newBullet->content = new Bullet(this->_pos_x, this->_pos_y);
	newBullet->next = this->_bullet;
	this->_bullet = newBullet;
	return ;
}

void	Player::_moveBullet(void)
{
	_t_list	*tmp = this->_bullet;

	while (tmp)
	{
		tmp->content->move();
		tmp = tmp->next;
	}
	return ;
}

void	Player::_renderBullet(void) const
{
	_t_list	*tmp = this->_bullet;

	while (tmp)
	{
		if (tmp->content->getPosY() > 0)
			mvaddch(tmp->content->getPosY(), tmp->content->getPosX(), '|');
		tmp = tmp->next;
	}
	return ;
}

void	Player::_destroyBullet(void)
{
	_t_list	*tmp = this->_bullet;

	if (this->_bullet)
	{
		if (!this->_bullet->next)
		{
			if (!this->_bullet->content->getPosY())
			{
				delete this->_bullet->content;
				delete this->_bullet;
				this->_bullet = NULL;
			}
			return ;
		}
		while (this->_bullet->next->next)
			this->_bullet = this->_bullet->next;
		if (this->_bullet->next)
		{
			if (!this->_bullet->next->content->getPosY())
			{
				delete this->_bullet->next->content;
				delete this->_bullet->next;
				this->_bullet->next = NULL;
			}
		}
		this->_bullet = tmp;
	}
	return ;
}

void	Player::render(void)
{
	this->_moveBullet();
	this->_destroyBullet();
	mvaddch(this->_pos_y, this->_pos_x, '^');
	this->_renderBullet();
	return ;
}

int	Player::getAlive(void) const
{
	return (this->_alive);
}

void	Player::setAlive(void)
{
	this->_alive = 0;
	return ;
}

int	Player::getPosX(void) const
{
	return (this->_pos_x);
}

int	Player::getPosY(void) const
{
	return (this->_pos_y);
}

_t_list *	Player::getBullet(void) const
{
	return (this->_bullet);
}
