#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : _name("\0"),	_title("\0")
{
	return ;
}

Sorcerer::Sorcerer(std::string const & name, std::string const & title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & sorcerer)
{
	*this = sorcerer;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. ";
	std::cout << "Consequences will never be the same !" << std::endl;
	return ;
}

Sorcerer &	Sorcerer::operator=(Sorcerer const & sorcerer)
{
	this->_name = sorcerer._name;
	this->_title = sorcerer._title;
	return (*this);
}

void	Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
	return ;
}

std::string const &	Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string const &	Sorcerer::getTitle(void) const
{
	return (this->_title);
}

std::ostream &	operator<<(std::ostream & o, Sorcerer const & sorcerer)
{
	o << "I am " <<  sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies !" << std::endl;
	return (o);
}
