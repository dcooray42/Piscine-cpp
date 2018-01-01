#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = "\0";
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	return ;
}

FragTrap::FragTrap(std::string const & name)
{
	std::cout << "Named FragTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	return ;
}

FragTrap::FragTrap(FragTrap const & fragtrap)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = fragtrap;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & fragtrap)
{
	this->_hitPoints = fragtrap._hitPoints;
	this->_maxHitPoints = fragtrap._maxHitPoints;
	this->_energyPoints = fragtrap._energyPoints;
	this->_maxEnergyPoints = fragtrap._maxEnergyPoints;
	this->_level = fragtrap._level;
	this->_name = fragtrap._name;
	this->_meleeAttackDamage = fragtrap._meleeAttackDamage;
	this->_rangedAttackDamage = fragtrap._rangedAttackDamage;
	this->_armorDamageReduction = fragtrap._armorDamageReduction;
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int	random = std::rand() % 5;

	if (this->_energyPoints - 25 >= 0)
	{
		std::cout << "FR4G-TP " << this->_name;
		if (random == 0)
		{
			std::cout << " farts at " << target << " at high range, ";
			std::cout << "causing 25 points of damage !" << std::endl;
		}
		else if (random == 1)
		{
			std::cout << " farts at " << target << " at middle range, ";
			std::cout << "causing 50 points of damage !" << std::endl;
		}
		else if (random == 2)
		{
			std::cout << " farts at " << target << " at close range, ";
			std::cout << "causing 75 points of damage !" << std::endl;
		}
		else if (random == 3)
		{
			std::cout << " farts while " << target << "'s nose was near ";
			std::cout << "its asshole, causing an instant one shot !" << std::endl;
		}
		else
		{
			std::cout << " wants to attack " << target << "but is tired. ";
			std::cout << "Leaves the battle dealing 0 point of damage !" << std::endl;
		}
		this->_energyPoints -= 25;
	}
	else
		std::cout << "FR4G-TP " << this->_name << " can't use special attacks anymore !" << std::endl;
	std::cout << "Actual energy points of FR4G-TP " << this->_name;
	std::cout << " : " << this->_energyPoints << " points." << std::endl;
	return ;
}
