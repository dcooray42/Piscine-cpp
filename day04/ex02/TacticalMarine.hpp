#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class	TacticalMarine : public ISpaceMarine
{
public	:
	TacticalMarine(void);
	virtual	~TacticalMarine(void);

	virtual TacticalMarine *	clone(void) const;
	virtual void	battleCry(void) const;
	virtual void	rangedAttack(void) const;
	virtual void	meleeAttack(void) const;

private	:
	TacticalMarine(TacticalMarine const & tacticalmarine);
	TacticalMarine &	operator=(TacticalMarine const & tacticalmarine);
};

#endif
