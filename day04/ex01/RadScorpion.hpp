#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"
# include <iostream>

class	RadScorpion : public Enemy
{
public	:
	RadScorpion(void);
	RadScorpion(RadScorpion const & radscorpion);
	virtual ~RadScorpion(void);
	RadScorpion &	operator=(RadScorpion const & radscorpion);

	virtual void	takeDamage(int damage);
};

#endif
