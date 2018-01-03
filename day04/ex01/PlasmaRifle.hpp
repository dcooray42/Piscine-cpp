#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"
# include <iostream>

class	PlasmaRifle : public AWeapon
{
public	:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & plasmarifle);
	virtual ~PlasmaRifle(void);
	PlasmaRifle &	operator=(PlasmaRifle const & plasmarifle);

	virtual void	attack(void) const;
};

#endif
