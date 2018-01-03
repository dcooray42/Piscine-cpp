#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"
# include <iostream>

class	PowerFist : public AWeapon
{
public	:
	PowerFist(void);
	PowerFist(PowerFist const & powerfist);
	virtual ~PowerFist(void);
	PowerFist &	operator=(PowerFist const & powerfist);

	virtual void	attack(void) const;
};

#endif
