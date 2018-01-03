#include "Enemy.hpp"

Enemy::Enemy(void) : _hp(0), _type("\0")
{
	return ;
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy(Enemy const & enemy)
{
	*this = enemy;
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy &	Enemy::operator=(Enemy const & enemy)
{
	this->_hp = enemy._hp;
	this->_type = enemy._type;
	return (*this);
}

std::string const &	Enemy::getType(void) const
{
	return (this->_type);
}

int	Enemy::getHP(void) const
{
	return (this->_hp);
}

void	Enemy::takeDamage(int damage)
{
	if (this->_hp - damage > 0)
		this->_hp -= damage;
	else
		this->_hp = 0;
	return ;
}

void	Enemy::setType(std::string const & type)
{
	this->_type = type;
	return ;
}

void	Enemy::setHP(int hp)
{
	this->_hp = hp;
	return ;
}
