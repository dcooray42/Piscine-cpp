#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :	_hitPoints(0),
				_maxHitPoints(0),
				_energyPoints(0),
				_maxEnergyPoints(0),
				_level(0),
				_name("\0"),
				_meleeAttackDamage(0),
				_rangedAttackDamage(0),
				_armorDamageReduction(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & claptrap)
{
	std::cout << "Named ClapTrap constructor called" << std::endl;
	*this = claptrap;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & claptrap)
{
	this->_hitPoints = claptrap._hitPoints;
	this->_maxHitPoints = claptrap._maxHitPoints;
	this->_energyPoints = claptrap._energyPoints;
	this->_maxEnergyPoints = claptrap._maxEnergyPoints;
	this->_level = claptrap._level;
	this->_name = claptrap._name;
	this->_meleeAttackDamage = claptrap._meleeAttackDamage;
	this->_rangedAttackDamage = claptrap._rangedAttackDamage;
	this->_armorDamageReduction = claptrap._armorDamageReduction;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << "CL4P-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage !" << std::endl;
	return ;
}

void	ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << "CL4P-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage !" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	realDamage = (int)((float)amount * ((100.0f - (float)this->_armorDamageReduction) / 100.0f));

	if (this->_hitPoints)
	{
		std::cout << "CL4P-TP " << this->_name << " took " << realDamage;
		std::cout << " points of damage !" << std::endl;
		if (this->_hitPoints - realDamage > 0)
			this->_hitPoints -= realDamage;
		else
			this->_hitPoints = 0;
	}
	else
	{
		std::cout << "CL4P-TP " << this->_name << " can't take damage anymore, it's already dead !";
		std::cout << std::endl;
	}
	std::cout << "Actual hit points of CL4P-TP " << this->_name;
	std::cout << " : " << this->_hitPoints << " points." << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < this->_maxHitPoints)
	{
		std::cout << "CL4P-TP " << this->_name << " received " << amount;
		std::cout << " heal points !" << std::endl;
		if (this->_hitPoints + (int)amount < this->_maxHitPoints)
			this->_hitPoints += amount;
		else
			this->_hitPoints = this->_maxHitPoints;
	}
	else
	{
		std::cout << "CL4P-TP " << this->_name << " can't receive more hp than it already has. It's not god !";
		std::cout << std::endl;
	}
	std::cout << "Actual hit points of CL4P-TP " << this->_name;
	std::cout << " : " << this->_hitPoints << " points." << std::endl;
	return ;
}

std::string const &	ClapTrap::getName(void) const
{
	return (this->_name);
}
