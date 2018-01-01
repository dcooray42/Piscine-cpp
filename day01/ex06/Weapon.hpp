#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
public	:
	Weapon(std::string str);
	~Weapon(void);

	std::string const &	getType(void) const;
	void			setType(std::string const & str);

private	:
	std::string	_str;
};
#endif
