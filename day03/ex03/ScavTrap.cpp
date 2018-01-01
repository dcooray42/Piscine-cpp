#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = "\0";
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	return ;
}

ScavTrap::ScavTrap(std::string const & name)
{
	std::cout << "Named ScavTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & scavtrap)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = scavtrap;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & scavtrap)
{
	this->_hitPoints = scavtrap._hitPoints;
	this->_maxHitPoints = scavtrap._maxHitPoints;
	this->_energyPoints = scavtrap._energyPoints;
	this->_maxEnergyPoints = scavtrap._maxEnergyPoints;
	this->_level = scavtrap._level;
	this->_name = scavtrap._name;
	this->_meleeAttackDamage = scavtrap._meleeAttackDamage;
	this->_rangedAttackDamage = scavtrap._rangedAttackDamage;
	this->_armorDamageReduction = scavtrap._armorDamageReduction;
	return (*this);
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	int	random = std::rand() % 5;

	std::cout << "SC4V-TP " << this->_name << " challenges " << target;
	if (random == 0)
		std::cout << " to scream as loud as possible !" << std::endl;
	else if (random == 1)
		std::cout << " to flip the person next to you off !"  << std::endl;
	else if (random == 2)
		std::cout << " to say to the person next to you that you like him/her for no reason !"  << std::endl;
	else if (random == 3)
		std::cout << " to run around the cluster for 5 minutes !" << std::endl;
	else
		std::cout << " to ask to the person next to you how babies are made !" << std::endl;
	return ;
}
