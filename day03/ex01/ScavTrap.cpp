#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :	_hitPoints(100),
				_maxHitPoints(100),
				_energyPoints(50),
				_maxEnergyPoints(50),
				_level(1),
				_name("\0"),
				_meleeAttackDamage(20),
				_rangedAttackDamage(15),
				_armorDamageReduction(3)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const & name) :	_hitPoints(100),
						_maxHitPoints(100),
						_energyPoints(50),
						_maxEnergyPoints(50),
						_level(1),
						_name(name),
						_meleeAttackDamage(20),
						_rangedAttackDamage(15),
						_armorDamageReduction(3)
{
	std::cout << "Named ScavTrap constructor called" << std::endl;
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
	std::cout << "ScavTrap desctructor called" << std::endl;
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

void	ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage !" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage !" << std::endl;
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int	realDamage = (int)((float)amount * ((100.0f - (float)this->_armorDamageReduction) / 100.0f));

	if (this->_hitPoints)
	{
		std::cout << "SC4V-TP " << this->_name << " took " << realDamage;
		std::cout << " points of damage !" << std::endl;
		if (this->_hitPoints - realDamage > 0)
			this->_hitPoints -= realDamage;
		else
			this->_hitPoints = 0;
	}
	else
	{
		std::cout << "SC4V-TP " << this->_name << " can't take damage anymore, it's already dead !";
		std::cout << std::endl;
	}
	std::cout << "Actual hit points of SC4V-TP " << this->_name;
	std::cout << " : " << this->_hitPoints << " points." << std::endl;
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < this->_maxHitPoints)
	{
		std::cout << "SC4V-TP " << this->_name << " received " << amount;
		std::cout << " heal points !" << std::endl;
		if (this->_hitPoints + (int)amount < this->_maxHitPoints)
			this->_hitPoints += amount;
		else
			this->_hitPoints = this->_maxHitPoints;
	}
	else
	{
		std::cout << "SC4V-TP " << this->_name << " can't receive more hp than it already has. It's not god !";
		std::cout << std::endl;
	}
	std::cout << "Actual hit points of SC4V-TP " << this->_name;
	std::cout << " : " << this->_hitPoints << " points." << std::endl;
	return ;
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
