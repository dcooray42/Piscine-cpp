#include "Victim.hpp"

Victim::Victim(void) : _name("\0")
{
	return ;
}

Victim::Victim(std::string const & name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return ;
}

Victim::Victim(Victim const & victim)
{
	*this = victim;
	return ;
}

Victim &	Victim::operator=(Victim const & victim)
{
	this->_name = victim._name;
	return (*this);
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
	return ;
}

std::string const &	Victim::getName(void) const
{
	return (this->_name);
}

std::ostream &	operator<<(std::ostream & o, Victim const & victim)
{
	std::cout << "I'm " << victim.getName() << " and I like otters !" << std::endl;
	return (o);
}
