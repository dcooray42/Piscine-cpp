#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <string>
# include <iostream>

class	Squad : public ISquad
{
public	:
	Squad(void);
	virtual	~Squad(void);
	virtual int	getCount(void) const;
	virtual ISpaceMarine *	getUnit(int n) const;
	virtual int	push(ISpaceMarine *ispacemarine);

private	:
	Squad(Squad const & squad);
	Squad &	operator=(Squad const & squad);

	typedef struct	_s_list
	{
		int	count;
		ISpaceMarine	*content;
		_s_list	*next;
	}		_t_list;
	_t_list	*_list;
};

#endif
