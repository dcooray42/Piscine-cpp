#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class	HumanA
{
public	:
	HumanA(std::string const & str, Weapon & weapon);
	~HumanA(void);

	void	attack() const;

private	:
	std::string	_name;
	Weapon		*_weapon;
};
#endif
