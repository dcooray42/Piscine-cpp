#include "Character.hpp"

Character::Character(void) : _name("\0"), _ap(0), _aweapon(NULL)
{
	return ;
}

Character::Character(std::string const & name) : _name(name), _ap(40), _aweapon(NULL)
{
	return ;
}

Character::Character(Character const & character)
{
	*this = character;
	return ;
}

Character::~Character(void)
{
	return ;
}

Character &	Character::operator=(Character const & character)
{
	this->_name = character._name;
	this->_ap = character._ap;
	return (*this);
}

void	Character::recoverAP(void)
{
	this->_ap = (this->_ap + 10 < 40 ? this->_ap + 10 : 40);
	return ;
}

void	Character::equip(AWeapon *aweapon)
{
	this->_aweapon = aweapon;
	return ;
}

void	Character::attack(Enemy *enemy)
{
	if (enemy && this->_aweapon)
	{
		if (this->_ap - this->_aweapon->getAPCost() >= 0 && enemy->getHP())
		{
			std::cout << this->_name << " attacks " << enemy->getType() << " with a ";
			std::cout << this->_aweapon->getName() << std::endl;
			this->_aweapon->attack();
			enemy->takeDamage(this->_aweapon->getDamage());
			this->_ap -= this->_aweapon->getAPCost();
		}
	}
	return ;
}

AWeapon *	Character::getAWeapon(void) const
{
	return (this->_aweapon);
}

int	Character::getAP(void) const
{
	return (this->_ap);
}

std::string const &	Character::getName(void) const
{
	return (this->_name);
}

std::ostream &	operator<<(std::ostream & o, Character const & character)
{
	if (character.getAWeapon())
	{
		o << character.getName() << " has " << character.getAP() << " AP and wields ";
		o << character.getAWeapon()->getName() << std::endl;
	}
	else
		o << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	return (o);
}
