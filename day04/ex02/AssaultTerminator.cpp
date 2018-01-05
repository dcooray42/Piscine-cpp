#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & assaultterminator)
{
	*this = assaultterminator;
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back ..." << std::endl;
	return ;
}

AssaultTerminator &	AssaultTerminator::operator=(AssaultTerminator const & assaultterminator)
{
	if (this != &assaultterminator)
		*this = assaultterminator;
	return (*this);
}

AssaultTerminator *	AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator(*this));
}

void	AssaultTerminator::battleCry(void) const
{
	std::cout << "This code in unclean. PURIFY IT !" << std::endl;
	return ;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void	AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attack with chainfists *" << std::endl;
	return ;
}
