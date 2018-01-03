#include "Peon.hpp"

Peon::Peon(void) : Victim::Victim("\0")
{
	return ;
}

Peon::Peon(std::string const & name) : Victim::Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon const & peon) : Victim::Victim(peon.getName())
{
	*this = peon;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon &	Peon::operator=(Peon const & peon)
{
	this->_name = peon._name;
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
	return ;
}

std::string const &	Peon::getName(void) const
{
	return (this->_name);
}
