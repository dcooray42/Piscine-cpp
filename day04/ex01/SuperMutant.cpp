#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy::Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::cout;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & supermutant) : Enemy::Enemy(0, "Super Mutant")
{
	*this = supermutant;
	return ;
}

SuperMutant::~SuperMutant(void)
{
	return ;
}

SuperMutant &	SuperMutant::operator=(SuperMutant const & supermutant)
{
	this->setHP(supermutant.getHP());
	this->setType(supermutant.getType());
	return (*this);
}

void	SuperMutant::takeDamage(int damage)
{
	if (this->getHP())
	{
		damage = (damage > 3 ? damage - 3 : 0);
		this->Enemy::takeDamage(damage);
		if (!this->getHP())
			std::cout << "Aaargh ..." << std::cout;
	}
	return ;
}	
