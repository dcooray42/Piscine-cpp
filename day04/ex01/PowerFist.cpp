#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon::AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist(PowerFist const & powerfist) : AWeapon::AWeapon("\0", 0, 0)
{
	*this = powerfist;
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist &	PowerFist::operator=(PowerFist const & powerfist)
{
	this->setName(powerfist.getName());
	this->setAPCost(powerfist.getAPCost());
	this->setDamage(powerfist.getDamage());
	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
