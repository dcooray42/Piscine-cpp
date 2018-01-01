#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <ctime>
# include <cstdlib>

class	ZombieHorde
{
public	:
	ZombieHorde(int n);
	~ZombieHorde(void);

	Zombie	*zombie;

	void	announce(void) const;

private	:
	std::string	_name[100];
	std::string	_type[10];
	int		_n;

	static void	_initName(std::string *_name);
	static void	_initType(std::string *_type);
	void		_initZombie(void);
	void		_newZombie(Zombie *zombie, std::string name);
	void		_randomChump(Zombie *zombie);
	void		_setZombieType(Zombie *zombie);
};
#endif
