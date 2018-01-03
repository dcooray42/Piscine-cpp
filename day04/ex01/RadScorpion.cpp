#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy::Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const & radscorpion) : Enemy::Enemy(0, "\0")
{
	*this = radscorpion;
	return ;
}

RadScorpion::~RadScorpion(void)
{
	return ;
}

RadScorpion &	RadScorpion::operator=(RadScorpion const & radscorpion)
{
	this->setHP(radscorpion.getHP());
	this->setType(radscorpion.getType());
	return (*this);
}

void	RadScorpion::takeDamage(int damage)
{
	if (this->getHP())
	{
		this->Enemy::takeDamage(damage);
		if (!this->getHP())
			std::cout << "* SPROTCH *" << std::endl;
	}
	return ;
}
