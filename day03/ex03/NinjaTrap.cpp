#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "Default NinjaTrap constructor called" << std::endl;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = "\0";
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	return ;
}

NinjaTrap::NinjaTrap(std::string const & name)
{
	std::cout << "Named NinjaTrap constructor called" << std::endl;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & ninjatrap)
{
	std::cout << "Copy NinjaTrap constructor called" << std::endl;
	*this = ninjatrap;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap destructor called" << std::endl;
	return ;
}

NinjaTrap &	NinjaTrap::operator=(NinjaTrap const & ninjatrap)
{
	this->_hitPoints = ninjatrap._hitPoints;
	this->_maxHitPoints = ninjatrap._maxHitPoints;
	this->_energyPoints = ninjatrap._energyPoints;
	this->_maxEnergyPoints = ninjatrap._maxEnergyPoints;
	this->_level = ninjatrap._level;
	this->_name = ninjatrap._name;
	this->_meleeAttackDamage = ninjatrap._meleeAttackDamage;
	this->_rangedAttackDamage = ninjatrap._rangedAttackDamage;
	this->_armorDamageReduction = ninjatrap._armorDamageReduction;
	return (*this);
}

void	NinjaTrap::ninjaShoebox(FragTrap const & fragtrap) const
{
	std::cout << "N1NJ-TP " << this->_name << " attacks FR4G-TP " << fragtrap.getName();
	std::cout << " with the following attack : Ryu ga waga teki wo kurau !" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & scavtrap) const
{
	std::cout << "N1NJ-TP " << this->_name << " attacks SC4V-TP " << scavtrap.getName();
	std::cout << " with the following attack : Ryujin no ken wo kurae !" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & ninjatrap) const
{
	std::cout << "N1NJ-TP " << this->_name << " attacks N1NJ-TP " << ninjatrap._name;
	std::cout << " with the following attack : Kage Bunshin no Jutsu, Futon : Rasenshuriken !";
	std::cout << std::endl;
	return ;
}
