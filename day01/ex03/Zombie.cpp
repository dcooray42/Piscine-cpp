#include "Zombie.hpp"

Zombie::Zombie(void) : _name("\0"), _type ("\0")
{
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type;
	std::cout << ")> Braiiiiiiinnnssss..." << std::endl;
	return ;
}
