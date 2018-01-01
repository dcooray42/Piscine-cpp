#include "HumanA.hpp"

HumanA::HumanA(std::string const & str, Weapon & weapon) : _name(str), _weapon(&weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	return ;
}
