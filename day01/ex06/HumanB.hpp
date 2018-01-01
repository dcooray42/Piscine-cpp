#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class	HumanB
{
public	:
	HumanB(std::string const & str);
	~HumanB(void);

	void	setWeapon(Weapon & weapon);
	void	attack(void) const;

private	:
	std::string	_name;
	Weapon		*_weapon;
};
#endif
