#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon::AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & plasmarifle) : AWeapon::AWeapon("\0", 0, 0)
{
	*this = plasmarifle;
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

PlasmaRifle &	PlasmaRifle::operator=(PlasmaRifle const & plasmarifle)
{
	this->setName(plasmarifle.getName());
	this->setAPCost(plasmarifle.getAPCost());
	this->setDamage(plasmarifle.getDamage());
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
