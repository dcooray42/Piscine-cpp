#include "FragTrap.hpp"

FragTrap::FragTrap(void) :	_hitPoints(100),
				_maxHitPoints(100),
				_energyPoints(100),
				_maxEnergyPoints(100),
				_level(1),
				_name("\0"),
				_meleeAttackDamage(30),
				_rangedAttackDamage(20),
				_armorDamageReduction(5)
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const & name) :	_hitPoints(100),
						_maxHitPoints(100),
						_energyPoints(100),
						_maxEnergyPoints(100),
						_level(1),
						_name(name),
						_meleeAttackDamage(30),
						_rangedAttackDamage(20),
						_armorDamageReduction(5)
{
	std::cout << "Named FragTrap constructor called" << std::endl;
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

void	FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage !" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage !" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int	realDamage = (int)((float)amount * ((100.0f - (float)this->_armorDamageReduction) / 100.0f));

	if (this->_hitPoints)
	{
		std::cout << "FR4G-TP " << this->_name << " took " << realDamage;
		std::cout << " points of damage !" << std::endl;
		if (this->_hitPoints - realDamage > 0)
			this->_hitPoints -= realDamage;
		else
			this->_hitPoints = 0;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_name << " can't take damage anymore, it's already dead !";
		std::cout << std::endl;
	}
	std::cout << "Actual hit points of FR4G-TP " << this->_name;
	std::cout << " : " << this->_hitPoints << " points." << std::endl;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < this->_maxHitPoints)
	{
		std::cout << "FR4G-TP " << this->_name << " received " << amount;
		std::cout << " heal points !" << std::endl;
		if (this->_hitPoints + (int)amount < this->_maxHitPoints)
			this->_hitPoints += amount;
		else
			this->_hitPoints = this->_maxHitPoints;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_name << " can't receive more hp than it already has. It's not god !";
		std::cout << std::endl;
	}
	std::cout << "Actual hit points of FR4G-TP " << this->_name;
	std::cout << " : " << this->_hitPoints << " points." << std::endl;
	return ;
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
