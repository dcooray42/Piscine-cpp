#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class	AWeapon
{
public	:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual	~AWeapon(void);
	std::string const &	getName(void) const;
	int	getAPCost(void) const;
	int	getDamage(void) const;
	virtual void	attack(void) const = 0;

	void	setName(std::string const & name);
	void	setAPCost(int apcost);
	void	setDamage(int damage);

private	:
	AWeapon(void);
	AWeapon(AWeapon const & aweapon);
	AWeapon &	operator=(AWeapon const & aweapon);

	std::string	_name;
	int		_apCost;
	int		_damage;
};

#endif
