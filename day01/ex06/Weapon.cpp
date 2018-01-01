#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _str(str)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const &	Weapon::getType(void) const
{
	return (this->_str);
}

void			Weapon::setType(std::string const & str)
{
	this->_str = str;
	return ;
}
