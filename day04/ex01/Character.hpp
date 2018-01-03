#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
public	:
	Character(std::string const & name);
	Character(Character const & character);
	virtual ~Character(void);
	Character &	operator=(Character const & character);

	void	recoverAP(void);
	void	equip(AWeapon *aweapon);
	void	attack(Enemy *enemy);
	std::string const &	getName(void) const;
	AWeapon	*getAWeapon(void) const;
	int	getAP(void) const;

private	:
	Character(void);

	std::string	_name;
	int	_ap;
	AWeapon	*_aweapon;
};

std::ostream &	operator<<(std::ostream & o, Character const & character);

#endif
