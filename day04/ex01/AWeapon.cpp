#include "AWeapon.hpp"

AWeapon::AWeapon(void) : _name("\0"), _apCost(0), _damage(0)
{
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apCost(apcost), _damage(damage)
{
	return ;
}

AWeapon::AWeapon(AWeapon const & aweapon)
{
	*this = aweapon;
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon &	AWeapon::operator=(AWeapon const & aweapon)
{
	this->_name = aweapon._name;
	this->_apCost = aweapon._apCost;
	this->_damage = aweapon._damage;
	return (*this);
}

std::string const &	AWeapon::getName(void) const
{
	return (this->_name);
}

int	AWeapon::getAPCost(void) const
{
	return (this->_apCost);
}

int	AWeapon::getDamage(void) const
{
	return (this->_damage);
}

void	AWeapon::setName(std::string const & name)
{
	this->_name = name;
	return ;
}

void	AWeapon::setAPCost(int apcost)
{
	this->_apCost = apcost;
	return ;
}

void	AWeapon::setDamage(int damage)
{
	this->_damage = damage;
	return ;
}
