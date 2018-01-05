#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class	AssaultTerminator : public ISpaceMarine
{
public	:
	AssaultTerminator(void);
	virtual	~AssaultTerminator(void);

	virtual	AssaultTerminator *	clone(void) const;
	virtual void	battleCry(void) const;
	virtual void	rangedAttack(void) const;
	virtual void	meleeAttack(void) const;

private	:
	AssaultTerminator(AssaultTerminator const & assaultterminator);
	AssaultTerminator &	operator=(AssaultTerminator const & assaultterminator);
};

#endif
